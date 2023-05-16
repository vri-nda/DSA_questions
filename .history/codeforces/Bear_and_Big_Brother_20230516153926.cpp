#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int a,b;
    cin>>a>>b;
    int count=0;
    if(a==b){
        cout<<"1"<<endl;
    }
    else if(a<b){
        while(a<b){
            a=a*3;
            b=b*2;
            count++;
        }
        if(a>b){
            cout<<count<<endl;
        }
    }
	return 0;
}
