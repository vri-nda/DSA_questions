#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
    
}

int main() {
    int t,a,b;
    long long int lcm;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>a>>b;
        lcm=a*b/gcd(a,b);
        cout<<gcd(a,b)<<" "<<lcm<<endl; 
	
    }
    // cout<<gcd(a,b)<<" "<<lcm(a,b);
    return 0;
    
}


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int gcd(int a, int b){
//     int res=min(a,b);
//     while (res>0)
//     {
//         if(a%res==0 && b%res==0){
//             break;
//         }
//         res--;
//     }
//     return res;
    
// }
// int lcm(int a, int b){
//     int ans=max(a,b);
//     while (true)
//     {
//         /* code */
//         if(ans%a==0 && ans%b==0){
//             return ans;
//             ans++;
//         }
//     }
//     return ans;
    
// }

// int main() {
// 	// your code goes here
//     int t;
//     long int a,b;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         cin>>a>>b;
       // cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
//     }
//     cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;;
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll a, b;
//         cin>>a>>b;
//         ll res1 = __gcd(a, b);
//         ll res2 = (a * b) / res1;
//         cout<<res1<<" "<<res2<<"\n";
//     }
// }