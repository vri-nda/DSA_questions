// codechef

// Chef has an array A of length N.
// In one operation, Chef can choose any two distinct indices i,j (1≤i,j≤N,i=j) and either change Ai to Aj or change 
// Aj to Ai.
// Find the minimum number of operations required to make all the elements of the array equal.



#include <iostream>
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
	    int maxcount=0;
	    for(int i=0; i<n; i++){
	        int count=0;
	        for(int j=0; j<n; j++){
	            if(a[i]==a[j]){
	                count++;
	            }
	            if(count>maxcount){
	                maxcount=count;
	            }
	        }
	    }
	    cout<<n-maxcount<<endl;
	}
	return 0;
}
