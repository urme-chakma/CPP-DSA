// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}
// 	vector<int> v;
// 	for(int i=0 ; i<n ; i++){
// 		int next = -1 ; 
// 		for(int j=i+1 ; j<n ; j++){
// 			if(a[i]<a[j]){
// 				next = a[j] ;
// 				v.push_back(next) ; 
// 				break ;
// 			} 
// 			v.push_back(next);
// 		}
// 	}
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<v[i]<<" ";
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	stack<int> st ;
// 	while(n--){
// 		int x;
// 		cin>>x ;
// 		st.push(x) ;
// 	}

// 	while(!st.empty()){
// 		cout<<st.top()<<" " ;
// 		st.pop() ;     //last in first out
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	string s;
// 	cin>>s;
// 	int bal = 0 ;
// 	for(int i=0 ; i!= '0'; i++){
// 		if((s[i] == '(') || s[i] == '{' || s[i] == '[' ){
// 			cout<<s[i]<<" ";
// 			bal++ ; 
// 		}
// 		else {
// 			cout<<s[i]<<" ";
// 			bal--;
// 		}
// 	}
// 	if(bal == 0) cout<<"balanced"<<endl;
// 	else cout<<"Not bal"<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	vector<char> v;
// 	char s;
// 	cin>>s;
// 	v.push_back(s) ; 
// 	for(auto &x : v){
// 		cout<<x<<" ";
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std;
// unordered_map<char,int> mp = {{'[',-3} , {'{',-2} , {'(' , -1} , {']',3} , {'}',2} , {')' , 1}};
// string isBalanced(string s){
// 	stack<char> st ; 
// 	for(char x : s){
		
// 		if(mp[x] < 0){
// 			st.push(x) ;
// 		}
// 		else{
// 			if(st.empty()) return "NO"; 
// 			char c = st.top() ;
// 			st.pop() ;
// 			if(mp[x] + mp[c] != 0) return "NO" ;
// 		}
// 	}
// 	if(st.empty()) cout<<"YES"<<endl;
// 	else cout<<"NO"<<endl;
// }
// int main(){
// 	string s;
// 	cin>>s;
// 	cout<<isBalanced(s) ; 
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s ;
// 	cin>>s;
// 	stack<char> st ;
// 	for(char &x : s){
// 		st.push(x) ; 
// 	}
// 	s.clear() ; 
// 	while(!st.empty()){
// 		s.push_back(st.top());
// 		st.pop();
// 	}
// 	cout<<s<<endl;
// }