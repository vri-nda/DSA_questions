#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float t,a,b,c;
    float y;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>a>>b>>c;
        y=((a+b)/2);
        if (y>c)
        {
            /* code */
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
	return 0;
}
