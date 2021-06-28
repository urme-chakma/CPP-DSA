// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s1,s2,s3 ;
// 	cin>>s1>>s2 ; 
// 	int hash[257];
// 	for(int i=0 ; i<257 ; i++){
// 		hash[i]=0 ; 
// 	}
// 	for(int i=0 ; i<s2.length() ; i++){
// 		hash[s2[i]]++;
// 	}
// 	for(int i=0 ; i<s1.length() ; i++){
// 		if(hash[s1[i]] == 0) {
// 			s3.push_back(s1[i]);
// 		}
// 	}
// 	cout<<s3<<endl;
// }

//Using "s2.find(s1[i])!= string::npos" this function
#include<bits/stdc++.h>
using namespace std ;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0 ; i<s1.length(); i++){
		//string::npos actually means until the end of the string
		while(s2.find(s1[i]) != string::npos){ 
			s1.erase(i,1);
		}
	}
	cout<<s1<<endl;
}