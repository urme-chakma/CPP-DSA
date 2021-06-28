// #include<bits/stdc++.h>
// using namespace std ;

// void func(int n){
// 	if(n==0) return ; 
// 	//cout<<n<<endl;
// 	func(n-1);
// }
// int fact(int n){
// 	int facto = 1 ; 
// 	if(n==0) return 1 ; 
	
//     facto = fact(n-1)* n ;
//     cout<<facto<<endl;
// }
// int main()
// {
// 	fact(5);
// }


//sum of an array using recursion 
//sum(n,a) -> sum of elements in a array uptill n index
//sum(n,a) = a[n] + sum(n-1,a)

#include<bits/stdc++.h>
using namespace std ;

int sum(int n,int a[]){
	if(n<0) return 0 ; 
	return sum(n-1,a) + a[n] ; 
}


//Digit Sum 
int digit_sum(int n){
	if(n==0) return 0 ; 
	return digit_sum(n/10) + (n%10) ; 
}

int fibonacci(int n){
	//if(n==0) return;
	if(n<=1) return n;
	return fibonacci(n-1) + fibonacci(n-2);
}
const long long int mod  = 1e9 + 7 ; 
long long int fibonaccidp(long long int n){
	long long int dp[n+5] ; 
	dp[0] = 0;
	dp[1] = 1 ; 
	for(int i=2 ; i<= n ; i++){
		dp[i] = (dp[i-1]%mod + dp[i-2]%mod)%mod ;
	}
	return dp[n];
}



int main(){
	long long int n;
	cin>>n;
	// int a[n] ;
	// for(int i=0 ; i<n ; i++){
	// 	cin>>a[i] ; 
	// }
	//cout<<sum(n-1,a);    //0 base indexing , n-1 means n-th element
	//cout<<digit_sum(n) ; 
	// for(int i=1 ; i<=n ; i++){
	// 	cout<<fibonacci(i)<<" ";
	// }cout<<endl;
	cout<<digit_sum(n);

}