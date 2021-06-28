// #include<bits/stdc++.h>
// using namespace std ;
// void printVec(vector<pair<int,int>> &v){
// 	cout<<"Size : "<<v.size()<<endl;
// 	for(int i=0 ; i<v.size();i++){
// 		cout<<v[i].first<<" "<<v[i].second<<endl;
// 	}
// }

// void printVector(vector<int> &v){
// 	cout<<"Size : "<<v.size()<<endl;
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<v[i]<<" " ;
// 	}cout<<endl;
// }


//Pairs of vector 
// int main(){
// 	vector< pair<int,int> > v;
// 	printVec(v) ;
// 	int n ;
// 	cin>>n;
// 	while(n--){
// 		int x,y;
// 		cin>>x>>y;
// 		//v.push_back(make_pair(x,y));
// 		v.push_back({x,y});
// 	}
// 	printVec(v) ; 
// }


//Array of vector
// int main(){
// 	int N;
// 	cin>>N;
// 	vector<int> v[N]; //Array of N numbers vector
// 	for(int i=0 ; i<N ; i++){
// 		int n;
// 		cin>>n;
// 		while(n--){
// 			int x ; 
// 			cin>>x ;
// 			v[i].push_back(x) ; 
// 		}
// 	}
// 	for(int i=0 ; i<N ; i++){
// 		printVector(v[i]) ;
// 	}

// 


//  18 / 04/ 2021
#include<bits/stdc++.h>
using namespace std ;
void printVec(vector<pair<int,int>> &v){
	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i].first<<" "<<v[i].second<<endl; 
	}
} 

void printVector(vector<int> &v){
	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}cout<<endl;
}
// int main(){
// 	vector<pair<int,int>> v = {{2,3},{3,4},{4,5}};
// 	printVec(v) ; 
// }


//Array of Vectors
// int main(){
// 	int N;
// 	cin>>N;
// 	vector<int> v[N] ; 
// 	for(int i=0 ; i<N ; i++){
// 		int n;
// 		cin>>n;
// 		for(int j=0 ; j<n ; j++){
// 			int x ;
// 			cin>>x ;
// 			v[i].push_back(x) ;
// 		}
// 	}
// 	for(int i=0 ; i<N ; i++){
// 		printVector(v[i]) ; 
// 	}
// }

//Vectors of vectors
int main(){
	int N;
	cin>>N;
	//declaration of vector of vector
	vector<vector<int>> v ; // v is storing another vector in it
	for(int i=0 ; i<N ; i++){
		int n;
		cin>>n; //size o array 
		//let's take a temporary vector 
		//where we will put our values of n 
		//size vector
		vector<int> temp ; // declaring a temporary vector
		for(int i=0 ; i<n ; i++){ //this loop is taking input a row
			int x ;
			cin>>x ;
			temp.push_back(x) ;
		}
		v.push_back(temp) ;//putting temp vector into v vector
		//thus way we take the input of 
		//vectors of vectors
	}
	for(int i=0 ; i<v.size() ; i++){
		printVector(v[i]) ;
	}
}