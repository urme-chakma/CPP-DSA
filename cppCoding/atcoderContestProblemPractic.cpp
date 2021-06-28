//B - Palindrome with leading zeros 
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	string s;
// 	cin>>s;
// 	for(int i=s.size()-1 ; i>=0 ; i--){
// 		if(s[i] == '0'){
// 			s.pop_back() ; 
// 		}else{
// 			break;
// 		}
// 	}
// 	string t = s ;
// 	reverse(t.begin() , t.end());
// 	if(s==t) cout<<"Yes"<<endl;
// 	else cout<<"No"<<endl;
// }


#include<bits/stdc++.h>
using namespace std ;
int main(){
	int R,X,Y;
	cin>>R>>X>>Y;
	double t = ((X*X)+(Y*Y))/(R*R);
	cout<<ceil(t)<<endl;
}