#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    int num = 0;
    for(int i=0;i<word.size()/2;i++){
        if(word[i] != word[(word.size())-1-num]){
            cout << "NO\n";
            return 0;
        }
        num++;
    }
    cout << "YES\n";
    return 0;
}
