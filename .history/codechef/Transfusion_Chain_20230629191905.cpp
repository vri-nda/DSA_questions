// Transfusion Chain

// In living donation, the following blood types are compatible:

// Blood type A donors can donate to recipients with blood types A and AB.
// Blood type B donors can donate to recipients with blood types B and AB.
// Blood type AB donors can donate to recipients with blood type AB only.
// Blood type O donors can donate to recipients with blood types A, B, AB and O.
// There are N people in a hospital where the blood type of the ith person is denoted by Bi. Note that the value of Bi
// can be A, B, AB, or O only.
// A chain is formed when a donor can donate blood to a recipient, who in turn can donate blood to another recipient, and so on.

// Find the maximum number of people that can form a chain of blood transfusions.



#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string b[n];
	    for(int i=0; i<n; i++){
	        cin>>b[i];
	    }
	    int counto=count(b, b+n, "O");
	    int countA=count(b, b+n, "A");
	    int countB=count(b, b+n, "B");
	    int countAB=count(b, b+n, "AB");
	    cout<<max(countA, countB)+counto+countAB<<endl;
	    
	}
	return 0;
}
