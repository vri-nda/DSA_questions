// codeforces
// A. Bear and Big Brother
// Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

// Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

// Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

// After how many full years will Limak become strictly larger (strictly heavier) than Bob?






#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int a,b;
    cin>>a>>b;
    int count=0;
        while(true){
            
            a=a*3;
            b=b*2;
            count++;
            if(a>b){
            cout<<count<<endl;
            break;
        }
        }
        
    
	return 0;
}
