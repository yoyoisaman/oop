#include <iostream>
 
using namespace std;

int main(){  
    int cnt =0;  
    cin >> cnt;
    int t[1000];  
    for(int i=0;i<1000;i++){  
        t[i]=0;  
    }  
    for(int i=0;i<cnt;i++){  
        int h,b;  
        cin >> h >> b;
        for(int j=h;j<b;j++){  
            t[j]++;  
        }  
    }  
    int max = -1;  
    for(int i=0;i<1000;i++){  
        if(max < t[i]){  
            max = t[i];  
        }  
    }  
    cout << max << "\n";
}  
