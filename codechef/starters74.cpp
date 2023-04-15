// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,x;
//     int count=0;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         cin>>x;
//         while (x!=0)
//         {                                            wrong
//             /* code */
//             int ld=x%10;
//             if (ld==7)
//             {
//                 count++;
//                 x=x/10;
//             }
//             else{
//                 x=x/10;
//             }
//         }
//         if (count==0)
//         {
//             /* code */
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
        
    
        
//     }
    
// 	return 0;
// }














// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,x;
//     cin>>t;
//     while (t--)
//     {                                            right(lucky number)
//         /* code */
//         cin>>x;
//         string num = to_string(x);
//         int l= num.length();
//         bool res=false;
//         for (int i = 0; i < l; i++)
//         {
//             /* code */
//             if (num[i]=='7')
//             {
//                 /* code */
//                 res=true;
//             break;
//             }
//         }
//         if (res==true)
//         {
//             /* code */
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
        
        
//     }
    
// 	return 0;
// }















// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,x,y,n;
// 	cin>>t;
// 	while(t--){                                     galat hai
// 	    cin>>x>>y;
//         for (int i = max(x,y); i <n ; i++)
//         {
//             /* code */
//             if ((i+y)%x==0 && (i+x)%y==0)
//             {
//                 /* code */
//                 cout<<i<<endl;
//                 break;
//             }
            
//         }
        
	    
// 	}
// 	return 0;
// }












// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,n,y;
//     cin>>t;
//     while(t--){
//         cin>>n>>y;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             cin>>arr[i];
//         }
//         int res=arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             /* code */
//             res|=arr[i];
//         }
//         res= y-res;
//         int ans=res & y;
//         if (ans==res)
//         {
//             /* code */
//             cout<<res<<endl;
//         }
//         else{
//             cout<<"-1"<<endl;
//         }
        
        

        
//     }
// 	return 0;
// }












// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(auto &x: a)
//     cin>>x;
//     for (int i = 1; i < n; i++)
//     {
//         /* code */
//         a[i]=a[i]^a[i-1];
//         a[i-1]=0;
//     }                                            right(consecutive XOR)
//     int ct=n;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (a[i])
//         {
//             /* code */
//             ct--;
//         }
//     }
//     if (ct==n)
//     {
//             /* code */
//             cout<<"YES"<<endl;
//             return;
//     }
//     if (ct== n-1)
//     {
//             /* code */
//             ((n-1)%2 ==1) ? cout<<"NO" : cout<<"YES";
//             cout<<endl;
//             return;
//     }
//     cout<<"NO"<<endl;
// }


















