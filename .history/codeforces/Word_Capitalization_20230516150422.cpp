#include <iostream>
using namespace std;

int main() {
	// your code goes here
    string s,u;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[0]>=97){
            s[0]-=32;
        }

    }
    cout<<s<<endl;
	return 0;
}
