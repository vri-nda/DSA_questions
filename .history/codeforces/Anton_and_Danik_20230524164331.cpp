// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int n, counta=0, countd=0;
//     cin>>n;
//     char a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         if(a[i]=='A'){
//             counta++;
//         }
//         else{
//             countd++;
//         }
//     }
//     if(counta>countd){
//         cout<<"Anton"<<endl;
//     }
//     else if(countd>counta){
//         cout<<"Danik"<<endl;
//     }
//     else{
//         cout<<"Friendship"<<endl;
//     }
// 	return 0;
// }



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
        for(int i=0; i<6; i++){
            count_s+=s[i];
        }
        for(int i=0; i<3; i++){
            count_e+=s[i];
        }
        cout<<count_s<<endl;
        cout<<count_e<<endl;
    }
	return 0;
}
