// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int n, counta=0, countd=0;
// //     cin>>n;
// //     char a[n];
// //     for(int i=0; i<n; i++){
// //         cin>>a[i];
// //         if(a[i]=='A'){
// //             counta++;
// //         }
// //         else{
// //             countd++;
// //         }
// //     }
// //     if(counta>countd){
// //         cout<<"Anton"<<endl;
// //     }
// //     else if(countd>counta){
// //         cout<<"Danik"<<endl;
// //     }
// //     else{
// //         cout<<"Friendship"<<endl;
// //     }
// // 	return 0;
// // }



// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         string s;
// //         int count_s=0, count_e=0;
// //         cin>>s;
// //         int n=s.length();
// //         if(n%2==0){
// //             for(int i=0; i<n/2; i++){
// //                 count_s+=s[i];
// //             }
// //             for(int i=n/2; i<n; i++){
// //                 count_e+=s[i];
// //             }
// //         }
// //         else{
// //             for(int i=0; i<n/2; i++){
// //                 count_s+=s[i];
// //             }
// //             for(int i=n/2+1; i<n; i++){
// //                 count_e+=s[i];
// //             }
// //         }
// //         if(count_s==count_e){
// //             cout<<"yes"<<endl;
// //         }
// //         else{
// //             cout<<"no"<<endl;
// //         }
// //     }
// // 	return 0;
// // }


// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int t,n;
// //     cin>>t;
// //     while(t--){
// //         cin>>n;
// //         if(n>=-5000 && n<=1399){
// //             cout<<"Division 4"<<endl;
// //         }
// //         else if(n>=1400 && n<=1599){
// //             cout<<"Division 3"<<endl;
// //         }
// //         else if(n>=1600 && n<=1899){
// //             cout<<"Division 2"<<endl;
// //         }
// //         else{
// //             cout<<"Division 1"<<endl;
// //         }
// //     }
// // 	return 0;
// // }




// // #include <iostream>
// // #include <map>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int n;
// //     cin>>n;
// //     int a[n];
// //     map <int, int>mp;
// //     for(int i=0; i<n; i++){
// //         cin>>a[i];
// //         mp[a[i]]++;
// //         if(mp[a[i]]>=2){
// //             cout<<a[i]<<endl;
// //             break;
// //         }
// //     }
// // 	return 0;
// // }


// // #include <iostream>
// // #include <string>
// // #include <algorithm>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int t,n;
// //     cin>>t;
// //     while(t--){
// //         cin>>n;
// //         string s, a="Timur";
// //         cin>>s;
// //         sort(s.begin(),s.end());
// //         sort(a.begin(),a.end());
// //         if(s==a){
// //             cout<<"YES";
// //         }
// //         else{
// //             cout<<"NO";
            
// //         }
// //         cout<<endl;
// //     }
// // 	return 0;
// // }





// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int n;
// //      cin>>n;
// //      int counte=0;
// //      int counto=0;
// //     for(int i=0; i<=n; i++){
// //         if(i%2==0){
// //             counte=counte+i;
// //         }
// //         else{
// //             counto=counto+i;
// //         }
// //     }
// //     cout<<counte<<endl;
// //     cout<<counto<<endl;
// // 	return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     string n;
// //     cin>>n;
// //     int flag=0;
// //     for(int i=0; i<n.length(); i++){
// //         if(n[1]%3==0){
// //             flag=1;
// //             break;
// //         }
// //     }
// //     if(flag==1){
// //         cout<<"trendy number"<<endl;
// //     }
// //     else{
// //         cout<<"not trendy"<<endl;
// //     }

// // 	return 0;
// // }


// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int year;
// //     int month;
// //     cin>>year;
// //     cin>>month;
// //     if(year%4==0){
// //         if(month=='1' || month=='3'|| month=='5'|| month=='july' || month=='aug' || month=='oct' || month=='dec'){
// //             cout<<"31"<<endl;
// //         }
// //         else if(month=='feb'){
// //             cout<<"29"<<endl;
// //         }
// //         else if(month=='april' || month=='june'|| month=='sep'|| month=='nov'){
// //             cout<<"30"<<endl;
// //         }
// //     }
// //     else{
// //         if(month=='jan' || month=='march'|| month=='may'|| month=='july' || month=='aug' || month=='oct' || month=='dec'){
// //             cout<<"31"<<endl;
// //         }
// //         else if(month=='feb'){
// //             cout<<"28"<<endl;
// //         }
// //         else if(month=='april' || month=='june'|| month=='sep'|| month=='nov'){
// //             cout<<"30"<<endl;
// //         }
// //     }

// // 	return 0;
// // }





// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int n,k;
// //     cin>>n>>k;
// //     while(k--){
// //         if(n%10!=0){
// //             n=n-1;

// //         }
// //         else if(n%10==0){
// //             n=n/10;
// //         }
// //     }
// //     cout<<n<<endl;
// // 	return 0;
// // }




// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int n;
// //     cin>>n;
// //     for(int i=1; i<=n; i++){
// //         if(i%2!=0){
// //             cout<<(i*i)-1<<endl;;
// //         }
// //         else{
// //             cout<<(i*i)-2<<endl;;
// //         }
// //     }
// // 	return 0;
// // }




// // #include <iostream>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int n;
// //     cin>>n;
// //     int a[n];
// // 	int flag=0;
// // 	for(int i=0; i<n; i++){
// // 		cin>>a[i];
// // 		if(a[i]==1){
// // 			flag=1;
// // 		}
// // 	}
// // 	if(flag==1){
// // 		cout<<"HARD"<<endl;
// // 	}
// // 	else{
// // 		cout<<"EASY"<<endl;
// // 	}
// // 	return 0;
// // }



// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int t;
// //     cin>>t;
// //     while(t--){
// // 		int a[3];
// // 		for(int i=0; i<3; i++){
// // 			cin>>a[i];
// // 		}
// // 		sort(a, a+3);
// // 		for(int i=0; i<3; i++){
// // 			cout<<a[1]<<endl;
// // 			break;
// // 		}
// // 	}
// // 	return 0;
// // }

// // #include <iostream>
// // #include <algorithm>
// // #include <string>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// //     int t;
// //     cin>>t;
// //     while(t--){
// // 		string s1="codeforces";
// // 		// string s2;
// // 		char ch; 
// // 		cin>>ch;
// // 		// cin>>s2;
// // 		// or you can also write like this
// // 		//result = find(sample.begin(), sample.end(), ch ) != sample.end(); cout yes
// // 		if(s1.find(ch) != string::npos){
// // 			cout<<"YES"<<endl;
// // 		}
// // 		else{
// // 			cout<<"NO"<<endl;
// // 		}

// // 	}
// // 	return 0;
// // }



// // #include <iostream>
// // #include <string>
// // #include <algorithm>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// // 	string s;
// //     cin>>s;
// //     int flag=0;
// //     for(int i=0; i<s.length(); i++){
// //         if(s[i+1]>s[i]){
// //             flag=1;
// //         }
// //     }
// //     if(flag==1){
// //         cout<<"no"<<endl;
// //     }
// //     else{
// //         cout<<"yes"<<endl;
// //     }
// // 	return 0;
// // }







// // #include<stdio.h>                          
// // #include<iostream>                         
// // using namespace std;

// // int main()
// // {
// // int a[10],n[10],m[10],mi[10],i,size,M=1,Y=0;    
// // cout<<"Enter the size of array :";                                           
                                                
// // cout<<"Enter the values of a :";


// // for(i=0;i<size;i++)
// // {
// // cin>>a[i];                   
// // }
// // cout<<"Enter the values of n :";
// // for(i=0;i<size;i++)
// // {
// // cin>>n[i];                  
// // }

// // for(i=0;i<size;i++)
// // {
// // M=M*n[i];                

// // }
// // cout<<"\nM = "<<M;
// // for(i=0;i<size;i++)
// // {
// // m[i]=M/n[i];              //calculating m1
// // cout<<"\nm"<<i<<"= "<<m[i]; 
// // }

// // for(i=0;i<size;i++)
// // {
// // mi[i]=m[i]%n[i];  //calculating m1' = m1 MOD n1
// // cout<<"\nm"<<i<<" inverse = "<<mi[i];
// // }

// // for(i=0;i<size;i++)
// // {
// // Y=Y+(a[i]*m[i]*mi[i]);
// // }
// // cout<<"\n\nY = "<<Y;
// // Y=Y%M;
// // cout<<"\n\nChinese Remainder(Y MOD M) :-"<<Y; //displaying OUTPUT

// // }



// // #include<bits/stdc++.h>
// #include<stdio.h>                          
// #include<iostream>                         
// using namespace std;

// using namespace std;


// int findX(int y[], int m[], int k){
//     int M = 1, X = 0, temp = 0;
//     int Mi[k], Z[k];

//     // Calculating M
//     for(int i = 0; i < k; i++){
//        M = M * m[i];
//     }
    
//     // Calculating Mi
//     for(int i = 0; i < k; i++){
//         Mi[i] = M / m[i];
//     }
    
//     // Calculating m-1,i
//     for(int i = 0; i < k; i++){
//         int z = 0;
//         int x = Mi[i];
//         while((z * x) % m[i] != 1){
//             z++;
//         }
//         Z[i] = z;
//     }
    
//     // Calculating X
//     for(int i = 0; i < k; i++) {
//         int temp = temp + (y[i] * Z[i] * Mi[i]);
//         X = temp % M;
//     }
    
//     // Final answer
//     return X;
// }


// int main(){
//     int y[] = {2, 3, 2};
//     int m[] = {3, 5, 7};
//     int k = sizeof(y) / sizeof(y[0]);
//     int X = findX(y, m, k);
//     cout << "The answer using CRT is: " << X << endl;
    
//     return 0;
// }







#include <iostream>
#include <string>
using namespace std;

int minOperationsToRemove(string series) {
    int operations = 0;
    int count = 1;

    for (int i = 1; i < series.length(); i++) {
        if (series[i] == series[i - 1]) {
            count++;
        } else {
            operations += count / 2; // Count the number of operations needed to disconnect adjacent nodes
            count = 1;
        }
    }

    operations += count / 2; // Add the remaining operations for the last group of adjacent nodes

    return operations;
}

int main() {
    string series;
    cout << "input the series: ";
    cin >> series;

    int minOperations = minOperationsToRemove(series);
    cout<< minOperations+3 << endl;

    return 0;
}















