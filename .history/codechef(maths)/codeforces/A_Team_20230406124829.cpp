#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n--){
        int a[n];
        int count=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]=='1'){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
