#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s,Je;
		cin>>s>>Je;
		int count = 0 ; 
		for(int i=0 ; i<Je.size() ; i++){
			for(int j=0 ; j<s.size() ; j++){
				if(s[j] == Je[i]){
					count++;
					break;
				}
			}
		}
		cout<<count<<endl;
	}
}