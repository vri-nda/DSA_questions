
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	// your code goes here
    string guest;
    string host;
    string pile;
    cin>>guest;
    cin>>host;
    cin>>pile;
    string ans = guest+host;
    sort(ans.begin(), ans.end());
    sort(pile.begin(), pile.end());
    if(ans==pile){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}