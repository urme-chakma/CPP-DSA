#include<bits/stdc++.h>
using namespace std ;

void print(int n){
	for(int i=1 ; i<=n ; i++){
		for(int j=i ; j<n ; j++){
			cout<<" ";
		}for(int j=1 ; j<=i ; j++){
			cout<<"*";
		}cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	print(n);
}