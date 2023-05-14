
// codeforces educational contest
// Blank_Space


#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],res=0, count=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==0){
                count++;
                res = max(count, res);
            }
            else{
                count=0;
            }
        }
        cout<<res<<endl;

    }
	return 0;
}
