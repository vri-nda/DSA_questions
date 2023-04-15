#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(m==0){
	        cout<<n*2<<endl;
	    }
	    else if(n<=m){
	        cout<<n<<endl;
	    }
	    else if(n>m){
	        cout<<((n-m)+n)<<endl;
	    }
	}
	return 0;
}
