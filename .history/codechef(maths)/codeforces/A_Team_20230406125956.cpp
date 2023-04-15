#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n,p,v,t,s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>p>>v>>t;
        if(p+v+t>=2){
            cout<<p+v+t<<endl;
        }
    }
    
	return 0;
}
