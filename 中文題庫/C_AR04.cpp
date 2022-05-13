#include <iostream>


using namespace std;

char graph[1000][1000];

int main(){
    int cnt = 0;
    cin >> cnt;
    for(int q=0; q<cnt; q++){
        int r,c;
        cin >> r >> c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int tmp;
                cin >> tmp;
                graph[i][j] = tmp + '0';
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(graph[i][j] == '0'){
                    graph[i][j] = '_';
                }else if(graph[i][j] == '1'){
                    if(graph[i+1][j]=='0'||graph[i+1][j]=='_'||graph[i-1][j]=='0'||graph[i-1][j]=='_'||graph[i][j+1]=='0'||graph[i][j+1]=='_'||graph[i][j-1]=='0'||graph[i][j-1]=='_'){
                        graph[i][j] = '2';
                    }else{
                        graph[i][j] = '1';
                    }
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(graph[i][j] == '0'){
                    graph[i][j] = '_';
                }else if(graph[i][j] == '1'){
                    graph[i][j] = '_';
                }else if(graph[i][j] == '2'){
                    graph[i][j] = '0';
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << graph[i][j] << " ";
            }
            cout << "\n";
        }
         if(q != cnt-1){
           cout << "\n";
         }
    }
}
