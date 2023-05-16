#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i] = s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
	return 0;
}
