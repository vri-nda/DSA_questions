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



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         int count_s=0, count_e=0;
//         cin>>s;
//         int n=s.length();
//         if(n%2==0){
//             for(int i=0; i<n/2; i++){
//                 count_s+=s[i];
//             }
//             for(int i=n/2; i<n; i++){
//                 count_e+=s[i];
//             }
//         }
//         else{
//             for(int i=0; i<n/2; i++){
//                 count_s+=s[i];
//             }
//             for(int i=n/2+1; i<n; i++){
//                 count_e+=s[i];
//             }
//         }
//         if(count_s==count_e){
//             cout<<"yes"<<endl;
//         }
//         else{
//             cout<<"no"<<endl;
//         }
//     }
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         if(n>=-5000 && n<=1399){
//             cout<<"Division 4"<<endl;
//         }
//         else if(n>=1400 && n<=1599){
//             cout<<"Division 3"<<endl;
//         }
//         else if(n>=1600 && n<=1899){
//             cout<<"Division 2"<<endl;
//         }
//         else{
//             cout<<"Division 1"<<endl;
//         }
//     }
// 	return 0;
// }




// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
// 	// your code goes here
//     int n;
//     cin>>n;
//     int a[n];
//     map <int, int>mp;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         mp[a[i]]++;
//         if(mp[a[i]]>=2){
//             cout<<a[i]<<endl;
//             break;
//         }
//     }
// 	return 0;
// }


// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         string s, a="Timur";
//         cin>>s;
//         sort(s.begin(),s.end());
//         sort(a.begin(),a.end());
//         if(s==a){
//             cout<<"YES";
//         }
//         else{
//             cout<<"NO";
            
//         }
//         cout<<endl;
//     }
// 	return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int n;
//      cin>>n;
//      int counte=0;
//      int counto=0;
//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//             counte=counte+i;
//         }
//         else{
//             counto=counto+i;
//         }
//     }
//     cout<<counte<<endl;
//     cout<<counto<<endl;
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     string n;
//     cin>>n;
//     int flag=0;
//     for(int i=0; i<n.length(); i++){
//         if(n[1]%3==0){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1){
//         cout<<"trendy number"<<endl;
//     }
//     else{
//         cout<<"not trendy"<<endl;
//     }

// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int year;
//     int month;
//     cin>>year;
//     cin>>month;
//     if(year%4==0){
//         if(month=='1' || month=='3'|| month=='5'|| month=='july' || month=='aug' || month=='oct' || month=='dec'){
//             cout<<"31"<<endl;
//         }
//         else if(month=='feb'){
//             cout<<"29"<<endl;
//         }
//         else if(month=='april' || month=='june'|| month=='sep'|| month=='nov'){
//             cout<<"30"<<endl;
//         }
//     }
//     else{
//         if(month=='jan' || month=='march'|| month=='may'|| month=='july' || month=='aug' || month=='oct' || month=='dec'){
//             cout<<"31"<<endl;
//         }
//         else if(month=='feb'){
//             cout<<"28"<<endl;
//         }
//         else if(month=='april' || month=='june'|| month=='sep'|| month=='nov'){
//             cout<<"30"<<endl;
//         }
//     }

// 	return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int n,k;
//     cin>>n>>k;
//     while(k--){
//         if(n%10!=0){
//             n=n-1;

//         }
//         else if(n%10==0){
//             n=n/10;
//         }
//     }
//     cout<<n<<endl;
// 	return 0;
// }




#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    for(int i=1; i<n; i++){
        if(i%2!=0){
            cout<<(i*i)-1;
        }
        else{
            cout<<(i*i)-2;
        }
    }
	return 0;
}



