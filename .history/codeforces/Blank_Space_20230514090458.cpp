#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], count=0, res=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1){
                count=0;
            }
            else{
                count++;
                res=max(count, res);
            }
        }
        cout<<res<<endl;

    }
	return 0;
}
