#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int a,b;
    cin>>a>>b;
    int count=0;
        while(true){
            count++;
            a=a*3;
            b=b*2;
            if(a>b){
            cout<<count<<endl;
            break;
        }
        }
        
    
	return 0;
}
