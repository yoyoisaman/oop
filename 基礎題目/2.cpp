#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int num;
    while(cin >> num){
        cout << fixed << setprecision(1) << num*1.6 << "\n"; 
    }
}
