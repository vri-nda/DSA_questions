// Asymmetric Swaps
// codechef


// Chef has two arrays A and B of the same size N.

// In one operation, Chef can:

// Choose two integers 
// i and j(1≤i,j≤N) and swap the elements Ai and Bj.
// Chef came up with a task to find the minimum possible value of (Amax−Amin) after performing the swap operation any
//  (possibly zero) number of times.

// Since Chef is busy, can you help him solve this task?

// Note that Amax and Amin
//   denote the maximum and minimum elements of the array
// A respectively.




#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[2*n];
	    for(int i=0; i<2*n; i++){
	        cin>>a[i];
	    }
	    sort(a, a+2*n);
	    int m=INT_MAX;
	    for(int i=2*n-1; i>=n-1; i--){
	        m=min(m, a[i]-a[i-n+1]);
	    }
	    cout<<m<<endl;
	}
	return 0;
}
