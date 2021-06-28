#include<bits/stdc++.h>
using namespace std ; 
const int N = 1e5 + 7 ;
int a[N] ;
int main(){
	int t;
	cin>>t;
	for(int i=0 ; i<N ; i++ ){
		a[i] = 0;
	}
	for(int i=1 ; i<=t ; i++){
		int n;
		cin>>n;
		int a[n] ; 
		for(int i=0; i<n ; i++){
			cin>>a[i];
		}
		sort(a,a+n) ;
		int ct = 0 ;
		unordered_map<int,int> mp;
		for(int i=0 ; i<n ; i++){
			mp[a[i]]++;
		}
		// for(auto x : mp){
		// 	//cout<<x.first<<" "<<x.second<<endl;
		// 	ct += x.second * n--;
		// }
		for(int i=0 ; i<n ; i++){
			cout<<mp[a[i]]<<" ";
		}
		cout<<ct<<endl;
	}
}

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t;
// 	cin>>t;
// 	for(int i=1 ; i<=t ; i++){
// 		int n;
// 		cin>>n;
// 		int a[n] ; 
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i] ; 
// 		}
// 		sort(a,a+n);
// 		int ct = 0 ;
		
// 		for(int i=0 ; i<n-1 ; i++){
// 			int r = 1;
// 			if(a[i] == a[i+1]) {r += 1;}
// 			else {r = i+3;}
// 			ct += r;
// 		}
// 		cout<<ct<<endl;
// 	}
//}