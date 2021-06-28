#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count = 0 ;
	for(int i=1 ; i<n ; i+=2){
		if(s[i] == s[i-1]){
			count++;
			if(s[i] == 'a'){
				s[i] = 'b' ;
			}
			else {
				s[i] = 'a';
			}
		}
	}
	cout<<count<<endl;
	cout<<s<<endl;
}