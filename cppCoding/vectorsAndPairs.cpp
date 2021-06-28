// Apna College
#include<bits/stdc++.h>
using namespace std ; 
int main(){
	vector<int> v;
	v.push_back(1) ; 
	v.push_back(2) ;
	v.push_back(3);

	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}cout<<endl;


	//using iterator ;
	vector<int>::iterator it ; //declaring iterator
	// it is a pointer
	cout<<"\nPrinting via iterator : "<<endl ;
	for(it = v.begin() ; it != v.end() ; it++){
		cout<<*it<<" ";
	}cout<<endl;


	//    "auto" Keyword : he auto keyword is simply asking the compiler
	// to deduce the type of the variable from the initialization
	//The auto keyword simply allows you to take advantage of this knowledge - 
	//if you (compiler) know the right type, just choose for me 

	cout<<"\nPrinting via auto keyword : \n";
	for(auto element : v){
		cout<<element<<" " ; //here element is not an iterator , its basically signifies the values of elements of our vector
	}


}