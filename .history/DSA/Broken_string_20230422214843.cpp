// codechef

// Mario and the Broken String

// Problem
// Mario was going to gift Princess Peach a string S of even length N.
// Mario was clumsy and thus, broke the string in the middle. He now has two strings A and B such that 
// A=S[1,n/2] and B=S[ (N/2)+1,N].
// Mario is not sure about the order in which he should join the strings A and B to get the string S. 
// Thus, he joins the strings in any random order. Find whether it is guaranteed that Mario will get the same string 
// S if he joins the strings A and B in any order.
// Note that 
// S[L,R] denotes a substring of string S starting at index L and having a length (R−L+1).



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int half=n/2;
	    string s;
	    cin>>s;
	    int flag;
	    for(int i=0; i<half; i++){
	        if(s[i]==s[i+half]){
	            flag=1;
	        }
	        else{
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}


// ----------------------------------using substr function ------------------------------------------------------------------------------------

#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string s1=s.substr(0,n/2);
	    string s2=s.substr(n/2,n);
	    if(s1==s2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
