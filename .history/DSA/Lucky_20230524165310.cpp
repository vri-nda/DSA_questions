// codeforces
// A. Lucky?

// A ticket is a string consisting of six digits. A ticket is considered lucky if the
//  sum of the first three digits is equal to the sum of the last three digits.
//   Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.



#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        int count_s=0, count_e=0;
        cin>>s;
        // if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        for(int i=0; i<3; i++){
            count_s+=s[i]-'0';
        }
        for(int i=3; i<6; i++){
            count_e+=s[i]-'0';
        }
        if(count_s == count_e){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}




