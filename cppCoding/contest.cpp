#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int b = n & (n-1);
		if(b!=0){
			n--;
			b = b & n ; 
			//cout<<"b : "<<b<<endl;
		}
		cout<<n-1<<endl;

	}
}