#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	while(b!=0){
        int t = b;
        b = a % b;
        a = t;
	}
	cout << a << '\n';

}
