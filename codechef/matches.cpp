#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b, s;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> a >> b;
        s = a + b;
        while (s > 0)
        {
            int last = s % 10;
            if (last == 0 || last == 6 || last == 9)
            {
                sum =sum+6;
                
            }
            else if (last == 1)
            {
                sum =sum+2;
                
            }
            else if (last == 2 || last == 3 || last == 5)
            {
                sum =sum+5;
                
            }

            else if (last == 4)
            {
                sum =sum+4;
                
            }

            else if (last == 7)
            {
                sum =sum+3;
                
            }
            else if (last == 8)
            {
                sum =sum+7;
                
            }
            s=s/10;
        }
        cout << sum << endl;
    }
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
//         int sum=0;
// 	    int a,b,s;
// 	    cin>>a>>b;
// 	    s=a+b;
// 	    while(s>0)
// 	    {
// 	        int res=s%10;
// 	        if(res==0 || res==6 || res==9)
// 	        sum=sum+6;
// 	        else if(res==2 || res==3 || res==5)
// 	        sum=sum+5;
// 	        else if(res==4)
// 	        sum=sum+4;
// 	        else if(res==7)
// 	        sum=sum+3;
// 	        else if(res==8)
// 	        sum=sum+7;
// 	        else
// 	        sum=sum+2;
// 	        s=s/10;
// 	    }
// 	    cout<<sum<<endl;
// 	}
// 	return 0;
// }