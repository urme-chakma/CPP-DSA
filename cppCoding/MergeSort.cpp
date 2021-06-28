// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e5 + 10 ;
// int a[N] ;

// //we will implement merge function using recursion
// void merge(int l,int r, int mid){
// 	// at first constract the left and right array
//  	int l_sz = mid - l + 1  ;   //size of left array
//  	int L[l_sz + 1] ;     ////for keeping INT_MAX value in order to compare
//  	int r_sz = r - mid ; // r-(mid+1)+1 size right array
//  	int R[r_sz + 1];    //for keeping INT_MAX value in order to compare
//  	for(int i=0 ; i<l_sz ; i++){
//  		L[i] = a[i+l] ;
//  	}
//  	for(int i=0 ; i<r_sz ; i++){
//  		R[i] = a[i+mid+1] ;
//  	}
//  	L[l_sz] = R[r_sz] = INT_MAX ;
//  	//l_i and r_i will keep the track of indices of left array 
//  	//and right array by increasing number of indices 
//  	int l_i = 0 ;    //first index of left array
//  	int r_i = 0 ;   //first index of right array
//  	for(int i=l ; i<=r ; i++){
//  		if(L[l_i] <= R[r_i]){
//  			a[i] = L[l_i] ;
//  			l_i++;
//  		}else{
//  			a[i] = R[r_i] ;
//  			r_i++;
//  		}
//  	}
// }

// void mergeSort(int l , int r){
// 	if(l==r) return ;
// 	int mid = (l+r) / 2 ; 
// 	mergeSort(l,mid);
// 	mergeSort(mid+1 , r);
// 	merge(l,r,mid) ; 
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	mergeSort(0,n-1);
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" " ; 
// 	}
// }

//Merge Sort
// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e7 + 10 ; 
// int a[N] ;

// void merge(int l,int r,int mid){
// 	int l_sz = mid - l + 1 ;
// 	int L[l_sz+1];
// 	int r_sz = r - mid ; // r-(mid+1)-1
// 	int R[r_sz + 1] ;

// 	//Constructing Left Array
// 	for(int i=0 ; i<l_sz ; i++){
// 			L[i] = a[i+l] ; 
// 	}

// 	//Constructing Right Array
// 	for(int i=0 ; i<r_sz ; i++){
// 		R[i] = a[i+mid+1];
// 	}

// 	L[l_sz] = R[r_sz] = INT_MAX ;
// 	int l_i = 0 ;
// 	int r_i = 0 ;

// 	// Merging two arrays
// 	for(int i=l ; i<=r ; i++){
// 		if(L[l_i] <= R[r_i]){
// 			a[i] = L[l_i] ;
// 			l_i++;
// 		}else {
// 			a[i] = R[r_i] ;
// 			r_i++ ; 
// 		}
// 	}
// }
// void mergeSort(int l,int r){
// 	if(l==r) return ; // if l==r , there is only 1 element 
// 	int mid = (l+r)/2;
// 	mergeSort(l, mid); 
// 	mergeSort(mid + 1 , r) ;
// 	merge(l,r,mid);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	mergeSort(0,n-1);
// 	for(int i=0 ; i<n ;i++){
// 		cout<<a[i]<<" " ; 
// 	}
// }
#include<bits/stdc++.h>
using namespace std ;
const int N = 1e7 + 10 ;
int a[N] ; 
void Merge(int l,int r,int mid){
	int l_sz = mid-l+1 ;
	int L[l_sz+1] ;
	int r_sz = r-mid ; 
	int R[r_sz + 1] ;

	for(int i=0 ; i<l_sz ; i++){
		L[i] = a[i+l] ;
	}

	for(int i=0 ; i<r_sz ; i++){
		R[i] = a[i + mid + 1] ;
	}

	L[l_sz] = R[r_sz] = INT_MAX ;
	int l_i = 0 , r_i = 0 ; 

	//Marging two arrays ;
	for(int i=l ; i<=r ; i++){
		if(L[l_i] <= R[r_i]){
			a[i] = L[l_i] ;
			l_i++ ;
		}
		else {
			a[i] = R[r_i] ;
			r_i++ ;
		}
	}
}

void MergeSort(int l,int r){
	if(l==r) return ;
	int mid = (l+r) / 2 ;
	MergeSort(l,mid) ;
	MergeSort(mid+1 , r) ;
	Merge(l,r,mid) ;
}
int main(){
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>a[i] ;
	}
	MergeSort(0 , n-1);
	for(int i=0 ; i<n ; i++){
		cout<<a[i]<<" ";
	}
	return 0 ; 
}