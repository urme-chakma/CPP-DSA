// //Palindrome
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	string s ;
// 	cin>>s ;
// 	bool flag = false ;
// 	int n = s.size() ;
// 	for(int i=0 ; i<n ; i++){
// 		if(s[i] == s[n-1-i]) flag = true ;
// 	}
// 	if(flag) cout<<"YES"<<endl;
// 	else cout<<"NO"<<endl;
// }

//Lapindrome
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s ;
		cin>>s ;
		int n = s.size() ;
		unordered_map<char , int> mp;
		unordered_map<char,int> m;
		for(int i=0 ; i<n/2 ; i++){
			mp[s[i]]++;
		}
		for(int i=n/2 ; i<n ; i++){
			m[s[i]]++;
		}
		
		if(mp==m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}