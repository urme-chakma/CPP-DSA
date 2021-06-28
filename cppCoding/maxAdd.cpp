#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	int a[n] ; 
	for(int i=0 ; i<n ; i++){
		cin>>a[i] ; 
	}
	int sum = 0 ; 
	int sm[n] ; 
	for(int i=0 ; i<n ; i++){
		sm[i] = 0 ; 
	}
	for(int i=0 ; i<n ; i++){
		sum += a[i] ; 
	} 
	//cout<<sum<<endl;
	sm[0] = sum - (a[0] + *max_element(a,a+n));
	a[0] = a[0] + *max_element(a,a+n);

	for(int i=0 ; i<n ; i++){
		int mx = *max_element(a,a+n);
		sm[i+1] += mx ; 
	}
	for(int i=0 ; i<n ; i++){
		cout<<sm[i]<<" ";
	}
}