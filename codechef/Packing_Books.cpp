#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>x>>y>>z;
        if (y%z==0)
        {
            /* code */
            cout<<(x*y)/z<<endl;
        }
        else{
            cout<<((y/z)+1)*x<<endl;
        }
        
    }
    
	return 0;
}
