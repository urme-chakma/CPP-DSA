#include<bits/stdc++.h>
using namespace std ;
int main()
{
	string s;
	cin>>s;
	int cA=0 , cB=0; 
	bool flag = true;
	for(int i=0 ; i<s.size() ; i++){
		if(s[i] == 'A'){
			cA++;
		}else if(s[i] == 'L' && s[i+1] == 'L'){
			cB++;
		}else cB=0;

		if(cA>1 || cB>1) flag = false ;
	}
	if(flag) cout<<"true"<<endl;
	else cout<<"false"<<endl;
}