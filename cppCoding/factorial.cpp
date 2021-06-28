/* Given a number N . Print its factorial.
Constraints 
1 <= N <= 100
*/
#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	int n;
	cin>>n ; 
	int M = 47 ; 
	long long fact = 1 ; 
	for(int i=2 ; i<=n ; ++i){
		fact = (fact*i) % M ; 
	}
	cout<<fact ; 
}