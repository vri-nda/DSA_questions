#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n, counta=0, countd=0;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]=='A'){
            counta++;
        }
        else{
            countd++;
        }
    }
    if(counta>countd){
        cout<<"Anton"<<endl;
    }
    else if(countd>counta){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
	return 0;
}
