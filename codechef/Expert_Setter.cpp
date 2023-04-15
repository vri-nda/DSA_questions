#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    float x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y;
        z=((y/x)*100);
        if (z>=50)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
	}
	return 0;
}
