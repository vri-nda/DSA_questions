#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        string a = "codeforces";
        cin>>s;
        int count=0;
        for(int i=0; i<10; i++){
            if(s[i]!=a[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
