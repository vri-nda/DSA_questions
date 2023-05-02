#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    long long int a,b,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<a%b<<endl;
        }
    }
	return 0;
}
