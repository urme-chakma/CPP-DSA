// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int sum = 0 ; 
// 	int temp = n ;
// 	while(n>0){
// 		int r = n%10 ; 
// 		sum = sum*10 + r ;
// 		n = n/10 ; 
// 	}
// 	if(temp == sum) cout<<"Palindrome"<<endl;
// 	else cout<<"Not a Palindeom"<<endl;
// }

//recursion palindrome number 
#include<bits/stdc++.h>
using namespace std ; 

int checkPalindrome(int n){
	if(n==0) return 0;
	return  checkPalindrome(n/10 + (n%10)*10 )   ;
}
int reverseNum(int n){
	int reverseNumber = 0 ;
	while(n>0){
		int lastDigit = n%10 ;
		reverseNumber = reverseNumber * 10 + lastDigit ;
		n = n/10 ; 
	} 
	return reverseNumber ;
}

int recursiveReverse(int n){
	int digit = (int)log10(n);
	if(n==0) return 0 ;
	return n%10 * pow(10,digit) + recursiveReverse(n/10) ;
}
int main(){
	int n;
	cin>>n;
	cout<<recursiveReverse(n);
	// if(n == checkPalindrome(n)) cout<<"Y";
	// else cout<<"N";
}