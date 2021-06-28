// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e7+10;
// long long hsh[N];
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		while(n--){
// 			int x;
// 			cin>>x;
// 			hsh[x]++;
// 		}
// 		while(m--){
// 			int x;
// 			cin>>x;
// 			if(hsh[x]==1){
// 				hsh[x]++;
// 				break;
// 			}
// 		}
// 		for(int i=1 ; i<=n ; i++){
// 			if(hsh[i]==1){
// 				cout<<hsh[i]<<" ";
// 			}
// 		}cout<<endl;
// 	}
// }


// Naive approach
// #include<bits/stdc++.h>
// using namespace std ;

// // Function for finding  
// // elements which are there  
// // in a[]  but not in b[]. 

// void findMissing(int a[],int b[],int n,int m){
// 	for(int i=0 ; i<n ; i++){
// 		int j;
// 		for(j=0 ; j<m ; j++){
// 			if(a[i] == b[j])
// 				break;
// 		}
// 		if(j==m){
// 			cout<<a[i]<<" ";
// 		}
// 	}cout<<endl;
// }

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		int a[n],b[m];
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i];
// 		}
// 		for(int i=0 ; i<m ; i++){
// 			cin>>b[i];
// 		}
// 		findMissing(a,b,n,m);
// 	}
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std ;

// void findMissing(int a[],int b[],int n,int m){
// 	// Store all elements of  
//     // second array in a hash table 
//     unordered_set<int> s;
//     for(int i=0 ; i<m ; i++){
//     	s.insert(b[i]);
//     }
//     for(int i=0 ; i<n ; i++){
//     	if(s.find(a[i]) == s.end()){
//     		cout<<a[i]<<" ";
//     	}
//     }cout<<endl;
// }

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		int a[n],b[m];
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i];
// 		}
// 		for(int j=0 ; j<m ; j++){
// 			cin>>b[j];
// 		}
// 		findMissing(a,b,n,m);
// 	}
// }

//#################################################################333

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	//declaring set for storing string data_type
// 	unordered_set<string> s;

// 	//Inserting various string , same string will be stored
// 	//once in set

// 	s.insert("code");
// 	s.insert("in");
// 	s.insert("c++");
// 	s.insert("is");
// 	s.insert("fast");

// 	string key = "slow";

// 	//find returns end iterator if key is not found,
// 	//else it returns iterator to that key

// 	if(s.find(key)==s.end()){
// 		cout<<key<<" not found"<<endl<<endl;
// 	}else{
// 		cout<<key<<" Found "<<endl<<endl;
// 	}

// 	key = "c++";
// 	if(s.find(key) == s.end()){
// 		cout<<key<<" not found\n";
// 	}else{
// 		cout<<key<<" Found "<<key<<endl;
// 	}

// 	//now iterating over whole set and printing its
// 	//content
// 	cout<<"\nAll elements : ";
// 	unordered_set<string>::iterator it ;
// 	for(it=s.begin() ; it!=s.end() ; ++it){
// 		cout<<*it<<" ";
// 	}cout<<endl;

// }

//###############################################################
//Binary Search //Elements are in same order
// C++ program to find missing element from same 
// arrays (except one missing element) 

// #include<bits/stdc++.h>
// using namespace std ;

// int findMissingUtil(int a[],int b[],int n){
// 	 // special case, for only element which is 
//     // missing in second array 

//     if(n==1){
//     	return a[0];
//     }

//     // special case, for first element missing
//     if(a[0] != b[0]){
//     	return a[0];
//     }
//     // Initialize current corner points
//     int low = 0 , high = n-1 ;

//     //loop until low<high
//     while(low<high){
//     	int mid = (low+high)/2;

//     	// If element at mid indices are equal 
//         // then go to right subarray
//         if(a[mid] == b[mid]){
//         	low = mid;
//         }
//         else{
//         	high = mid;
//         }

//         // // if lo, hi becomes contiguous,  break
//         if(low == high-1){
//         	break;
//         }
//         // missing element will be at hi index of 
//         // bigger array 
//         return a[high];
//     }
// }

// // This function mainly does basic error checking 
// // and calls findMissingUtil

// void findMissing(int a[],int b[],int n,int m){
// 	if(m==n-1){
// 		cout<<"Missing element is "<<findMissingUtil(a,b,n)<<endl;
// 	}
// 	else if(n == m-1){
// 		cout<<"Missing element is "<<findMissingUtil(a,b,m)<<endl;
// 	}
// 	else{
// 		cout<<"Invalid Input";
// 	}
// }

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		int a[n];
// 		int b[m];
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i];
// 		}
// 		for(int i=0 ; i<m ; i++){
// 			cin>>a[i];
// 		}
// 		findMissing(a,b,n,m);
		 
// 	}cout<<endl;
// 	return 0 ;
// }

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		map<int , int> hash;  //here int int is the pair of data types
		for(int i=0 ; i<n ; i++){
			cin>>a[i];
		}
		for(int i=0 ; i<m ; i++){
			cin>>b[i];
			hash.insert(pair<int,int> (b[i],i));
		}
		for(int i=0 ; i<n ; i++){
			if(hash.find(a[i]) == hash.end()){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0 ; 
}