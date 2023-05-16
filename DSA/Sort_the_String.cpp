// codechef
// Sort the String

// Problem
// You have a binary string S of length N. In one operation you can select a substring of S and reverse it.
// For example, on reversing the substring S[2,4] for S=11000, we change 11000→10010.
// Find the minimum number of operations required to sort this binary string.
// It can be proven that the string can always be sorted using the above operation finite number of times.



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int count=0;
	    string s;
	    cin>>s;
	    for(int i=0; i<n; i++){
	        if(s[i]=='1' && s[i+1]=='0'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}






