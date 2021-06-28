//Vectors are same as dynamic
// arrays with the ability to
// resize itself automatically
// when an element is inserted

// A vector is a sequence container
// class that implements dynamic array,
// means size automatically changes when
// appending elements

#include<bits/stdc++.h>
using namespace std ;
//let's see how to print vector
void printVec(vector<string> &string_vector){
	cout<<"size of vector : "<<string_vector.size()<<endl;
	//v.size() = O(1) ;
	for(int i=0 ; i<string_vector.size() ; i++){
		cout<<string_vector[i]<<" ";
	}
	//v.push_back(11);
	cout<<endl;
}
//We always should pass the reference
//of a vector not a copy 
//cause copy is an expensive method
//which complexity is O(n) on the other
//hand reference take only O(1)

// int main(){
// 	vector<int> v;
// 	int n;
// 	cin>>n;
// 	while(n--){
// 		int x;
// 		cin>>x;
// 		v.push_back(x) ;    // this will append the x value at the end of the vector
// 		//push_back() time complexity is O(N)
// 	}
// 	printVec(v);
// 	v.pop_back() ; // erase the last element of the vector
// 	//pop_back() time complexity O(1)
// 	printVec(v) ; 

// 	//We can directly copy a vector
// 	vector<int> v2 = v ;  //O(n)// copying v vector in v2 
// 	v2.push_back(8) ;
// 	printVec(v2) ;
// }

//let's try vector for string
#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	vector<string> string_vector ;
	while(n--){
		string s;
		cin>>s;
		string_vector.push_back(s) ;
	}
	printVec(string_vector) ;
}