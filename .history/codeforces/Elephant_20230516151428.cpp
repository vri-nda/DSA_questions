#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int x;
    cin>>x;
    if(x<=5 && x>0){
        cout<<"1"<<endl;
    }
    else if(x%5==0){
        cout<<x/5<<endl;
    }
    else{
        cout<<(x/5)+1<<endl;
    }
	return 0;
}
