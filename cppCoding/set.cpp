// #include<bits/stdc++.h>
// using namespace std ;
// //maps stores the key and values pair
// //set is the collection of some elements
// //it mainly stores the key only

// void print(set<string> &s){
// 	cout<<"With ranged based loop : " ;
// 	for(string value : s){  // ranged based loop
// 		cout<<value<<endl;
// 	}cout<<"With iterator : "<<endl;
// 	for(auto it = s.begin() ; it!=s.end() ; it++){
// 		cout<<(*it)<<endl;
// 	}
// }
// int main(){

// 	//set stores the unique element like map
// 	set<string> s ;
// 	s.insert("abc");  //logn
// 	s.insert("bcd") ;
// 	s.insert("cde");
// 	auto it = s.find("abc") ; //this will return the iterator of that iterator
// 	//print(s) ; 
// 	// if(it != s.end()){
// 	// 	//cout<<*it<<endl;
// 	// 	s.erase(it) ; 
// 	// }
// 	//erase() function can take two values either iterator
// 	//or direct value
// 	s.erase("abc") ;
// 	print(s) ; 
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	//empty set container
// 	set<int> s;
// 	//List of elements
// 	int arr[] = {40 , 20 , 60 , 30 , 50 , 50 , 10};

// 	//Insert the elements of the list
// 	//to the set
// 	for(int i=0 ; i<7 ; i++){
// 		s.insert(arr[i]) ;
// 	}

// 	cout<<"The elements in the set are : \n";
// 	for(auto it = s.begin() ; it!=s.end() ; it++){
// 		cout<<*it<<" ";
// 	}cout<<endl;
// 	//check if 50 is present in the set
// 	if(s.find(50) != s.end()) {
// 		cout<<"YES"<<endl;
// 	}
// 	else{
// 		cout<<"NO"<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	unordered_set<string> s;
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		string str;
// 		cin>>str;
// 		s.insert(str);  //O(1)
// 	}int q ;
// 	cin>>q ; 
// 	while(q--){
// 		string str ;
// 		cin>>str ;
// 		if(s.find(str) == s.end()){ //if s.find(str) == s.end() means value is not present
// 			//on the other it would have it's iterator
// 			cout<<"NO\n";
// 		}else cout<<"YES\n";
// 	}

// }

//Multiset
#include<bits/stdc++.h>
using namespace std ;
void print(multiset<string> &s){
	for(string value : s){
		cout<<value<<" ";
	}cout<<endl;
}
int main(){
	multiset<string> s;  // allow us to insert multiple values
	int n;
	cin>>n;
	while(n--){
		string str ;
		cin>>str;
		s.insert(str) ; // O(logn)
	}
	// auto it = s.find("abc") ; //here find returns the iterator of first value
	// if(it != s.end()){ //if the condition true , means it's not return the end value
	// 	s.erase(it) ;
	// }
	s.erase("abc") ;
	print(s) ;
}