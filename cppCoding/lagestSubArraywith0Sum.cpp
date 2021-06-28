// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}
// 	int ct = 0 ; 
// 	for(int i=0 ; i<n ; i++){
// 		int sum = 0 ; 
// 		for(int j = i ; j<n ; j++){
// 			sum += a[j] ;
// 			if(sum == 0){
// 				ct = max(ct,j-i+1) ;
// 			}
// 		}
// 	}
// 	cout<<ct<<endl;
// }


/* A simple C++ program to find 
largest subarray with 0 sum */
#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	int a[n] ;
	for(int i = 0 ; i<n ; i++){
		cin>>a[i] ; 
	}
	unordered_map<int,int> mp ; 
	int sum = 0 ; 
	int max_len = 0 ; 
	for(int i=0 ; i<n ; i++){
		sum += a[i] ;
		if(sum == 0  && max_len == 0){
			max_len = 1 ; 
		}

		if(sum == 0){
			max_len = i+1 ; 
		}
		if(mp.find(sum) == mp.end()){
			mp[sum] = i ; 
		}
		else{
			max_len = max(max_len,i-mp[sum]) ; 
		}
	}
	cout<<max_len<<endl;
}