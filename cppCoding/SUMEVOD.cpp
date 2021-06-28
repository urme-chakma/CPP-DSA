// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n ;

// 	//formula of sum of odd and odd numbers
// 	cout<<(n*n)<<" "<<(n*(n+1))<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n ;
// 	cin>>n ;
// 	int evenCurr = 2 , evenSum = 0 , oddCurr = 1 , oddSum = 0 ;
// 	for(int i=0 ; i<n ; i++){
// 		evenSum += evenCurr ;
// 		evenCurr += 2 ; 
// 		oddSum += oddCurr ;
// 		oddCurr += 2 ;
// 	} 
// 	cout<<oddSum<< " " <<evenSum<<endl;

// }

#include<bits/stdc++.h>
using namespace std ;
void retu(int n){
	cout<<(n*n)<<" "<<(n*(n+1));
}
int main(){
	int n;
	cin>>n;
	if(n != 0){
		retu(n);
	}
	
}