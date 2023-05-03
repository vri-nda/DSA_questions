// codeforces
// Problem:	1328A - 


// This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to 
// warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. 
// After that they found p grams of salt.

// To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt.
//  The friends want to make as many toasts as they can, provided they all drink the same amount. How many
//   toasts can each friend make?

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    int n,k,l,c,d,p,nl,np,drink,lime,salt;
    long long int ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    drink=(k*l)/n;
    lime=(c*d);
    salt=p/np;
    ans=(min(min(drink, lime), salt))/n;
    cout<<ans<<endl;
	return 0;
}
