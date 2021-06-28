#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	int ct = 0 ; 
	vector<int> v;
	for(int i=1 ; i<=n ; i++){
		if(n%i == 0){
			ct++;
			v.push_back(i);
		}
	}
	//o(n)
	cout<<ct<<endl;
	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}
}