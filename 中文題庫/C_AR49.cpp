#include <iostream>
#include <string>

using namespace std;

int main(){
	string word;
	getline(cin,word);
	int num;
	cin >> num;
	int len = word.size();
    for(int i=0;i<len;i++){
        int ans=word[i];
        if(ans>='a' && ans<='z'){
            ans+=num;
            if(ans>122)
                ans-=26;
        }
        else if(ans>='A' && ans<='Z'){
            ans+=num;
            if(ans>90)
                ans-=26;
        }
        else if(ans>='0' && ans<='9'){
            ans+=num;
            if(ans>57)
                ans-=10;
        }
        char result = ans;
        cout << result;
    }
    cout << "\n";
    return 0;
}

