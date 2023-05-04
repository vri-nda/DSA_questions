// codechef
// Problem-----The Great Run------Problem Code:PROC18A

// Vishal loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he 
// found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a 
// large number of girls with his awesome speed.
// The track on which he runs is an 
// N kilometres long straight path. There are ai girls standing within the 
// ith kilometre of this path. A girl will be impressed only if Vishal is running at his maximum speed when he passes by her. 
// But he can run at his best speed only for a single continuous stretch of 
// K kilometres. Now Vishal wants to know what is the maximum number of girls that he can impress.

// ###Input First line of the input contains the number of testcases T.

// For each test case, First line contains two space-separated integers 
// N and K, the length of the track and the maximum distance he can run at his best speed.
// Second line contains N space-separated integers, the number of girls within each kilometre of the track.

// ###Output For each test case print one line containing an integer, denoting the maximum number of girls Vishal can impress.


// -------sliding window technique
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int g[n];
	    for(int i=0; i<n; i++){
	        cin>>g[i];
	    }
	    int curr_sum=0;
	   for(int i=0; i<k; i++){
	       curr_sum += g[i];
	   }
	   int max_sum=curr_sum;
	   for(int i=k; i<n; i++){
	       curr_sum+=(g[i]-g[i-k]);
	       max_sum=max(max_sum, curr_sum);
	   }
	   cout<<max_sum<<endl;
	   
	}
	return 0;
}

