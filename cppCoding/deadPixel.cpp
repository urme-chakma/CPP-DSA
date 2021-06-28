#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,x,y ; 
		cin>>a>>b>>x>>y;
		int k = a*y;
		int l = b*x;
		int m = a*(b-y-1);
		int n = b*(a-x-1);
		int mx = max(k,l);
		int mx1 = max(m,n);
		cout<<max(mx,mx1)<<endl;
	}
}