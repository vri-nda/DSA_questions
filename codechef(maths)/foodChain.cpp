#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,e,k;
	cin>>t;
	while(t--){
	    cin>>e>>k;
	    int count=0;
	    while(e){
	        e=floor(e/k);
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
