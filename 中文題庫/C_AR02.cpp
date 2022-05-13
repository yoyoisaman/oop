#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    stringstream ss;
    string word;
    vector<string> result;
    while(getline(cin, word)){
        ss << word;
        string tmp;
        while(ss >> tmp){
            result.push_back(tmp);
        }
        reverse(result.begin(), result.end());
        for(int cnt= 0 ; cnt < result.size()-1 ; cnt++){
            cout << result[cnt] << " ";
        }
        cout << result[result.size()-1] << "\n";
        ss.clear();
        result.clear();
    }
}
