#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	unordered_map<string,int> mp ;
	while (n--){
		string s;
		cin>>s;
		if(mp.count(s) == 0){
			cout<<"OK"<<endl;
			mp[s]++;
		}else{
			cout<<s<<mp[s]<<endl;
			mp[s]++ ;
		}
	}
}


