// Given an integer n, return the number of prime numbers that are strictly less than n.

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0






// class Solution {
// public:
// 	int countPrimes(int n) {
// 		vector<bool> prime(n + 1, true);
// 		prime[0] = false;
// 		prime[1] = false;
// 		for (int i = 2; i * i <= n; i++) {
// 			if (prime[i]) {
// 				for (int j = i * i; j <= n; j += i) {
// 					prime[j] = false;
// 				}
// 			}
// 		}
		
// 		int primeCount = 0;
// 		for (int i = 2; i < n; i++) {
// 			if (prime[i]) {
// 				primeCount++;
// 			}
// 		}
// 		return primeCount;
// 	}
// };





// Problem
// Ram wants to generate some prime numbers for his cryptosystem. Help him please! Your task is to generate all prime numbers between two given numbers.

// Warning: large Input/Output data, be careful with certain languages (though most should be OK if the algorithm is well designed)

// Input Format
// The first line contains t, the number of test cases (less then or equal to 10).

// Followed by t lines which contain two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

// Output Format
// For every test case print all prime numbers p such that m <= p <= n, one number per line. Separate the answers for each test case by an empty line.



// #include <iostream>
// using namespace std;

// bool isprime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0)
//             return false;
//     }
//     return true;
    
// }

// int main() {
// 	// your code goes 
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,b;
// 	    cin>>a>>b;
// 	    for(int i=a;i<=b;i++){
	        
// 	        if(i==1){
// 	            continue;
// 	        }
	           
// 	        else if(isprime(i)){
// 	            cout<<i<<endl;
// 	        }
// 	    }
// 	}
// 	return 0;
// }
