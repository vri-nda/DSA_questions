#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    if(x<=5 && x>0){
        cout<<"1"<<endl;
    }
    else{
        cout<<((x%5)+(x/5))-1<<endl;
    }
	return 0;
}
