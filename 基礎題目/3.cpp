#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int x,y;
    while(cin>>x>>y){
        if(x*x+y*y > 10000){
            cout << "outside\n";
        }else{
            cout << "inside\n";
        }
    }
}
