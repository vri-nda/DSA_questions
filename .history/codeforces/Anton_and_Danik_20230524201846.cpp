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
        int n=s.length();
        if(n%2==0){
            for(int i=0; i<n/2; i++){
                count_s+=s[i];
            }
            for(int i=n/2; i<n; i++){
                count_e+=s[i];
            }
        }
        else{
            for(int i=0; i<n/2; i++){
                count_s+=s[i];
            }
            for(int i=n/2+1; i<n; i++){
                count_e+=s[i];
            }
        }
        if(count_s==count_e){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
	return 0;
}
