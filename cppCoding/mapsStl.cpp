#include<bits/stdc++.h>
using namespace std ;
int main(){
	int x; 
	cin>>x;
	string y;
	unordered_map<string,int> mp;
	while(cin>>x>>y){
		switch(x){
			case 1 : cin>>x ; mp[y] += x ; break;
			case 2 : mp.erase(y);break;
			case 3 : cout<<mp[y]<<endl;
		}
	}
	// for(auto x : mp){
	// 	cout<<&x<<" "<<x.first<<" "<<x.second<<endl;
	// }
}