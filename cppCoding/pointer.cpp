// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a;
// 	cin>>a ;
// 	int *p = &a ;
// 	cout<<*p<<endl ;
// 	cout<<&p<<endl ;

// 	int b ;
// 	cin>>b;
// 	int *c = &b ;
// 	cout<<&c<<endl ;
// 	cout<<*c<<endl ;
// }

// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
// 	int n;
// 	cin>>n ;
// 	int *l = &n ;
// 	cout<<&l<<" "<<*l<<endl ; 
// 	vector<int> v(n) ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i] ; 
// 	}

// 	int *p[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		p[i] = &v[i] ;
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		cout<<*p[i]<<" "<<&p[i]<<endl;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// void print(int *p){
// 	cout<<*p<<endl;
// }
// int main(){
// 	int n;
// 	cin>>n; 
// 	int *p = &n ; 
// 	//cout<<*p<<endl;
// 	print(p);
// }



// #include<bits/stdc++.h>
// using namespace std ;
// void print(int *p[] , int n){
// 	//cout<<*p<<" -----> "<<&p<<endl;
// 	for(int i=0 ; i<n ; i++){
// 		cout<<*p[i]<<" "<<&p[i]<<endl ;
// 	}
// }
// int main(){
// 	int n;
// 	cin>>n ;
// 	vector<int> v(n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i] ; 
// 	}
// 	int *p[n] ;//= &n ; 
// 	//print(p) ;
// 	for(int i=0 ; i<n ; i++){
// 		p[i] = &v[i] ; 
// 	}
// 	print(p,n);

// 	// for(int i=0 ; i<n ; i++){
// 	// 	cout<<*p[i]<<" "<<&p[i]<<endl ;
// 	// }
// }

// #include<bits/stdc++.h>
// using namespace std ;

// void printSum(int *p[] , int n){
// 	int sum = 0 ;
// 	for(int i=0 ; i<n ; i++){
// 		sum += *p[i];
// 	}
// 	cout<<sum<<endl ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> v(n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i] ; 
// 	}

// 	int *p[n] ;
// 	//vector<int> *p(n) ; 
// 	for(int i = 0 ; i<n ; i++){
// 		p[i] = &v[i] ;
// 	}

// 	printSum(p,n);
// }

// #include<bits/stdc++.h>
// using namespace std ;
// void print(int *a,int *b){
// 	cout<<*a<<" "<<*b<<endl;
// }
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	int *pa = &a , *pb = &b ;
// 	print(pa,pb) ;
// }


// void update(int *a,int *b) {
//     // Complete this function 
//     //int pa = &a ;
//     //int pb = &b ; 
//    int sum = *a + *b ;
//    int absolute_val = abs((*a) - (*b)) ;
//    cout<<sum<<"\n"<<absolute_val<<endl;
// }
// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//    // printf("%d\n%d", a, b);

//     //cout<<&pa<<" "<<&pb<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,q,k;
// 	cin>>n>>q ;
// 	//vector<int> v[n][k] ;
// 	int a[n][k] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>k ;
// 		for(int j=0 ; j<k ; j++){
// 			cin>>a[i][j] ;
// 		}
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		for(int j=0 ; j<k ; j++){
// 			cout<<a[i][j]<<" ";
// 		}cout<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n,q,k;
// 	cin>>n>>q ;
// 	int a[n][k] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>k;
// 		for(int j=0 ; j<k ; j++){
// 			cin>>a[i][j];
// 		}
// 	}
// }


// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	int *n_p = &n ;  //*n_p will store the address of n integer
// 	cout<<n_p<<endl;
// 	cout<<n_p<<" "<<*n_p+1<<endl ;


// 	int a[10] ;
// 	cout<<a<<endl;
// 	cout<<&a[0]<<endl ;
// 	cout<<&a[0+1]<<endl;
// 	cout<<&a[0+2]<<endl;


// 	int **pp  ;// *pp is a integer pointer //**pp is a pointer of integer pointer//pointer of pointer
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n ;
// 	cin>>n;
// 	int *n_p = &n ;
// 	cout<<n_p<<endl;
// 	int **np = &n_p ;
// 	cout<<*np<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int x = 4 ;
// 	int *p_x = &x ;
// 	cout<<"addr x : "<<&x<<endl;  //its a address of byte[1 byte = 8 bits]
// 	cout<<"value of p_x : "<<p_x<<endl;
// 	cout<<"value at : "<<*p_x<<endl;
// 	*p_x = 5 ;
// 	cout<<"value at : "<<*p_x<<endl;
// 	cout<<x<<endl;
// 	cout<<"p-x + 1 : "<<p_x+1<<endl;
// 	int **p_p_x = &p_x ;
// 	cout<<"addr of p_x : "<<&p_x<<endl;
// 	cout<<"value of **p_p_x : "<<p_p_x<<endl;
// 	cout<<"val of *p_p_x : "<<*p_p_x<<endl;
// 	cout<<**p_p_x<<endl;
// 	**p_p_x = 7;
// 	cout<<x<<endl;
// }

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,q,k,i,j ;
	cin>>n>>q ;
	vector<vector<int> > a(n) ;  //2d vector 
	for(int i=0 ; i<n ; i++){
		cin>>k;
		a[i].resize(k) ;
		for(int j=0 ; j<k ; j++){
			cin>>a[i][j] ;
		}
	}

	while(q--){
		cin>>i>>j;
		cout<<a[i][j]<<endl;
	}
}