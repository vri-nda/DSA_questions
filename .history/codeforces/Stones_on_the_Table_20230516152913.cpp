

// There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of
//  stones to take from the table so that any two neighboring stones had different colors.
//  Stones in a row are considered neighboring if there are no other stones between them.


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
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
	return 0;
}
