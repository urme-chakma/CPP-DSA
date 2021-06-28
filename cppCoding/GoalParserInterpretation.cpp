#include<bits/stdc++.h>
using namespace std ; 
int main(){
	string command ;
	cin>>command;
	string temp ; 
	for(int i=0 ; i<command.size() ; ){
		if(command[i] == 'G'){
		temp.push_back('G');
		i++;
		}else if(command[i] == '(' && command[i+1] == ')' ){
			temp.push_back('o');
			i=i+2;  // as here is already two character
		}else{
			temp.push_back('a');
			temp.push_back('l');
			i=i+4;
		}
	}cout<<temp;
}