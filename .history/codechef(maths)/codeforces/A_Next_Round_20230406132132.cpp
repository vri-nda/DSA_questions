#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    int count=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        // if(a[i]>=a[k-1] && a[i]>0){
        //     count++;
        // }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i]>=a[k-1] && a[i]>0){
            count++;
        }
    }
    
    cout<<count<<endl;
	return 0;
}
