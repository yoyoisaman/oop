#include <iostream>


using namespace std;

int main(){
    int num[7];
    for(int i=0;i<6;i++){
        cin >> num[i];
    }
    long long int ans = 0;
    for(int i=0;i<6;i++){
        ans += num[i]*num[i]*num[i];
    }
    cout << ans << '\n';
}
