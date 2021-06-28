//iterator basically structure like pointer
//pointer point the any address of memory
//if we want the value of that address
//we use the * operator in order to having value
//So,iterator point the element of containers

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
	// int n ;
	// cin>>n;
	// vector<int> v;
	// while(n--){
	// 	int x;
	// 	cin>>x ;
	// 	v.push_back(x) ;
	// }
	// // vector<int> :: iterator it = v.begin() ;
	// // cout<<*it<<endl;
	// // cout<<(*(it+1))<<endl;
	// vector<int> :: iterator it ;
	// for(it = v.begin() ; it != v.end() ; it++){
	// 	cout<<*it<<" ";
	// }cout<<endl;


	//How to access to the vector pairs using iterator
	//vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
	//vector<pair<int,int>> :: iterator it ; //declaration of iterator in pair case of container
	// for(it = v_p.begin() ; it != v_p.end() ; it++){
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;  //(*it) is a pair
	// }

	//Another syntax of writing 
	// for(it = v_p.begin() ; it != v_p.end() ; it++){
	// 	cout<<(it->first)<<" "<<(it->second)<<endl;  //(it->first) and (it->second) are also pointing the pair
		//and they will access to the value
	//}
	//basically (*it).first <=> (it->first) 
	//and we can use both of them
//


//RANGE Based Loop
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	vector<int> v = {1,3,5,3,6,7};
// 	for(int value : v){  //when we take range based loop
// 		//values are basically coppied of actual element
// 		cout<<value<<" ";
// 	}cout<<endl;

// 	//so we will use reference so that we get the 
// 	//actual values
// 	for(int &value : v){
// 		value++;
// 		cout<<value<<" ";
// 	}
// }

//Let's try RANGED Based Loop for pair
#include<bits/stdc++.h>
using namespace std ; 
int main(){
	vector<pair<int,int>> v = {{1,3},{2,3},{4,5}};
	for(pair<int,int> &value : v){
		cout<<value.first<<" "<<value.second<<endl;
	}cout<<endl;

	auto a = 1.0 ;   //auto keyword dynamically determines the data type of variables
	cout<<a<<endl;


	for(auto &value : v){
		cout<<value.first<<" "<<value.second<<endl;
	}
	//for(auto it = v.begin() ; it != v.end() ; it++)
}