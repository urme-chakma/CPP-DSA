// #include<bits/stdc++.h>
// using namespace std ;
// const int N =  1e7 + 10 ; 
// long long int ar[N];

// int main()
// {
// 	int n,m;
// 	cin>>n>>m;
// 	while(m--){  // loop of m size
// 		int a,b,d;
// 		cin>>a>>b>>d;
// 		for(int i=a ; i<=b ; i++){    // loop of n size 
// 			ar[i] += d ;        //for worst case if a = 1 and b = n , O(n)
// 		}
// 	}
// 	long long mx = -1 ; 
// 	for(int i=1 ; i<=n ; i++){
// 		// if(mx<ar[i]){
// 		// 	mx = ar[i] ; 
// 		// }
// 		mx = max(mx,ar[i]);
// 	}
// 	cout<<mx<<endl;

// 	// O(m*n + n ) = 2*10^5 * 10^7 + 10^7
// 	//the time complexity is 10^12 but we need to keep bound int 10^7
// 	// the 2nd n will be neglect cause m*n is much more greater than n
// }


#include<bits/stdc++.h>
using namespace std ; 
const int N = 1e7 + 10 ; 
long long int ar[N] ;
int main()
{
	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b,k;
		cin>>a>>b>>k;
		ar[a] += k;
		ar[b+1] -= k ;
	}
	for(int i=1 ; i<=n ; i++){
		ar[i] += ar[i-1];
	}
	long long int mx = INT_MIN;
	for(int i=1 ; i<=n ; i++){
		mx = max(mx,ar[i]);
	}
	cout<<mx<<endl;
}

// TC = O(m+n) = 2*10^5 + 10^7 ~ 10^10