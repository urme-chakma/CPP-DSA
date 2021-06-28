#include<bits/stdc++.h>
using namespace std ; 

char upper(char c){
	return 'A' + (c-'a') ; //the character will be converted to capital letter
}

int main()
{
	while(true){  //infinite loop
		string s;
		cin>>s;
		if(s.size() == 0){ //means our word is empty/our input is finished
			break;
		}
		for(int i=0 ; i<s.size() ; i++){
			s[i] = upper(s[i]);
		}
		cout<<s<<endl;
	}
}