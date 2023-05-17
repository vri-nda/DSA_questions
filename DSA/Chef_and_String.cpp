// codechef
// Problem
// Chef and String

// Chef has a string S consisting of lowercase English characters. Chef defined functions left shift L(X) and right shift R(X) as follows.
// L(X) is defined as shifting all characters of string X one step towards left and moving the first character to the end.
// R(X) is defined as shifting all characters of string X one step towards the right and moving the last character to the beginning.
// For example, L("abcd") = "bcda" and R("abcd") = "dabc"

// Chef wants to find out whether there exists a string 
// V of the same length as 
// S such that both L(V)=S and R(V)=S holds.


// ------------rotation of string-----------//

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string l = (s.substr(1,s.size()-1))+(s[0]);
	    string r = (s[s.size()-1])+(s.substr(0,s.size()-1));
	    if(l==r){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
