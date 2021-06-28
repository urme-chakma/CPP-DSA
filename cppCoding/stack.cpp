// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	stack<int> s;
// 	s.push(1);
// 	s.push(2);
// 	s.push(3) ; 
// 	s.push(4) ; 
// 	s.push(5) ; 
// 	while(!s.empty()){   //while stack is not empty
// 		cout<<s.top()<<" " ;
// 		s.pop() ; 
// 	}
// }


//Next Greater Element brute force
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	vector<int> v ;
// 	for(int i=0 ; i<n ; i++){
// 		int h = 0 ;
// 		for(int j=i+1 ; j<n ; j++){     //O(n*n)
// 			if(a[i]<a[j]){
// 				v.push_back(a[j]) ;
// 				h = 1 ;
// 				break ;
// 			}
// 		}//cout<<h<<endl;
// 		if(h==0){
// 			v.push_back(-1) ;
// 		}
// 	}
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<a[i]<<"  "<<v[i]<<endl;
// 	}
// 	//Yeah I did It by myself
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> v(n) ;
// 	stack<int> st ;
// 	for(int i=0 ; i<n ; i++){
// 		int x;
// 		cin>>x;
// 		if(x>st.top()){
// 			v.push_back(st.top()) ;
// 			st.pop() ; 
// 			st.push(x) ; 
// 		}
// 		st.push(x) ; 
// 	}

// }




// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}
// 	stack<int> st ;
// 	vector<int> v;
// 	for(int i=0 ; i<n ; i++){
// 		if(st.empty()){
// 			st.push(a[i]) ; 
// 		}
// 		if(a[i] > st.top()){
// 			v.push_back((a[i])) ; 
// 			st.pop() ; 
// 			st.push(a[i]) ;
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
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	stack<int> st ;
// 	for(int i=0 ; i<n ; i++){
// 		if(st.empty()){
// 			st.push(a[i]);
// 			cout<<st.top()<<endl ; 
// 		}
// 		st.pop();
// 		st.push(a[i]) ;
// 		cout<<st.top()<<endl;
// 	}
// 	// for(int i=0 ; i<n ; i++){
// 	// 	st.push(a[i]) ; 
// 	// }
// 	while(!st.empty()){
// 		cout<<st.top()<<endl; 
// 		st.pop() ; 
// 	}
// }

// A Stack based C++ program to find next
// greater element for all array elements
// // in same order as input.
// #include<bits/stdc++.h>
// using namespace std ;
// void printNGE(int a[],int n){
	
// 	stack<int> st ;
// 	vector<int> v ;
// 	for(int i=n-1 ; i>0 ; i--){
// 		while(!st.empty() && st.top() <= a[i]){
// 			st.pop() ;
// 		}
// 		if(st.empty()){
// 			v[i] = -1 ;
// 		}else{
// 			v[i] = st.top() ; 
// 		}
// 		st.push(a[i]) ;
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" "<<v[i]<<endl;
// 	}

// } 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	printNGE(a,n) ; 
// }



// A Stack based C++ program to find next
// greater element for all array elements
// in same order as input.
// #include <bits/stdc++.h>
// using namespace std;

// /* prints element and NGE pair for all
// elements of arr[] of size n */
// void printNGE(int arr[], int n)
// {
// 	stack<int> s;

// 	std::vector<int> v(n);

// 	// iterating from n-1 to 0
// 	for (int i = n - 1; i >= 0; i--)
// 	{
// 		/*We will pop till we get the
// 		greater element on top or stack gets empty*/
// 		while (!s.empty() && s.top() <= arr[i])
// 			s.pop();

// 		if stack gots empty means there
// 		is no element on right which is greater
// 		than the current element.
// 		if not empty then the next greater
// 		element is on top of stack
// 		if (s.empty())
// 			v[i] = -1;		
// 		else
// 			v[i] = s.top();	

// 		s.push(arr[i]);
// 	}

// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ---> " << v[i] << endl;
// }

// /* Driver program to test above functions */
// int main()
// {
// 	// int arr[] = { 11, 13, 21, 3 };
// // 	// int n = sizeof(arr) / sizeof(arr[0]);
// // 	int n ;
// // 	cin>>n;
// // 	int arr[n] ;
// // 	for(int i=0 ; i<n ; i++){
// // 		cin>>arr[i] ; 
// // 	}
// // 	printNGE(arr, n);
// // 	return 0;
// // }


//Next Greater Element
// #include<bits/stdc++.h>
// using namespace std ; 

// vector<int> NGE(vector<int> v){
// 	vector<int> nge(v.size());
// 	stack<int> st ; 
// 	int n = v.size() ; 
// 	for(int i=0 ; i<n ; i++){
// 		while(!st.empty() && v[st.top()] < v[i]){
// 			nge[st.top()] = i ; 
// 			st.pop() ;
// 		}
// 		st.push(i) ; 
// 	}
// 	while(!st.empty()){
// 		nge[st.top()] = -1 ;
// 		st.pop() ; 
// 	}
// 	return nge ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> v(n) ;  
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i] ; 
// 	}

// 	vector<int> nge = NGE(v) ;
// 	for(int i=0 ; i<n ; i++){
// 		cout<<v[i]<<" "<<(nge[i] == -1 ? -1 : v[nge[i]])<<endl ; 
// 	}
// }



//Another method next greater element
#include<bits/stdc++.h>
using namespace std ;

void printNGE(vector<int> v){
	int n = v.size() ; 
	vector<int> gv(n) ;
	stack<int> st ;
	for(int i=n-1 ; i>=0 ; i--){
		while(!st.empty() && st.top()<=v[i]){
			st.pop() ; 
		}
		if(st.empty()) {
			gv[i] = -1 ;
		}
		else{
			gv[i] = st.top() ;
		}
		st.push(v[i]) ; 
	}

	for(int i=0 ; i<n ; i++){
		cout<<v[i]<<" "<<gv[i]<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> v(n) ;
	for(int i=0 ; i<n ; i++){
		cin>>v[i] ; 
	}
	printNGE(v) ; 
}
