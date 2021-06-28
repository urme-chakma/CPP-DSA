#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool flag = true ;
		for(int i=0 ; i<s.size()-1 ; i++){
			if(s[i] == 'z'){
				if(s[i+1]=='a' || s[i+1] == 'y'){
					flag = true ; 
				}else{
					flag = false ;
					break;
				}
			}
			else if(s[i] == 'a'){
				if(s[i+1] == 'b' || s[i+1] == 'z'){
					flag = true ; 
				}else {
					flag = false ;
					break;
				}
			}
			else if(abs(s[i] - s[i+1]) == 1){
				flag = true ; 
			}else {
				flag = false ; 
				break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}