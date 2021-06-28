#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,k;
	cin>>n>>k;
	bool flag = 0 ;
	while(n--){
		int x ;
		cin>>x ;
		if(x == k) flag = 1 ;
	}
	if(flag) cout<<1;
	else cout<<-1;
}