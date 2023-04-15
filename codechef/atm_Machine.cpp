#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n,k,i;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (k-a[i]>=0)
            {
                cout<<1;
                k=k-a[i];
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
	return 0;
}


