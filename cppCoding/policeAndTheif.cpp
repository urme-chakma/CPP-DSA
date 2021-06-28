//Greedy one

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,k;
	cin>>n>>k;
	char a[n] ; 
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	vector<int> police ;
	vector<int> thief ;
	for(int i=0 ; i<n ; i++){
		if(a[i] == 'T') //indices will be added to the vector
		{
			thief.push_back(i) ; 
		}else {
			police.push_back(i) ;
		}
	}
	int ct = 0 ;
	int t_i = 0 , p_i = 0 ;
	while(p_i<police.size() && t_i<thief.size()){
		if(abs(thief[t_i] - police[p_i]) <= k){
			ct++;
			p_i++;
			t_i++;
		}else if(thief[t_i]<police[p_i]){
			t_i++;
		}else p_i++;
	}
	cout<<ct<<endl;
}