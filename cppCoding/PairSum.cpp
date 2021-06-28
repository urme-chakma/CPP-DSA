// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n];
// 	for(int i=0 ; i<n ;i++){
// 		cin>>a[i];
// 	}
// 	//int i=0 ; 
// 	int flag = 0 ; 
// 	for(int i=0 ; i<=n/2 ; ){
// 		if(a[i]+a[n-1-i] == k){
// 			flag = 1 ; 
// 		}
// 		else if(a[i]+a[n-1-i]>k){
// 			n--;
// 		}
// 		else{
// 			i++;
// 		}
// 	}
// 	if(flag == 1){
// 		cout<<"YES"<<endl;
// 	}else{
// 		cout<<"NO"<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e6+10;
// int hsh[N];
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n];
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}
// 	sort(a,a+n);
// 	for(int i=0 ; i<n-1 ; i++){
// 		hsh[i] = a[i] + a[i+1];
// 	}
// 	int flag = 0 ; 
// 	for(int i=0 ; i<n ;i++){
// 		if(hsh[i] == k){
// 			flag = 1;
// 			break;
// 		}
// 	}
// 	if(flag){
// 		cout<<"YES";
// 	}
// 	else {
// 		cout<<"NO";
// 	}

// }

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,k,c=0 , l, r ; 
	cin>>n>>k;
	int a[n];
	for(int i=0 ; i<n ;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	l=0; 
	r=n-1;
	while(l<r){
		if(a[l]+a[r]>k){
			r--;
		}
		else if(a[l]+a[r]<k){
			l++;
		}
		else {
			c=1;
			break;
		}
	}
	if(c==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0 ; 

	// O(n)*O(n) = O(n*n)
}