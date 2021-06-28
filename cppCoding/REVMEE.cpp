#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	stack<int> stk ;
	while(n--){
		int x ;
		cin>>x ;
		stk.push(x) ;
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}

}