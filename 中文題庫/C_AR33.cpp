#include <iostream>

using namespace std;

#include <stdlib.h>
#include <stdio.h>
int box[1024][1024];
int main(){
    int a,b,cnt;
    while(cin >> a >> b){
        if(a==0 && b==0){
            break;
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++)
                cin >> box[i][j];
        }
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                cnt++;
                cout << box[j][i];
                if(cnt%a!=0){
                    cout << " ";
                }
            }
            cout << "\n"; 
        }
    }
}
