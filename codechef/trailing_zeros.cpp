#include <iostream>
// using namespace std;

// int countZeros(int a, int i){
//     int fact=1;
//     for ( i = 2; i <=a; i++)
//     {
//         /* code */
//         fact=fact*i;
//     }
//     int res=0;
//     while (fact%10==0)
//     {
//         /* code */
//         res++;
//         fact=fact/10;
//     }
//     return res;
    
// }
// int main() {
// 	// your code goes here
//     int t,n,i;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         cin>>n;
//         return countZeros(n);
//     }
    
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,n,i;
//     cin>>t;
//     while (t--)
//     {                                               time limit exceeded
//         /* code */
//         cin>>n;
//         int fact=1;
//         for ( i = 2; i <=n; i++)
//         {
//             /* code */
//             fact=fact*i;
//         }
//         int res=0;
//         while (fact%10==0)
//         {
//             /* code */
//             res++;
//             fact=fact/10;
//         }
//         cout<<res<<endl;
        
        
//     }
    
// 	return 0;
// }







                                                        // accepted
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,n,i;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         cin>>n;
//         int res=0;
//         for ( i = 5; i <=n; i=i*5)
//         {
//             /* code */
//             res=res+n/i;
//         }
//         cout<<res<<endl;
        
//     }
    
// 	return 0;
// }

#include <iostream>
using namespace std;

int trailingZeros(int n){
    int res=0;
    for (int i = 5; i <=n; i=i*5)
    {
        /* code */
        res=res+n/i;
    }
    return res;
}
int main() {
	// your code goes here
    int t,n;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>n;
        cout<<trailingZeros(n)<<endl;
    }
    
	return 0;
}
