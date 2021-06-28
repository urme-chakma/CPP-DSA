// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int a,b,c;
// 	cin>>a>>b>>c ;
// 	if(a+b>c && a+c>b && b+c>a) cout<<"YES";
// 	else cout<<"NO";
// }

#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int sum = 0 ;
    for(int i=1 ; i<=n ; i++){
        sum += i ;
    }
    cout<<sum;
}