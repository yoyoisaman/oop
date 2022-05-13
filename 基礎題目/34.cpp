#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        if(b == 1){
            float ans = (a - 80)*0.7;
            cout << fixed << setprecision(1) << ans <<"\n";
        }else if(b == 2){
            float ans = (a - 70)*0.6;
            cout << fixed << setprecision(1) << ans <<"\n";
        }
    }
    return 0;
}
