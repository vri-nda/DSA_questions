// Codechef
// Longest Common Pattern

// The longest common pattern length between two strings is the maximum number of characters that both strings have in common. 
// Characters are case sensitive, that is, lower case and upper case characters are considered as different.
//  Note that characters can repeat in a string and a character might have one or more occurrence in common between two strings.
//   For example, if Chef has two strings A = "Codechef" and B = "elfedcc", then the longest common pattern length of A and B
//    is 5 (common characters are c, d, e, e, f).

// Chef wants to test you with the problem described above. He will give you two strings of Latin alphabets and digits, 
// return him the longest common pattern length.







#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    int count=0;
	    cin>>a;
	    cin>>b;
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	    int i=0, j=0;
	    while(i<a.length() && j<b.length()){
	        if(a[i]<b[j]){
	            i++;
	        }
	        else if(a[i]>b[j]){
	            j++;
	        }
	        else{
	            count++;
	            i++;
	            j++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}



