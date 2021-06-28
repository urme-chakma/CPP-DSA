// #include<bits/stdc++.h>
// using namespace std ;
// bool should_i_swap(int a,int b){
// 	if(a<b) return true ;
// }
// bool should_i_swap_pair(pair<int,int> a , pair<int,int> b){
// 	if(a<b) return true ;
// }

// bool should_i_swap_pair2(pair<int,int> a, pair<int,int>b){
// 	if(a.first != b.first){
// 		if(a.first > b.first) return true ;
// 		else return false ;
// 	}
// 	else{
// 		if(a.second < b.second) return true ;
// 		else return false ;
// 	}
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<pair<int,int> > a(n) ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i].first>>a[i].second ;
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			if(should_i_swap_pair2(a[i] , a[j])){
// 				swap(a[i] , a[j]) ; 
// 			}
// 		}
// 	}
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i].first<<" "<<a[i].second<<endl;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ; 

// bool should_i_swap(pair<int,int>a,pair<int,int>b){
// 	if(a>b) return true ;
// 	else return false ;
// }

// bool should_i_swap(pair<int,int>a , pair<int,int>b){
// 	if(a.first != b.first){
// 		if(a.first > b.first) return true ;
// 		return false ;
// 	}else{
// 		if(a.second < b.second) return true ;
// 		return false ;
// 	}

// }
// int main(){
// 	int n;
// 	cin>>n ;
// 	vector<pair<int,int>> a(n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i].first>>a[i].second ;
// 	}
// 	//sort(a.begin() , a.end()) ;

// 	for(int i=0 ; i<n ; i++){
// 		for(int j=0+1 ; j<n ; j++){
// 			if(should_i_swap(a[i] , a[j])){
// 				swap(a[i],a[j]) ;
// 			}
// 		}
// 	}
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i].first<<" "<<a[i].second<<endl;
// 	}
// }


#include<bits/stdc++.h>
using namespace std ;
bool should_i_swap(int a,int b){  //decreasing order
	if(a<b) return true ;
	return false;
}

bool should_i_swap2(int a,int b){ //increasing order
	if(a>b) return true ;
	else return false ; 
}

bool should_i_swap_pair(pair<int,int> a , pair<int,int> b){   //decreasing order
	if(a<b) return true;
	return false ;
}

bool should_i_swap_pair2(pair<int,int>a , pair<int,int>b){  //increasing order
	if(a>b) return true ;
	return false  ;
}

bool should_i_swap_pair3(pair<int,int> a , pair<int,int> b){    //increasing order
	if(a.first != b.first){
		if(a.first > b.first) return true ;
		else return false ;
	}else{
		if(a.second < b.second) return true ;
		return false ; 
	}
}

bool cmp(pair<int,int> a , pair<int,int> b){
	if(a.first != b.first){
		if(a.first > b.first) return false ;
		else return true ;
	}else{
		if(a.second < b.second) return false ;
		else return true ; 
	}
}


bool cmp2(pair<int,int> a, pair<int,int> b){
	if(a.first != b.first){
		return a.first<b.first ; 
	}
	return a.second>b.second;
}

bool cmp3(pair<int,int>a,pair<int,int>b){
	if(a.first != b.first){
		return a.first>b.first ;
	}
	return a.second<b.second ;
}

bool cmp4(pair<int,int>a , pair<int,int>b){
	return a>b ;
}
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> v(n) ;
	for(int i=0 ; i<n ; i++){
		cin>>v[i].first>>v[i].second ;
	}
	// for(int i=0 ; i<n ; i++){
	// 	for(int j=i+1 ; j<n ; j++){
	// 		if(should_i_swap_pair3(v[i],v[j])){
	// 			swap(v[i] , v[j]);
	// 		}
	// 	}
	// }

	sort(v.begin() , v.end() , cmp3) ; 

	for(int i=0 ; i<n ; i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}
