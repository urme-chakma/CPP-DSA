// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	long long int l;
// 	char c;
// 	float f;
// 	double d;
// 	cin>>n>>l>>c>>f>>d;
// 	cout<<n<<endl;
// 	cout<<l<<endl;
// 	cout<<c<<endl;
// 	cout<<f<<endl;
// 	cout<<d ; 
// }

//C. Simple Calculator
// "X + Y = summation result" without quotes.
// "X * Y = multiplication result" without quotes.
// "X - Y = subtraction result" without quotes.
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int x,y;
// 	cin>>x>>y;
// 	cout<<x<<" + "<<y<<" = "<<x+y<<endl;
// 	cout<<x<<" * "<<y<<" = "<<x*y<<endl;
// 	cout<<x<<" - "<<y<<" = "<<x-y<<endl;

// }

//D. Difference
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	 int a,b,c,d;
// 	cin>>a>>b>>c>>d ; 
	
// 	cout<<(c)*(d)<<endl;
// 	cout<<a*b<<endl;
// 	signed int x = (a*b) - (c*d);
// 	cout<<"Difference = "<<x<<endl; 

// 	cout<<(-936059416-(2097132184))<<endl;
// }

//E. Area of a Circle
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	double r ;
// 	cin>>r ; 
// 	double area = 3.141592653 * (r*r);
// 	cout<<fixed<<setprecision(9)<<area<<endl;
// }

//F. Digits Summation
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string a,b;
// 	cin>>a>>b;
// 	int c = a[a.size()-1]-'0';
// 	int d = b[b.size()-1]-'0';
// 	cout<<c+d<<endl;
// }


//G. Summation from 1 to N
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	long long int n;
// 	cin>>n;
// 	//long long int sum = 0 ; 
    
// 	cout<<((n*(n+1))/2)<<endl;
// }


//H. Two numbers
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	double ca = (double) a ;
// 	double cb = (double) b ; 
// 	double x = (ca/cb);
// 	cout<<"floor "<<a<<" / "<<b<<" = "<<floor(x)<<endl;
// 	cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(x)<<endl;
// 	cout<<"round "<<a<<" / "<<b<<" = "<<round(x)<<endl;
// }


//I. Welcome for you with Conditions
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	if(a>=b){
// 		cout<<"Yes";
// 	}else{
// 		cout<<"No";
// 	}
// }


//J. Multiples
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	if(a%b == 0 || b%a == 0){
// 		cout<<"Multiples";
// 	}else{
// 		cout<<"No Multiples";
// 	}
// }


//K. Max and Min
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b,c;
// 	cin>>a>>b>>c;
// 	cout<<min(a,min(b,c))<<" "<<max(a,max(b,c));
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string f1[2] ;
// 	string f2[2] ; 
// 	for(int i=0 ; i<2 ; i++){
// 		cin>>f1[i] ; 
// 	}
// 	for(int i=0 ; i<2 ; i++){
// 		cin>>f2[i] ; 
// 	}

// 	if(f1[1] == f2[1]){
// 		cout<<"ARE Brothers";
// 	}
// 	else{
// 		cout<<"NOT";
// 	}
// }

//M. Capital or Small or Digit
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	char c ;
// 	cin>>c ; 
// 	if(c >= 97 && c<=122){
// 		cout<<"ALPHA"<<endl;
// 		cout<<"IS SMALL"<<endl;
// 	}
// 	else if(c>=65 && c<=90){
// 		cout<<"ALPHA"<<endl;
// 		cout<<"IS CAPITAL"<<endl;
// 	}
// 	else{
// 		cout<<"IS DIGIT"<<endl ; 
// 	}
// }

//N. Char
// #include<iostream>
// using namespace std;
// int main()
// {
//     char c , cc ; 
//     cin>>c;
//     int ascii ; 
//     if(c>=97 && c<=122){
//     	ascii = c ; 
//     	ascii -= 32 ;
//     	cc = ascii;
//     	cout<<cc<<endl;
//     }else{
//     	ascii = c ; 
//     	ascii += 32 ;
//     	cc = ascii ;
//     	cout<<cc<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s;
// 	cin>>s;
// 	if(s[0] % 2 == 0){
// 		cout<<"EVEN"<<endl;
// 	}
// 	else{
// 		cout<<"ODD"<<endl;
// 	}
// }

//Q. Coordinates of a Point
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	double a,b;
// 	cin>>a>>b;
// 	if(a==0 && b==0){
// 		cout<<"Origem"<<endl;
// 	}
// 	else if(b==0){
// 		cout<<"Eixo X"<<endl;
// 	}
// 	else if(a==0){
// 		cout<<"Eixo Y"<<endl; 
// 	}
// 	else if(a>0 && b>0){
// 		cout<<"Q1"<<endl;
// 	}
// 	else if(a<0 && b>0){
// 		cout<<"Q2"<<endl;
// 	}
// 	else if(a>0 && b<0){
// 		cout<<"Q4"<<endl;
// 	}
// 	else{
// 		cout<<"Q3"<<endl;
// 	}
// }


//R. Age in Days
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int y=0,m=0,d=0 ; 
// 	if(n>365){
// 		y = n/365 ; 
// 		n = n-(y*365) ; 
// 	}
// 	else if(n>30){
// 		m = n/30 ;
// 		d = n-(y*30) ; 
// 	}
// 	// else{
// 	// 	d = n ; 
// 	// }
// 	cout<<y<<" years"<<endl;
// 	cout<<m<<" months"<<endl;
// 	cout<<d<<" days"<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,y,m,d;
// 	cin>>n;
// 	y = n/365 ; 
// 	n = n%365 ; 
// 	m = n/30 ;
// 	d = n%30 ; 
// 	cout<<y<<" years"<<endl;
// 	cout<<m<<" months"<<endl;
// 	cout<<d<<" days"<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a[4] = {1 , 2 , 1 , 3};
// 	int ct = 0 ; 
// 	for(int i=0 ; i<4 ; i++){ 
// 		int j;
// 		for(j=0 ; j<i ; j++){
// 			cout<<a[j]<<" ";
// 		}
// 	}
// 	//cout<<ct;
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int a,b,c;
// 	cin>>a>>b>>c;
// 	multiset<int> s ;
// 	s.insert(a) ; 
// 	s.insert(b) ; 
// 	s.insert(c) ; 
// 	for(auto it = s.begin() ; it != s.end() ; it++){
// 		cout<<*it<<endl;;
// 	}cout<<endl;
// 	cout<<a<<endl;
// 	cout<<b<<endl;
// 	cout<<c<<endl;
// }

//U. Float or int
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	double d ;
// 	cin>>d ;
// 	int absolute = abs(d) ; 
// 	if(d == absolute) cout<<"int "<<d<<endl;
// 	else{
// 		cout<<"float "<<absolute<<" "<<d-absolute<<endl;
// 	}
// }

//V. Comparison
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s ; 
// 	getline(cin,s);
// 	cout<<s<<endl;
// 	for(int i = 0 ; i<s.size()-1 ; i++){
// 		cout<<s[i]<<" ";
// 	}
// }


//Y. The last 2 digits
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b,c,d,e,f ;
// 	cin>>a>>b>>c>>d;
// 	int mul = a*b*c*d ;
// 	cout<<mul%100<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b;
// 	char c;
// 	cin>>a>>c>>b ; 
// 	if(c == '+') cout<<a+b<<endl;
// 	else if(c == '-') cout<<a-b<<endl;
// 	else if(c == '*') cout<<a*b<<endl;
// 	else cout<<a/b<<endl; 
// }

// Interval
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	float n ; 
// 	cin>>n;
// 	if(n>=0 && n<=25) cout<<"Interval [0,25]";
// 	else if(n>25 && n<=50) cout<<"Interval (25,50]";
// 	else if(n>50 && n<=75) cout<<"Interval (50,75]" ; 
// 	else if(n>75 && n<=100) cout<<"Interval (75,100]";
// 	else cout<<"Out of Intervals" ; 
// }

//V. Comparison
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int a,b;
// 	char c ;
// 	cin>>a>>c>>b ; 
// 	if(a>b && c == '>') cout<<"Right";
// 	else if(a<b && c == '<') cout<<"Right";
// 	else if(a==b && c == '=') cout<<"Right";
// 	else cout<<"Wrong";
// }

//W. Mathematical Expression
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b,c;
// 	char e,f ;
// 	cin>>a>>e>>b>>f>>c;
// 	switch(e){
// 		case '+' : if(a+b==c) cout<<"Yes";
// 				   else cout<<a+b ;
// 				   break ;

// 		case '-' : if(a-b==c) cout<<"Yes";
// 				   else cout<<a-b ;
// 				   break ;
// 		case '*' : if(a*b==c) cout<<"Yes";
// 				   else cout<<a*b ;
// 				   break ;
	
// 	}
// }


//X. Two intervals
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a,b,c,d;
// 	cin>>a>>b>>c>>d ;
// 	if(c>b) cout<<-1;
// 	else if(c<=b && d<=b) cout<<c<<" "<<d;
// 	else cout<<c<<" "<<b;
// }


// //Z. Hard Compare
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	long long int a,b,c,d,e,f ;
// 	cin>>a>>b>>c>>d;
// 	if(a>c && b>=d) cout<<"YES" ;
// 	else if(a<c && b>d) cout<<"YES";
// 	else cout<<"NO" ;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	long long a,b,c,d ;
// 	cin>>a>>b>>c>>d;
// 	double x = b * log10(a);
// 	double y = d * log10(c);
// 	cout<<((x>y) ? "YES" : "NO");
// }


//two intervals
#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b<c || d<a) cout<<"-1\n" ;
	else cout<<max(a,c)<<" "<<min(b,d) ;
}