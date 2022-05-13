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
    while(getline(cin, word)){
        stringstream ss;
        string tmp;
        int cnt = 0;
        long long int sum = 0;
        ss << word;
        while(ss >> tmp){
            cnt++;
            sum+=stoi(tmp);
        }
        float res = (float)sum/cnt;
        cout << "Size: " << cnt << "\n" << "Average: " << fixed << setprecision(3) << res << "\n";
    }
    return 0;
}
