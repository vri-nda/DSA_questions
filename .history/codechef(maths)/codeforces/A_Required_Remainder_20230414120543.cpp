#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,n,k;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        // k=7*((n/7))+y;
        k%x==y;
        cout<<k<<endl;
    }
	return 0;
}
