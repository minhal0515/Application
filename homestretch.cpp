#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[33m"
#define YELLOW "\033[34m"
#define RESET "\033[0m"

void hideCursor(){
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible=false;
	SetConsoleCursorInfo(out, &cursorInfo);
}
void mctt(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD topLeft={0, 0};
	SetConsoleCursorPosition(hOut, topLeft);
}
void restart(vector<vector<char>> &new_map, pair<int,int>& player_pos, pair<int,int>& dest){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			new_map[i][j]='.';
		}
	}
	player_pos={7,0};
	dest={7,15};
	for(int i=0;i<10;i++){
		int row,col;
		do{
			row=rand()%16;
			col=rand()%16;
		}
		while ((row == player_pos.first && col == player_pos.second) || (row == dest.first && col == dest.second) || new_map[row][col] == 'D');
   	    new_map[row][col] = 'D';
	}
}

int main(){
	hideCursor();
	srand(time(0));
	//const int N=8;
	vector<vector<char>> new_map(16, vector<char>(16, '.'));
	pair<int, int>player_pos={7,0};
	pair<int, int>dest={7,15};
	//int num_drag=6;
	// for(int i=1;i<8;i+=2){
	// 	new_map[3][i]='D';
	// }
	restart(new_map, player_pos, dest);

	while(true){
		mctt();
		cout<<"HOME STRETCH"<<'\n';
		for(int i=0;i<16;i++){
			for(int j=0;j<16;j++){
				if(player_pos.first==i && player_pos.second==j){
					cout<<BLUE<<"P "<< RESET;
				}
				else if(dest.first==i && dest.second==j){
					cout<<GREEN<<"G "<<RESET;
				} else if(new_map[i][j]=='D'){
					cout<<RED<<"D "<<RESET;
				} else{
					cout<<". ";
				}
			}
			cout<<'\n';
		}
		if(_kbhit()){
			char m=_getch();
			int d1=0;
			int d2=0;
			if(m=='w'){
				d1=-1;
			} else if(m=='s'){
				d1=1;
			} else if(m=='a'){
				d2=-1;
			} else if(m=='d'){
				d2=1;
			}

			int n1=player_pos.first+d1;
			int n2=player_pos.second+d2;
			vector<pair<int,int>> dragons;
			for(int i=0;i<16;i++){
				for(int j=0;j<16;j++){
					if(new_map[i][j]=='D'){
						dragons.push_back({i,j});
					}
				}
			}
			for(auto &p:dragons){
				new_map[p.first][p.second]='.';
			}
			for(auto &p:dragons){
				int rn=p.first+1;
				int cn=p.second;
				if(rn>=16){
					rn=0;
				}
				new_map[rn][cn]='D';
			}
			if(n1>=0 && n1<16 && n2>=0 && n2<16){
				player_pos={n1,n2};
				if(new_map[n1][n2]=='D'){
					system("cls");
        			mctt();
        			cout << "HOME STRETCH\n";
        			new_map[n1][n2]='X';
        			for(int i=0;i<16;i++){
            			for(int j=0;j<16;j++){
                			if(dest.first==i && dest.second==j){
                	    		cout<<GREEN<<"G "<<RESET;
                			} else if(new_map[i][j]=='D'){
                    			cout<<RED<<"D "<<RESET;
                			} else if(new_map[i][j]=='X'){
                				cout<<RED<<"X "<<RESET;
                			}
                				else{
                    			cout<<". ";
                			}
            			}
    	        		cout<<'\n';
        			}
					int r=MessageBox(NULL, "GAME OVER! PLAY AGAIN?", "Home Stretch", MB_YESNO);
					if(r==IDYES){
						restart(new_map, player_pos, dest);
						system("cls");
						continue;
					} else{
						system("cls");
						break;
					}
				}
				if(player_pos==dest){
					system("cls");
        			mctt();
        			cout << "HOME STRETCH\n";
        			new_map[7][15]='W';
        			for(int i=0;i<16;i++){
            			for(int j=0;j<16;j++){
                			if(dest.first==i && dest.second==j){
                	    		cout<<GREEN<<"G "<<RESET;
                			} else if(new_map[i][j]=='D'){
                    			cout<<RED<<"D "<<RESET;
                			} else if(new_map[i][j]=='W'){
                				cout<<YELLOW<<"W "<<RESET;
                			}
                				else{
                    			cout<<". ";
                			}
            			}
    	        		cout<<'\n';
        			}
					
					int r=MessageBox(NULL, "YOU WIN! PLAY AGAIN?", "Home Stretch", MB_YESNO);
					if(r==IDYES){
						restart(new_map, player_pos, dest);
						system("cls");
						continue;
					} else{
						system("cls");
						break;
					}
				}
			}
		}
		Sleep(150);

	}
}