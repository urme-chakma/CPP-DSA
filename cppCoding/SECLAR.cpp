// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int a[3] ;
// 	for(int i=0 ; i<3 ; i++){
// 		cin>>a[i] ; 
// 	}
// 	sort(a,a+3);
// 	cout<<a[1];
//}
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int a,b,c;
	cin>>a>>b>>c ;
	if(a>b && a>c){
		if(b>c) cout<<b;
		else cout<<c ;
	}else if(b>a && b>c){
		if(a>c) cout<<a;
		else cout<<c ;
	}else if(a>b) cout<<a;
	else cout<<b;
}