#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    string word;
    getline(cin,word);
    int ans[26];
    for(int i=0;i<26;i++){
        ans[i]=0;
    }
    for(int i=0;i < word.size();i++){
        if('a' <= word[i] && word[i] <= 'z'){
            ans[word[i]-'a'] ++;
        }else if('A' <= word[i] && word[i] <= 'Z'){
            ans[word[i]-'A'] ++;
        }
    }
    for(int i=0;i<25;i++){
        cout << ans[i] << ' ';
    }
    cout << ans[25] << '\n';
    return 0;
}
