#include <iostream>
#include <sstream>

using namespace std;

int main (){
    string word;
    int ans[26];
    for(int i=0;i<26;i++){
        ans[i]=0;
    }
    getline(cin, word);
    int len = word.size();
    for(int i=0;i<len;i++){
        if('a'<= word[i] && word[i] <= 'z'){
            ans[word[i]-'a'] ++;
        }else if('A' <= word[i] && word[i] <= 'Z'){
            ans[word[i]-'A'] ++;
        }
    }
    int cnt = 0;
    stringstream ss;
    string tmp;
    ss << word;
    while(ss >> tmp){
        cnt++;
    }
    cout << cnt << "\n";
    for(int i=0;i<26;i++){
        if(ans[i]>0){
            char result = i + 'a';
            cout << result << " : " << ans[i] << '\n';
        }
    }
    return 0;
}
