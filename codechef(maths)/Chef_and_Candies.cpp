#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n,x;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>n>>x;
        if (n<x)
        {
            /* code */
            cout<<"0"<<endl;
        }
        else{
            if ((n-x)%4==0)
            {
                /* code */
                cout<<((n-x)/4)<<endl;
            }
            else{
                cout<<((n-x)/4)+1<<endl;
            }
            
        }
    }
    
	return 0;
}
