// Problem
// Alice thinks Bob has very weak math skills.
// Alice gave Bob three numbers A, B,A,B, and CC and challenged him to find any positive integer KK strictly less than 100100 such that none of the three numbers are divisible by KK.

// Help Bob find one such integer KK.

// Under the given constraints, a valid KK will always exist.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first and only line of each test case contains three space-separated integers A, B,A,B, and CC.
// Output Format
// For each test case, output on a new line any positive integer KK less than 100100 that does not divide any of A, B,A,B, or CC.


// 3
// 2 3 4
// 5 7 10
// 3 6 9
// 5
// 4
// 10


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
        for (int i = 2; i < 100; i++)
        {
            if (a%i !=0 && b%i !=0 && c%i !=0)
            {
                cout<<i<<endl;
                break;
            }
            
        }
        
	}
	return 0;
}