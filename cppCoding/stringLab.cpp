//The String Problem
// #include<bits/stdc++.h>
// using namespace std ; 
// int main()
// {
// 	// string s1,s2;
// 	// //cin>>s1>>s2 ; 
// 	// getline(cin,s1) ;        
// 	// cout<<s1;

// 	int t;
// 	cin>>t;
// 	cin.ignore() ; //ignore the spaces after 3
// 	while(t--){
// 		string s;
// 		getline(cin,s);
// 		cout<<s<<endl;
// 	}
// }

//reverse a string
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s ;
// 	getline(cin,s) ; 
// 	//cin>>s;
// 	string s_rev ;
// 	for(int i=s.size()-1 ; i>=0 ; i--){
// 		//s_rev = s_rev + s[i] ;  //not efficient
// 		s_rev.push_back(s[i]) ; 	//efficient
// 	}

// 	//case palindrome ; 
// 	if(s==s_rev) cout<<"Yes"<<endl;
// 	else cout<<"No"<<endl;
// 	cout<<s_rev<<endl;
// }

//palindrome another method
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s ;
// 	cin>>s;
// 	int n = s.size() ;
// 	int flag = 0 ; 
// 	for(int i=0 ; i<n/2 ; i++){
// 		if(s[i] == s[n-1-i]) flag = 1 ; 
// 		else break ; 
// 	}
// 	cout<<n<<endl;
// 	cout<<flag;
// } 


//
#include<bits/stdc++.h>
using namespace std ; 
int main(){
	string s ; 
	cin>>s;
	cout<<*(s.end()-1)<<endl;
	//cout<<s[s.size()-1]<<endl;
	//cout<<s[s.size()-1]-'0';
}

