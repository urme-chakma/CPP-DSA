/*
Given array a of N integer.Given Q queries in each 
query given a number x,print count  of that number in array.

Constraints : 
	1<=N<=10^5
	1<=a[i]<=10^7
	1<=Q<=10^5
*/

// Lets first see the Brute Force approach
// #include<bits/stdc++.h>
// using namespace std ; 
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}

// 	int q ; 
// 	cin>>q ; 
// 	while(q--){
// 		int x;
// 		cin>>x ; 
// 		int ct = 0 ; 
// 		for(int i=0 ; i<n ; i++){
// 			if(a[i] == x){
// 				ct++ ; 
// 			}
// 		}
// 		cout<<ct<<" " ; 
// 	}
// 	//O(N) + O(Q*N)) = O(N^2) = 10^10 
// }


//Lets Try Hashing
// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e7 +10 ; 
// int hsh[N] ; 
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n]; 


// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 		//storing the values in hsh[] array using Pre-computing
// 		hsh[a[i]]++ ; //increasing the elements value 
// 	}
	
// 	int q ; 
// 	cin>>q ; 
// 	while(q--){
// 		int x;
// 		cin>>x ; 
// 		cout<<hsh[x]<<" ";
// 	}

// 	//O[N] + O[Q] = O[N] = 2*10^5
// }

