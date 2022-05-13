#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int t1,t2,t3,t4;
    int m;
    int count,total;
    cin >> t1 >> t2 >> t3 >> t4;
    m = (t3*60+t4)-(t1*60+t2);
    count = m / 30;
    if(count<=4){
        total=count*30;
    }else if(count<=8){
        total=120+(count-4)*40;
    }else{
        total=280+(count-8)*60;
    }
    cout << total << "\n";
}
