#include<bits/stdc++.h>
using namespace std ; 

string compatible(string s1,string s2){
	if(s1.size() != s2.size()) return "NO" ; 

	int diff = s2[0] - s1[0];
	for(int i=1 ; i<s1.size() ; i++){
		if(diff<(s2[i] - s1[i])) return "NO";
		diff = s2[i] - s1[i];
	}
	return "YES";
}

int main()
{
	string s1 , s2 ; 
	cin>>s1>>s2 ; 
	cout<<compatible(s1,s2)<<endl;
}