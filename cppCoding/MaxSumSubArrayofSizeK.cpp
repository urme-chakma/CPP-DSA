#include<bits/stdc++.h>
using namespace std ; 

int max_sum_subarray_size_k(int a[],int n , int k){
	if(n<k) return -1 ;
	int res = 0 ; 
	for(int i=0 ; i<k ; i++){
		res += a[i] ; 
	}
	int cur_max = res;
	for(int i = k ; i<n ; i++){
		cur_max += a[i] - a[i-k];
		res = max(res,cur_max) ; 
	}
	return res ; 
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n+4];
	for(int i=1 ; i<=n ; i++){
		cin>>a[i];
	}
	cout<<max_sum_subarray_size_k(a,n,k)<<endl;
	return 0 ; 
}