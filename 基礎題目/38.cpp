#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

#include <stdio.h>
int main(){
	    int t=0;
		double a,b=0,c=0;
		cin >> a;
		if(a>700) {c+=(a-700)*5.63;b+=(a-700)*4.5;a=700;}
		if(a>500) {c+=(a-500)*4.97;b+=(a-500)*4.01;a=500;}
		if(a>330) {c+=(a-330)*4.39;b+=(a-330)*3.61;a=330;}
		if(a>120) {c+=(a-120)*3.02;b+=(a-120)*2.68;a=120;}
		if(a>0){c+=a*2.1;b+=a*2.1;}
		cout << "Summer months:" <<  fixed << setprecision(2) << c << "\n";
		cout << "Non-Summer months:" <<  fixed << setprecision(2) << b << "\n";
	return 0;
}
