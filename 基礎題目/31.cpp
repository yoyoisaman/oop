#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main (){
    string word;
    while(getline(cin,word)){
        int cnt = 0;
        int num[15];
        stringstream ss;
        ss << word;
        string tmp;
        while(ss >> tmp){
            num[cnt]=stoi(tmp);
            cnt++;
        }
        sort(num, num+cnt);
        int curr=0;
        int c=0;
        int flag = 0;
        for(int i=0;i<cnt;i++){
            if(i==0){
                curr = num[0];
                c=1;
                continue;
            }
            if(num[i]!=curr){
                if(c>cnt/2){
                    flag = 1;
                    break;
                }
                curr = num[i];
                c=1;
            }else{
                c++;
            }
        }
        if(c>cnt/2 || flag == 1){
            cout << curr << '\n';
        }else if(flag==0){
            cout << "NO\n";
        }
    }
    return 0;
}
