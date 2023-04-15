#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    int count=0;
    int a[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]=='1'){
            count++;
        }
    }
    cout<<count<<endl;
	return 0;
}