// #include<bits/stdc++.h>
// using namespace std ;

// void print(map<string,string> &m){
// 	cout<<m.size()<<endl;
// 	for(auto &pr : m){
// 		cout<<pr.first<<" "<<pr.second<<endl;
// 	}
// }
// int main(){
// 	map<string,string> mp ;
	// mp[1] = "abc";     //O(log(n)) => n is the current size of map  
	// mp[5] = "Min";		//Insertion time depends on key too
	// mp[3] = "Yoongi";
	// mp.insert({8,"Urme"});
	// mp.insert(make_pair(4,"August"));
	//mp["abcd"] = "abcd" ; //s.size() * log(n) 
	//so,it's inserting time is not O(lon(n))

	//print(mp);
	//mp.clear();
	//print(mp) ;

	//let's see some functions of map
	//mp.find(3) ; //its find the element in the map and right now 
	//this will return the iterator of 3 so we can write in the form of bellow
	//auto it = mp.find(3);    //O(log(n))
	//if 3 value doesn't exist in the map , it will return the mp.end()
	//that means it will return the value of elements that is 
	//exist before last element
	// if(it == mp.end()) cout<<"No value" ;
	// else cout<<(*it).first<<" "<<(*it).second<<endl;

	//Now let's see about mp.erase() ; 
// 	mp.erase(3); //O(log(n)) //this function actually erases the values of map
// 	//erase() takes two types of input 1) directly key input
// 	//2)iterator input
// 	print(mp);
// //Let's put the iterator to the map
// 	auto it = mp.find(1);
// 	mp.erase(it) ; //it will erase the pointing point of it
// 	print(mp);

// 	auto it1 = mp.find(19) ; 
// 	if(it1 != mp.end());
// 		mp.erase(it);
// 	print(mp);
// 	mp.clear() ; //this function will clear the map,its even works on many ds
// 	print(mp) ; 

	//m[6] => consumes O(log(n)) times, if you don't
	//insert any value still it will consumes O(long(n)) time
	//because its already inserted into the map and 
	//by default its empty string

	//Its so good matter that in map all elements stored in sorted order
	//and all keys are unique

	//Using Iterator
	//map<int,string>:: iterator it ;
	// for(it = mp.begin() ; it!=mp.end() ; it++){
	// 	//cout<<(*it).first<<" "<<(*it).second<<endl ;
	// 	cout<<it->first<<" "<<it->second<<endl;
	// }cout<<endl;


	//Using auto keyword
	// for(auto &pr : mp){   //directly using reference
	// 	cout<<pr.first<<" "<<pr.second<<endl;
	// }
//} 

/*Given N strings,print unique strings
in lexiographical order with their frequency
N <= 10^5
|S| <= 100
*/
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	map<string,int> m;
// 	int n;
// 	scanf("%d",&n) ;
// 	while(n--){
// 		string s;
// 		cin>>s; 
// 		//scanf("%s",&s) ;
// 		//m[s] = m[s] + 1 ;   Or
// 		m[s]++;
// 	}
// 	for(auto x : m){
// 		cout<<x.first<<" "<<x.second<<endl;
// 	}
// }

///////////////////////////////////////////////////////////////
//Unordered_map
//3 difference between maps and unordered_maps
//1. Inbuilt implementation  -> it use the hash table,it doesn't use trees like map
//2.time complexity
//3.valid keys datatype
//all other functions are same
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	unordered_map<int , string> mp;
// 	mp[1] = "Min";     //average time complexity O(1)
// 	mp[2] = "Yoongi";
// 	mp[3] = "Suga";
// 	mp[4] = "August";
// 	mp[7] = "Urme" ;
// 	for(auto x : mp){
// 		cout<<x.first<<" "<<x.second<<endl;
// 	}
// 	auto it = mp.find(7);
// 	if(it != mp.end()){
// 		mp.erase(it);
// 	}
// 	for(auto x : mp){
// 		cout<<x.first<<" "<<x.second<<endl;
// 	}
// }

/*Given N strings and Q queries.
In each query you are given a string
print frequecy of that string

N<=10^6
|S| <= 100
Q<= 10^6
*/
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	unordered_map<string ,int> mp;
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		string s;
// 		cin>>s;
// 		mp[s]++;
// 	}
// 	int q ;
// 	cin>>q ;
// 	while(q--){
// 		string s;
// 		cin>>s;
// 		cout<<mp[s]<<endl;
// 	}

// }


////////////////////////////////////////////////////
//Multimap -> is use to store duplicate values