// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// Example 1:
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2
// Since 2 has only one digit, return it.

// Example 2:

// Input: num = 0
// Output: 0


// log(n) time complexity

// #include <iostream>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int num;
//     int sum = 0;
//     cin >> num;
//     /* code */
//     while (num > 9)
//     {
//         /* code */
//         while (num!=0)
//         {
//             /* code */
//             sum += num % 10;
//             num /= 10;
//         }
//         num = sum;
//         sum = 0;
//     }

//     cout << num << endl;
//     return 0;
// }



// class Solution {
// public:
//     int addDigits(int num) {
//         int sum=0;
//         while(num>9){
//             while(num!=0){
//                 sum +=num%10;
//                 num /=10;
//             }
//             num=sum;
//             sum=0;
//         }
//         return num;
//     }
// };


// o(n) time complexity
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int num;
    cin>>num;
    if (num==0)
    {
        /* code */
        cout<<"0"<<endl;
    }
    else if (num%9==0)
    {
        /* code */
        cout<<"9"<<endl;
    }
    else{
        cout<<num%9<<endl;
    }
	return 0;
}
