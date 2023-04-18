// codechef


// Problem
// You are given an array A=[A1​,A2,…,AN] of length N.
// \You can right rotate it any number of times (possibly, zero). What is the maximum value of A1+AN you can get?

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int sum=a[0]+a[n-1];
	    for(int i=0; i<n-1; i++){
	        int temp=a[i]+a[i+1];
	        sum=max(sum, temp);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}



