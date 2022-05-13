#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


int main(){
    float max,n,min;
    int i=0;
    for(i=0; i<10; i++){
        cin >> n;
        if(i==0){
            max = n;
            min = n;
        }
        if(n>max){
            max=n;
        }
        if(n<min){
            min=n;
        }
    }
    cout << "maximum:" << fixed << setprecision(2) << max << "\n";
    cout << "minimum:" << fixed << setprecision(2) << min << "\n";
    return 0;
}
