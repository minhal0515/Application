#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int CELL_SIZE = 40;
const int WINDOW_WIDTH = 8 * CELL_SIZE + 50;
const int WINDOW_HEIGHT = 8 * CELL_SIZE + 100;

HWND hwnd;
vector<vector<char>> game_map;
pair<int, int> player_pos, dest;

// Forward declarations
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void DrawGame(HDC hdc);
void UpdateGame(int key);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Initialize game state
    srand(time(0));
    game_map = vector<vector<char>>(8, vector<char>(8, '.'));
    player_pos = {3, 0};
    dest = {3, 7};
    
    // Place dragons randomly
    for(int i = 0; i < 6; i++) {
        int row, col;
        do {
            row = rand() % 8;
            col = rand() % 8;
        } while ((row == player_pos.first && col == player_pos.second) || 
                 (row == dest.first && col == dest.second) || 
                 game_map[row][col] == 'D');
        game_map[row][col] = 'D';
    }

    // Register window class
    const char CLASS_NAME[] = "HomeStretchWindow";
    
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    
    RegisterClass(&wc);
    
    // Create window
    hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "Home Stretch Game",
        WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX,
        CW_USEDEFAULT, CW_USEDEFAULT,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        NULL, NULL, hInstance, NULL
    );
    
    if (hwnd == NULL) return 0;
    
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);
    
    // Message loop
    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    
    return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            DrawGame(hdc);
            EndPaint(hwnd, &ps);
            return 0;
        }
            
        case WM_KEYDOWN:
            UpdateGame(wParam);
            InvalidateRect(hwnd, NULL, TRUE);
            return 0;
            
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }
    
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void DrawGame(HDC hdc) {
    RECT clientRect;
    GetClientRect(hwnd, &clientRect);
    
    // Clear background
    HBRUSH bgBrush = CreateSolidBrush(RGB(0, 0, 0));
    FillRect(hdc, &clientRect, bgBrush);
    DeleteObject(bgBrush);
    
    // Set text properties
    SetTextColor(hdc, RGB(255, 255, 255));
    SetBkColor(hdc, RGB(0, 0, 0));
    
    // Draw title
    TextOut(hdc, 20, 10, "HOME STRETCH", 12);
    
    // Draw game board
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int x = j * CELL_SIZE + 20;
            int y = i * CELL_SIZE + 50;
            
            // Draw cell
            RECT cellRect = {x, y, x + CELL_SIZE, y + CELL_SIZE};
            HBRUSH cellBrush = CreateSolidBrush(RGB(40, 40, 40));
            FillRect(hdc, &cellRect, cellBrush);
            DeleteObject(cellBrush);
            
            // Draw cell border
            HPEN borderPen = CreatePen(PS_SOLID, 2, RGB(80, 80, 80));
            HPEN oldPen = (HPEN)SelectObject(hdc, borderPen);
            MoveToEx(hdc, x, y, NULL);
            LineTo(hdc, x + CELL_SIZE, y);
            LineTo(hdc, x + CELL_SIZE, y + CELL_SIZE);
            LineTo(hdc, x, y + CELL_SIZE);
            LineTo(hdc, x, y);
            SelectObject(hdc, oldPen);
            DeleteObject(borderPen);
            
            // Draw game element
            char symbol[2] = {'.', 0};
            if (player_pos.first == i && player_pos.second == j) {
                symbol[0] = 'P';
                SetTextColor(hdc, RGB(100, 150, 255));
            } else if (dest.first == i && dest.second == j) {
                symbol[0] = 'G';
                SetTextColor(hdc, RGB(100, 255, 100));
            } else if (game_map[i][j] == 'D') {
                symbol[0] = 'D';
                SetTextColor(hdc, RGB(255, 100, 100));
            } else {
                SetTextColor(hdc, RGB(200, 200, 200));
            }
            
            TextOut(hdc, x + 15, y + 12, symbol, 1);
        }
    }
    
    // Draw instructions
    SetTextColor(hdc, RGB(255, 255, 255));
    TextOut(hdc, 20, 8 * CELL_SIZE + 70, "Use WASD or Arrow keys to move", 31);
    TextOut(hdc, 20, 8 * CELL_SIZE + 90, "Avoid dragons (D) and reach the goal (G)", 40);
}

void UpdateGame(int key) {
    int d1 = 0, d2 = 0;
    
    switch (key) {
        case 'W': case VK_UP:    d1 = -1; break;
        case 'S': case VK_DOWN:  d1 = 1; break;
        case 'A': case VK_LEFT:  d2 = -1; break;
        case 'D': case VK_RIGHT: d2 = 1; break;
        default: return;
    }
    
    int n1 = player_pos.first + d1;
    int n2 = player_pos.second + d2;
    
    if (n1 >= 0 && n1 < 8 && n2 >= 0 && n2 < 8) {
        player_pos = {n1, n2};
        
        if (game_map[n1][n2] == 'D') {
            MessageBox(hwnd, "GAME OVER! You hit a dragon!", "Home Stretch", MB_OK);
            PostQuitMessage(0);
        } else if (player_pos == dest) {
            MessageBox(hwnd, "YOU WIN! Reached the goal safely!", "Home Stretch", MB_OK);
            PostQuitMessage(0);
        }
    }
}