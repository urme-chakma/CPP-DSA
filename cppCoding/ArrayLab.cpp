// #include<bits/stdc++.h>
// using namespace std ; 
// void reverseArray(int a[],int n){
// 	int b[n] ; 
// 	for(int i=0 ; i<n ; i++){     //extra space O(N) ;
// 		b[i] = a[i] ; 
// 	}

// 	int start = 0 ;
// 	int end = n-1 ;
// 	while(start<end){
// 		int temp = b[end] ;
// 		b[end] = b[start] ;
// 		b[start] = temp ;
// 		end-- ;
// 		start++ ; 
// 	}

// 	//time O(N) ;

// 	for(int i=0 ; i<n ; i++){
// 		a[i] = b[i] ;
// 	}
// }
// void reverseArrayM2(int a[] , int n){
// 	int start = 0 ; 
// 	int end = n-1 ;
// 	while(start<end){
// 		int temp = a[end] ;
// 		a[end] = a[start] ;
// 		a[start] = temp ;
// 		start++ ;
// 		end-- ;
// 	}
// }

// void recursiveReverse(int a[] , int start , int end){
// 	if(start >= end) return ;
// 	int temp = a[end] ;
// 	a[end] = a[start] ;
// 	a[start] = temp ;

// 	recursiveReverse(a , start+1 , end-1);
// }
// int main(){
// 	int n ; 
// 	cin>>n ; 
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}

// 	//reverseArrayM2(a,n) ; 
// 	recursiveReverse(a,0,n-1);
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }



//Reverse array in groups 
// #include<bits/stdc++.h>
// using namespace std ;

// void reverse_group(int a[] , int k) {
// 	int b[k] ;
// 	for(int i=0 ; i<k ; i++){
// 		b[i] = a[i] ;
// 	}
//
// 	int start = 0 ;
// 	int end = k-1 ;
// 	while(start<end){
// 		int temp = b[end] ;
// 		b[end] = b[start] ;
// 		b[start] = temp ;
// 		end-- ;
// 		start++ ;
// 	}
// 	for(int i=0 ; i<k ;i++){
// 		a[i] = b[i] ;
// 	}
// }
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}

// 	reverse_group(a,k) ; 
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// void reverse_group(vector<long long>v , int k){
// 	vector<long long> rv(k) ; 
// 	for(int i=0 ; i<k ; i++){
// 		rv[i] = v[i] ;
// 	}
// 	int start = 0 , end = k-1 ; 
// 	while(start<end){
// 		int temp = rv[end] ;
// 		rv[end] = rv[start] ;
// 		rv[start] = temp ;
// 		start++ ;
// 		end--;
// 	}
// 	for(int i=0 ; i<k ; i++){
// 		v[i] = rv[i] ; 
// 	}
// 	//cout<<v[0]<<endl;
// } 
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	vector<long long> v(n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i] ;
// 	}
// 	v = reverse_group(v,k) ;
// 	for(int i=0 ; i<n ;i++){
// 		cout<<v[i]<<" ";
// 	}
// }


//Array rotation
// #include<bits/stdc++.h>
// using namespace std ;
// void rotate_array(vector<int> v,int n , int k){
// 	for(int i=0 ; i<k ; i++){
// 		for(int i=0 ; i<n-1 ; i++){
// 			int temp = v[i] ;
// 			v[i] = v[i+1];
// 			v[i+1] = temp ;
// 		}
// 	}
// }
// int main(){
// 	int n,k;
// 	cin>>n>>k ;
// 	std::vector<int> v(n);
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i] ; 
// 	}
// 	rotate_array(v,n,k) ;	
// }

// #include<bits/stdc++.h>
// using namespace std ;
// void rotate_array(int a[] , int n , int k){
// 	for(int i=0 ; i<k ; i++){
// 		for(int j=0 ; j<n-1 ; j++){
// 			int temp = a[i] ;
// 			a[i] = a[i+1];
// 			a[i+1] = temp ;
// 		}
// 	}
// 	for(int i=0 ; i<n ;i++){
// 		cout<<a[i]<<" ";
// 	}cout<<endl;
// }
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	rotate_array(a,n,k);
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// void rotate_array(int a[] , int n , int k){
// 	for(int i=0 ; i<k ; i++){
// 		for(int j=0 ; j<n-1 ; j++){
// 			int temp = a[j] ;
// 			a[j] = a[j+1] ;
// 			a[j+1] = temp ;
// 		}
// 	}
// }
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}
// 	rotate_array(a,n,k) ;
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }


#include<bits/stdc++.h>
using namespace std;
void rotate_array(int a[] , int n , int k){
	int temp[k] ;
	for(int i=0 ; i<k ; i++){
		temp[i] = a[i] ;
	}
	for(int i=0 ; i<n-k ; i++){
		a[i] = a[i+k] ;
	}

	for(int i=0 ; i<k ; i++){
		a[n-k+i] = temp[i] ;
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n] ; 
	for(int i=0 ; i<n ; i++){
		cin>>a[i] ; 
	}
	rotate_array(a,n,k) ; 
	for(int i=0 ; i<n ; i++){
		cout<<a[i]<<" ";
	}
}