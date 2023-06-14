// codechef
// Your Name is Mine


// In an attempt to control the rise in population, Archer was asked to come up with a plan. This time he is targeting marriages.
//  Archer, being as intelligent as he is, came up with the following plan:

// A man with name M is allowed to marry a woman with name W, only if M is a subsequence of W or W is a subsequence of M.

// A is said to be a subsequence of B, if A can be obtained by deleting some elements of B without changing the order of 
//the remaining elements.
// Your task is to determine whether a couple is allowed to marry or not, according to Archer's rule.

// john johanna  yes
// ira ira       yes
// kayla jayla   no


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isSequence(string a, string b){
    int i=0, j=0;
    while(i<a.length() && j<b.length()){
        if(a[i]==b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return i==a.length();
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string m,w;
	    cin>>m>>w;
	    if(isSequence(m,w) || isSequence(w,m)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
