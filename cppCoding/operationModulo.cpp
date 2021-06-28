/*
	Given array of N integers.Given Q queries and in each 
	query given L and R . Print sum of array elements 
	from index L to R(L,R included).


	Constraints:
	1<=N<=1e5
	1<=a[i]<=1e9
	1<=Q<=1e5
	1<=L,R<=N

*/

#include<bits/stdc++.h>
using namespace std ;
 
long long get(long long n){
	if(n==0) return 0 ; 
	long long ans = 0 ; 
	long long x = 1 ; 
	while(x<=n){
		ans += x ; 
		x<<=1 ; 
	}
	return ans ; 
}
int main(){
	long long l , r ;
	cin>>l>>r ; 
	cout<<get(r)-get(l-1);
} 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	long long int l,r,fun=0,sum=0;
// 	cin>>l>>r;
// 	map<long long int,long long int>hash;
// 	for(long long int i=r;i>=l;i--){
// 	for(long long int it=1;it<=i;it++){
// 		fun=fun+(i%it) ;
// 	}
// // ;
// //checking if the fun with  same value is present

//           if(hash[i+1]==fun)
//           sum=sum+(i+1);
// 		  hash[i]=fun;
// 	fun=0;
// 	}
// 	cout<<sum;
// 	return 0;
// }