#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    string s,t;
    cin>>s;
    // cin>>t;
    reverse(s.begin(), s.end());
    // if(s==t){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
    cout<<s;
	return 0;
}
