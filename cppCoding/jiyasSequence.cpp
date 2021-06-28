#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long product =  1 ;
		for(int i=0 ; i<n ; i++){
			int x;
			cin>>x;
			product *= x ;  // long long get more preference than integer
		}
		int least_sig_digit = product % 10 ;
		if(least_sig_digit == 2 || least_sig_digit == 3 || least_sig_digit == 5){
			cout<<"YES\n";
		}else{
			cout<<"NO\n" ;
		}
	}
}