#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0 ; i<m ; i++){
		cin>>a[i];
	}
	int mx = 0 ;
	int one = 0 ;
	bool flag = true ; 
	sort(a,a+m);
	if(a[0] == 1 || a[m-1]==n) flag = false ; 
	for(int i=0 ; i<m-1 ; i++){
		if(a[i+1] - a[i] == 1){
			one++;
			mx = max(mx,one);
		} 
		else{
			one = 0 ;
		} 
	}
	if(mx>=2){
		flag = false ; 
	}

	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}