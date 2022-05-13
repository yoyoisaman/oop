#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){ 
    vector<int>num;
    int N;  
    int flag = 0;  
    cin >> N;
    int tmp;  
    for(int i=0;i<N;i++){  
        cin >> tmp;
        num.push_back(tmp);
    }  
    sort(num.begin(), num.end());
    
    for(int i=0;i<N-1;i++){  
        if(num[i]==num[i+1]){  
            flag = 1;  
        }  
    }  
    if(flag == 0){  
        cout << "1\n";   
    }else if(flag == 1){
        cout << "0\n";
    }  
    return 0;  
}  