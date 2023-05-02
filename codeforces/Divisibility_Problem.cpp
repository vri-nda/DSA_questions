
// codeforces
// Problem:	1328A - 
//Divisibility Problem
// You are given two positive integers 𝑎 and 𝑏. In one move you can increase 𝑎 by 1(replace 𝑎 with 𝑎+1). 
// Your task is to find the minimum number of moves you need to do in order to make 𝑎 divisible by 𝑏.
// It is possible, that you have to make 0 moves, as 𝑎 is already divisible by 𝑏. You have to answer 𝑡
// independent test cases.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    long long int a,b,d;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b!=0){
            d=b*((a/b)+1);
            cout<<d-a<<endl;
        }
        else{
            cout<<a%b<<endl;
        }
    }
	return 0;
}
