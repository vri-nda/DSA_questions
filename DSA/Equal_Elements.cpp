// codechef
// Equal Elements
// Problem

// You are given an array A of size N. In one operation, you can do the following:
// Select indices i and j (i!=j) and set Ai=Aj.
// Find the minimum number of operations required to make all elements of the array equal.

// ------------find max freq. elements in array and sub it from total n;
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    int ans=0;
	    map<int, int>mp;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        mp[a[i]]++;
	        ans=max(ans, mp[a[i]]);
	    }
	    cout<<n-ans<<endl;
	}
	return 0;
}
