/*
Given T test cases and in each test case
a number N . Print its factorial for each
that case % M .
where M = 10^9 + 7 

Constraints : 
	1 <= T <= 10^5 
	1 <= N <= 10^5 
*/

#include<bits/stdc++.h>
using namespace std ;
const int M = 1e9+7 ; 
const int N = 1e5+10 ; 
long long fact[N];
int main()
{
	fact[0] = fact[1] = 1 ;

	//Pre-Computing the value
	for(int i=2 ; i<N ; i++){
		fact[i] = fact[i-1]*i ;   //fact(3) = fact(2) * 3 ; fact(4) = fact(3) * i ; 
	}
	int t ; 
	cin>>t ; 
	while(t--){
		int n;
		cin>>n ; 
		cout<<fact[n]<<endl;

		// O(T*N) = 10^10 OLD
		//O(N) + O(T) = 10^5 + 10^5 = 2 * 10^5
	}
}