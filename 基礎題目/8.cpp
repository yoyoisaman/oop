#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n,i;
    cin >> n;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
