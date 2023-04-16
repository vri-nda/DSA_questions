#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int rev=0;
	    int temp=n;
	    while(temp!=0){
	        int ld=temp%10;
	        rev=(rev*10)+ld;
	        temp=temp/10;
	    }
	    if(rev==n){
	        cout<<"wins"<<endl;
	    }
	    else{
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
