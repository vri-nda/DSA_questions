// codechef
// Pet Store

// Problem
// Alice and Bob went to a pet store. There are N animals in the store where the ith animal is of type 
// Ai. Alice decides to buy some of these 
// N animals. Bob decides that he will buy all the animals left in the store after Alice has made the purchase.

// Find out whether it is possible that Alice and Bob end up with exactly same multiset of animals.


// ---finding whether the frequency of elements in array is even(yes) or odd(no)--------


#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    int ans=0;
	    map <int, int> mp;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        mp[a[i]]++;
	       // ans=ans^a[i];
	    }
	    for(auto x:mp){
	        if(x.second%2!=0){
	            ans++;
	            break;
	        }
	    }
	    if(ans>0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}

