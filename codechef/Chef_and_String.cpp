// Chef and String

// There are N students standing in a row and numbered 1 through N from left to right. You are given a string 
// S with length N, where for each valid i, the i-th character of S is 'x' if the i-th student is a girl or 'y' if this
//  student is a boy. Students standing next to each other in the row are friends.

// The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. T
// wo students can only form a pair if they are friends. Each student can only be part of at most one pair.
//  What is the maximum number of pairs that can be formed?



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0; i<s.length()-1; i++){
	        if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x') ){
	            count++;
	            i++;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
