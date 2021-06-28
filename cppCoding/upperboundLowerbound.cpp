// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}

// 	sort(a,a+n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}cout<<endl;
// 	// int *ptr = lower_bound(a,a+n,26) ;
// 	// if(ptr == a+n) {
// 	// 	cout<<"Not found" ;
// 	// 	return 0 ; 
// 	// }

// 	int *ptr = upper_bound(a , a+n , 8) ;
// 	if(ptr == a+n) {
// 		cout<<"Not found" ;
// 		return 0 ;
// 	}
// 	cout<<*ptr<<endl;
// }


// for vector
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> v(n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i] ; 
// 	}
// 	sort(v.begin() , v.end()) ;
// 	auto it = upper_bound(v.begin() , v.end() , 25) ;
// 	if(it == v.end()) {
// 		cout<<"Not Found" ;
// 		return 0; 
// 	}
// 	cout<<(*it)<<endl;
// }

//for set 
// #include<bits/stdc++.h>
// using namespace std  ;
// int main(){
// 	int n;
// 	cin>>n;
// 	set<int> s ;
// 	for(int i=0 ; i<n ; i++){
// 		int x ;
// 		cin>>x;
// 		s.insert(x) ; 
// 	}
// }

//int set random integer
#include<bits/stdc++.h>
using namespace std ;
int main(){
	set<int> s ;
	for(int i=0 ; i<(int)(1e6) ; i++){
		s.insert(rand()) ;
	}

	for(int i=0 ; i<(int)(1e5) ; i++){
		auto it = s.lower_bound(rand()) ;
	}
	//cout<<(*it)<<endl;
}
