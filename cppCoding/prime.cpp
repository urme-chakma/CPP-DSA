#include<bits/stdc++.h>
using namespace std ; 
int main(){
	long n;
	cin>>n ;
	int isPrime = 1;
	for(int i=2 ; i<sqrt(n) ; i++){
		if(n%i == 0){
			isPrime = 0 ; 
		}
	}
	// for(long i=2 ; i<n ; i++){
	// 	if(n%2 == 0) isPrime = 0 ; 
	// }
	if(isPrime)cout<<"Prime"<<endl;
	else cout<<"Not Prime"<<endl;
	//cout<<"Urme"<<endl;
}