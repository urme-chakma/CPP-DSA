#include<bits/stdc++.h>
using namespace std ; 
int main(){
	// let's declare a pair 
	//Pair is class of c++ stl that stores two values
	// cout<<"Pair is basically used to maintained the relationship between two object"<<endl;
	// pair<int,string> p ; 

	// //How to initialize values in pair
	// //there are two ways putting values in pair
	// //one is make_pair(int,string) for this exaple
	// p = make_pair(1,"Suga");



	// //Another way of initialising pair
	// p = {2,"Urme"} ;

	// // let's copy that pair
	// pair<int,string> p1 = p ;

	// //let's see how to print it
	// //cout<<"This is first value "<<p.first<<" and next one is second value of that pair "<<p.second<<endl;
	// cout<<"This is the value of original element"<<endl;
	// cout<<p.first<<" "<<p.second<<endl;
	// cout<<"This is the value of copy"<<endl;
	// cout<<p1.first<<" "<<p1.second<<endl;
	// p1.first = 4;
	// cout<<"This is the value after changing our p1's first value"<<endl;
	// cout<<p1.first<<" "<<p1.second<<endl;

	// //Now let's use a reference 
	// pair<int,string> &p3 = p ;   //with "&" we will refer a pair
	// cout<<"This is our reference value befor change"<<endl;
	// cout<<p.first<<" "<<p.second<<endl;
	// p.second = "Suga";
	// cout<<"This is our reference value after change"<<endl;
	// cout<<p.first<<" "<<p.second<<endl;

	// pair<string,string> pp;
	// pp = {"Min Yoongi" , "Urme Chakma"};
	// cout<<"1."<<pp.first<<" "<<"1."<<pp.second<<endl;



	//pair is mainly used to maintain the relationship 
	//between two object
	// int a[] = {1,2,3};
	// int b[] = {2,3,4};
	// //let's declare the array of a pair
	// pair<int,int> p_array[3] ;
	// for(int i=0 ; i<3 ; i++){
	// 	p_array[i] = make_pair(a[i],b[i]) ;
	// }
	// swap(p_array[0],p_array[2]);
	// for(int i=0 ; i<3 ; i++){
	// 	cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	// }

	//How to take input in pair
	pair<int,string> p;
	cin>>p.first>>p.second;
	cout<<p.first<<" "<<p.second<<endl;
}