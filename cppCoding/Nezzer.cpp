#include<bits/stdc++.h>
using namespace std ; 
const int N = 2e5+7;
int ct[N];
int t,n ; 
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1 ; i<=n ; i++){
			ct[i] = 0 ;
		}
		for(int i=1 ; i<=n ; i++){
			int u;
			cin>>u;
			ct[u]++;
		}
		int mx=0;
		for(int i=1 ; i<=n ; i++){
			mx = max(mx,ct[i]);
		}
		cout<<mx<<endl;
	}	
}