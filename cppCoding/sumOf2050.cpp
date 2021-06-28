#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ct=0;
		cin>>n;
		if(n>2050) ct = -1 ;
		else if(n%2050) ct = 1 ;
		else{
			ct = 0;
		}
		cout<<ct<<endl;
	}
}