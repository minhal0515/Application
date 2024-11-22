#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        
        // Calculate the minimum jumps needed in x and y directions
        int jumps_x = (x + k - 1) / k; // Equivalent to ceil(x / k)
        int jumps_y = (y + k - 1) / k; // Equivalent to ceil(y / k)
        
        // Total number of moves required
        int total_moves = jumps_x + jumps_y;
        
        // If total_moves is odd, it needs to be even
        if (total_moves % 2 != 0) {
            total_moves++;
        }
        
        cout << total_moves << endl;
    }
    return 0;
}
