#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    int a,b,c,d;
    char op;
    int r1,r2;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> op >> a >> b >> c >> d;
        switch(op){
            case '+':
                r1 = a+c;
                r2 = b+d;
                cout << r1 << " " << r2 << "\n"; 
                break;
            case '-':
                r1 = a-c;
                r2 = b-d;
                cout << r1 << " " << r2 << "\n"; 
                break;
            case '*':
                r1 = a*c-b*d;
                r2 = b*c+a*d;
                cout <<r1 << " " << r2<< "\n"; 
                break;
        }
    }
}
