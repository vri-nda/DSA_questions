// codechef

// Rectangle

// You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths
// of its sides are a, b, c and d (in any order).

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if((a^b^c^d)==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
