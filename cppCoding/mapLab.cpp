// // Check if two arrays are equal or not
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n ;
// 	vector<int> v1 , v2;
// 	for(int i=0 ; i<n ; i++){
// 		int x ;
// 		cin>>x ;
// 		v1.push_back(x);
// 	}
// 	for(int i=0 ; i<n ; i++){
// 		int x;
// 		cin>>x ;
// 		v2.push_back(x) ;
// 	}
// 	for(int i = 0 ; i<n ; i++){
// 		cout<<v1[i]<<" ";
// 	}cout<<endl;

// 	for(int i = 0 ; i<n ; i++){
// 		cout<<v2[i]<<" ";
// 	}cout<<endl;
// }

// #include<iostream>
// #include<map>
// using namespace std;

// int main()  {
//     // YOUR CODE GOES HERE
//     // Please take input and print output to standard input/output (stdin/stdout)
//     // E.g. 'cin' for input & 'cout' for output
//     int n;
//     cin>>n;
//     map<int,int> mp;
//     int x ;
//     while(cin>>n>>x){
//         switch(n){
//         	case 1 : cin>>n ; mp[x] += n ; break;
//         	case 2 : mp.erase(x) ; break;
//         	case 3 : cout<<mp[x]<<endl ;
//         }
        	
//     }
    
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std ;
// //#define ll long long
// int main(){
// 	long long n;
// 	cin>>n;
// 	vector<long long> v;
// 	vector<long long> b;
// 	for(int i=0 ; i<n ; i++){
// 		int x;
// 		cin>>x;
// 		v.push_back(x) ;
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		int x;
// 		cin>>x;
// 		b.push_back(x) ;
// 	}
// 	unordered_map<int,int> mp;
// 	//unordered_map<int,int>mb;
// 	for(int i = 0 ; i<n ; i++){
// 		mp[v[i]]++;
// 		//mb[b[i]]++;
// 	}
// 	int flag = 1;
// 	for(int i=0 ; i<n ; i++){
// 		if(mp.find(b[i]) == mp.end()){
// 			flag = 0 ;
// 		}
// 		if(mp[b[i]] == 0){
// 			flag = 0 ;
// 		}
// 		//else flag = 1 ; 
// 	}
// 	cout<<flag<<endl;

// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		long long n;
// 		cin>>n;
// 		vector<long long> a,b;
// 		for(int i=0 ; i<n ; i++){
// 			int x ;
// 			cin>>x;
// 			a.push_back(x) ;
// 		}
// 		for(int i=0 ; i<n ; i++){
// 			int x;
// 			cin>>x ; 
// 			b.push_back(x) ; 
// 		}
// 		unordered_map<long long , long long> mp ;
// 		for(int i=0 ; i<n ; i++){
// 			mp[a[i]]++ ;
// 		}
// 		int flag = 1 ;
// 		for(int i=0 ; i<n ; i++){
// 			if( mp.find(b[i]) == mp.end() ){
// 				flag = 0 ;
// 			}
// 			if( mp[b[i]] == 0 ){
// 				flag = 0 ;
// 			}
// 			mp[b[i]]--;
// 		}
// 		cout<<flag<<endl;
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		vector<long long> a , b;
// 		for(int i=0 ; i<n ; i++){
// 			int x ; 
// 			cin>>x;
// 			a.push_back(x) ; 
// 		}
// 		for(int i=0 ; i<n ; i++){
// 			int x;
// 			cin>>x;
// 			b.push_back(x) ;
// 		}
// 		unordered_map<long long,long long> mp ;
// 		for(int i=0 ; i<n ; i++){
// 			mp[a[i]]++ ;
// 		}
// 		for(int i=0 ; i<n ; i++){
// 			mp[b[i]]-- ;
// 		}
// 		int flag = 1 ; 
// 		for(auto it = mp.begin() ; it!=mp.end() ; it++){
// 			if(it->second != 0){
// 				flag = 0 ;
// 			}
// 		}
// 		// for(auto x : mp){
// 		// 	if(x.second != 0){
// 		// 		flag = 0 ;
// 		// 	}
// 		// }
// 		cout<<flag<<endl;
// 	}
// }



//2. Max distance between same elements 
//https://practice.geeksforgeeks.org/problems/max-distance-between-same-elements/1/?track=ppc-hashing&batchId=221
//Brute force
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}
// 	int mxd = INT_MIN ;

// 	if(n==1) mxd = 0 ;
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			int d = 0;
// 			if(a[i] == a[j]){
// 				d = j-i ;
// 				mxd = max(mxd , d);
// 			}else{
// 				mxd = max(mxd,d) ;
// 			}
// 		}
// 	}
// 	cout<<mxd ;
// }
//Map 
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> v;
// 	for(int i=0 ; i<n ; i++){
// 		int x ; 
// 		cin>>x ;
// 		v.push_back(x) ;
// 	}
// 	int mxd = 0 ;
// 	unordered_map<int,int> mp ;
// 	for(int i=0 ; i<n ; i++){
// 		if(mp.find(v[i]) == mp.end()){
// 			mp[v[i]] = i ; 
// 		}else{
// 			mxd = max(mxd,i-mp[v[i]]);
// 		}
// 	}
// 	// for(auto x : mp){
// 	// 	cout<<x.first<<" "<<x.second<<endl;
// 	// }
// 	cout<<mxd<<endl;
// }

//4. Two Sum
//Brute force
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,x ;
// 	cin>>n>>x;
// 	vector<int> v ; 
// 	for(int i=0 ; i<n ; i++){
// 		int x ; 
// 		cin>>x;
// 		v.push_back(x) ;
// 	}
// 	int flag = 0 ;
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			if(v[i] + v[j] == x){
// 				cout<<v[i]<<" + "<<v[j]<<" = "<< x<<endl ;
// 				//break ;
// 			}//else {
// 			// 	break;
// 			// }
// 		}
// 	}
// }

// #include <iostream>
// using namespace std;

// // Two pointer technique based solution to find
// // if there is a pair in A[0..N-1] with a given sum.
// int isPairSum(int A[], int N, int X)
// {
// 	// represents first pointer
// 	int i = 0;

// 	// represents second pointer
// 	int j = N - 1;

// 	while (i < j) {

// 		// If we find a pair
// 		if (A[i] + A[j] == X)
// 			return 1;

// 		// If sum of elements at current
// 		// pointers is less, we move towards
// 		// higher values by doing i++
// 		else if (A[i] + A[j] < X)
// 			i++;

// 		// If sum of elements at current
// 		// pointers is more, we move towards
// 		// lower values by doing j--
// 		else
// 			j--;
// 	}
// 	return 0;
// }

// // Driver code
// int main()
// {
// 	// array declaration
// 	int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
	
// 	// value to search
// 	int val = 17;
	
// 	// size of the array
// 	int arrSize = *(&arr + 1) - arr;

	
// 	// Function call
// 	cout << (bool)isPairSum(arr, arrSize, val);

// 	return 0;
// }

//two pointer approch

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	vector<int> v ;
// 	for(int i=0 ; i<n ; i++){
// 		int a;
// 		cin>>a;
// 		v.push_back(a) ;
// 	}
// 	sort(v.begin() , v.end());
// 	int l_i = 0 , r_i = n-1 ;
// 	int flag = 0 ;
// 	while(l_i<r_i){
// 		if(v[l_i]+v[r_i] == x) {
// 			flag = 1 ;
// 			break;
// 		}else if(v[l_i]+v[r_i] < x){
// 			l_i++ ;
// 		}else{
// 			r_i-- ;
// 		}
// 	}
// 	if(flag == 1){
// 		cout<<"YES"<<endl;
// 	}else{
// 		cout<<"NO"<<endl;
// 	}
// }
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	int a[n];
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}

// 	int l_i = 0 , r_i = n-1 ; 
// 	int flag = 0 ;
// 	while(l_i<r_i){
// 		if(a[l_i] + a[r_i] == x){
// 			//cout<<a[l_i]<<" + "<<a[r_i]<<" = "<<x<<endl;
// 			flag = 1 ; 
// 		}
// 		else if(a[l_i] + a[r_i] < x){
// 			l_i++ ;
// 		}
// 		else r_i-- ;
// 	}
// 	if(flag) cout<<"YES"<<endl;
// 	else cout<<"NO"<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int pre(int n , int a[]){
// 	vector<int> v ; 
// 	for(int i=0 ; i<n-1 ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			v.push_back(a[i] + a[j]) ;
// 		}
// 	}
// 	//return v ; 
// }
// int main(){
// 	int n,x ;
// 	cin>>n>>x;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	vector<int> v;
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			v[i] = a[i]+a[j] ;
// 		}
// 	}
// 	for(int i=0 ; i<v.size() ; i++){
// 		// if(x == v[i]) cout<<x<<endl;
// 		// else cout<<"Not found"<<endl;
// 		cout<<v[i]<<" ";
// 	}
// }

//#include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}
// 	map<int,int> mp ;
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			mp.insert({a[i],a[j]});
// 		}
// 	}
// 	bool flag = 0 ;
// 	for(auto pr:mp){
// 		if(pr.first + pr.second == x) flag = 1 ;
// 		cout<<pr.first<<" "<<pr.second<<" = "<<pr.first+pr.second<<endl;
// 	}
// 	if(flag) cout<<"yes" ;
// 	else cout<<"no";
// }

// C++ program to check if given array
// has 2 elements whose sum is equal

//using set
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	vector<int> v;
// 	for(int i=0 ; i<n ; i++){
// 		int l;
// 		cin>>l;
// 		v.push_back(l) ; 
// 	}
// 	unordered_set<int> s ;
// 	for(int i=0 ; i<n ; i++){
// 		int temp = x - v[i] ; 
// 		if(s.find(temp) == s.end()){
// 			s.insert(v[i]) ; 
// 		}else{
// 			cout<<v[i]<<" "<<temp<<endl;
// 		}
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std  ;
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	vector<int> v;
// 	for(int i=0 ; i<n ; i++){
// 		int l ;
// 		cin>>l;
// 		v.push_back(l) ; 
// 	}
// 	unordered_map<int,int> mp;
// 	for(int i = 0 ; i<n ; i++){
// 		int temp = x - v[i] ;
// 		if(mp.find(temp) == mp.end()){
// 			mp[v[i]]++;
// 		}
// 		else{
// 			cout<<v[i]<<" "<<temp<<endl;
// 		}
// 	}
// 	cout<<"Map : "<<endl;
// 	for(auto x : mp){
// 		cout<<x.first<<" "<<x.second<<endl;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	vector<int> v;
// 	for(int i=0 ; i<n ; i++){
// 		int l;
// 		cin>>l;
// 		v.push_back(l) ; 
// 	}
// 	unordered_map<int,int> mp ; 
// 	for(int i=0 ; i<n ; i++){
// 		mp[v[i]]++;
// 	}
// 	for(int i=0 ; i<n ; i++){
// 		int temp = x - v[i] ;
// 		if(mp[temp] == 1){
// 			cout<<v[i]<<" "<<temp<<endl;
// 			break ; 
// 		}

// 	}
// }
//using namespace std ; 
//int main(){
	//unordered_multimap<int,string> m ;
	// int n;
	// cin>>n;
	// for(int i=0 ; i<n ; i++){
	// 	int x ; 
	// 	string s;
	// 	cin>>x>>s;
	// 	m.insert({x,s}); 
	// }

	// for(auto x : m){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }
// 	int n;
// 	cin>>n;
// 	map<int,multiset<string>> mp ; 
// 	for(int i=0 ; i<n ; i++){
// 		int x;
// 		string s;
// 		cin>>s>>x;
// 		mp[x].insert(s) ; 
// 	}

// 	auto cur_it = --mp.end() ; //first -- then2 assign
// 	while(true){
// 		auto &students = (*cur_it).second ;   //& means we are using reference
// 		auto marks = (*cur_it).first ; 
// 		for(auto student : students){
// 			cout<<student<<" "<<marks<<endl;
// 		}
// 		if(cur_it == mp.begin()) break;
// 		cur_it--;
// 	}

// }
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	map<pair<string,string>,vector<int>> mp ; 
// 	int n;
// 	cin>>n ; 
// 	for(int i=0 ; i<n ; i++){
// 		string fn,ln;
// 		int ct ;
// 		cin>>fn>>ln>>ct ; 
// 		for(int j=0 ; j<ct ; j++){
// 			int x ;
// 			cin>>x ; 
// 			mp[{fn,ln}].push_back(x) ;
// 		}
// 	}
// 	for(auto &pr : mp){
// 		auto &fullName = pr.first ;
// 		auto &marks = pr.second ; 
// 		cout<<fullName.first<<" "<<fullName.second<<endl;
// 		cout<<marks.size()<<endl ; 
// 		for(auto &element : marks){
// 			cout<<element<<" ";
// 		}cout<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	//set<pair<string,string>,vector<int>> s;
// 	map<pair<string,string>,vector<int>> mp ;
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		string fn,ln;
// 		int ct ; 
// 		cin>>fn>>ln>>ct ; 
// 		for(int i=0 ; i<ct ; i++){
// 			int x ; 
// 			cin>>x ; 
// 			//s[make_pair(fn,ln)].push_back(x) ;
// 			mp[{fn,ln}].push_back(x) ; 
// 		}
// 	}
// 	for(auto &pr : mp){
// 		auto &FullName = pr.first ;
// 		auto &marks = pr.second ; 
// 		cout<<FullName.first<<" "<<FullName.second<<endl;
// 		cout<<marks.size()<<endl;
// 		for(auto &element : marks){
// 			cout<<element<<" ";
// 		}cout<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	map<pair<string,string>,map<int,int>> mp ;
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		string fn,ln;
// 		int l,m ; 
// 		cin>>fn>>ln>>l>>m;
// 		mp[{fn,ln}].insert({l,m}) ; 
// 	}
// 	for(auto &pr : mp){
// 		auto &FullName = pr.first ;
// 		auto &marks_pair = pr.second ;
// 		cout<<FullName.first<<" "<<FullName.second<<" ";
// 		for(auto &p : marks_pair){
// 			cout<<p.first<<" "<<p.second<<endl;
// 		}
// 	}
// }
//#include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	map<pair<string,string>,set<int>>mp;
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		string fn,ln;
// 		int a;
// 		cin>>fn>>ln>>a;
// 		for(int i = 0 ; i<a ; i++){
// 			int x;
// 			cin>>x;
// 			mp[{fn,ln}].insert(x) ; 
// 		}
// 	}
// 	for(auto &pr : mp){
// 		auto &FullName = pr.first ;
// 		auto &marks = pr.second ;
// 		cout<<FullName.first<<" "<<FullName.second<<endl;
// 		cout<<marks.size()<<endl;
// 		for(auto &element : marks){
// 			cout<<element<<" ";
// 		}cout<<endl;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	map<int,multiset<string>> mp ;
// 	for(int i=0 ; i<n ; i++){
// 		string s;
// 		int x ;
// 		cin>>s>>x;
// 		mp[x].insert(s) ; 
// 	}
// 	auto &cur_it = --mp.end() ;
// 	 int b = 12 ; 
// 	 int *a = &b ; 
// 	 cout<<a<<endl;
// 	while(true){
// 		//cout<<(*cur_it)<<endl;
// 		auto &students = (*cur_it).second;
// 		auto &marks = (*cur_it).first ;
// 		// for(auto student : students){
// 		// 	cout<<student<<" "<<marks<<endl;
// 		// }

// 		for(auto student : students){
// 			cout<<student<<" "<<marks<<endl;
// 		}

// 		//cout<<students<<" "<<marks<<endl;
// 		if(cur_it == mp.begin()) break;
// 		cur_it--;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	map<int,multiset<string>>mp;
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		string s;
// 		int p ; 
// 		cin>>s>>p;
// 		//int t = -p ;
// 		mp[p].insert(s) ; 
// 	}


// 	//MY implemented code // luv logic
// 	// for(auto &x : mp){
// 	// 	auto &its = x.second;
// 	// 	auto &num = x.first ; 
// 	// 	for(auto &it : its){
// 	// 		cout<<it<<" "<<-num<<endl;
// 	// 	}
// 	// }

// 	//Luv's first logic
// 	auto cur_it = --mp.end() ; //this iterator returning a pointer
// 	while(true){
// 		auto &students = (*cur_it).second ; 
// 		auto &mark = (*cur_it).first ;
// 		for(auto &student : students){
// 			cout<<student<<" "<<mark<<endl;
// 		}
// 		while(cur_it == mp.begin()) break;
// 		cur_it-- ; 
// 	}
// }


//Count distinct elements in every window 
//brute force approach
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}

// 	vector<int> v ; 
// 	int ct = 0 ; 
// 	for(int i=0 ; i<n-k ; i++){
		
// 		for(int j=i ; j<i+k ; j++){
// 			cout<<a[i]<<" ";
// 		}cout<<endl;
// 		// v.push_back(ct) ; 
// 		// ct = 1 ; 
// 	}
	// for(int i=0 ; i<v.size() ; i++){
	// 	cout<<v[i]<<" ";
	// }
//}


// #include<bits/stdc++.h>
// using namespace std ;

// int countDistinctWindow(int a[],int k){
// 	int ct = 0 ; 
// 	for(int i=0 ; i<k ; i++){
// 		int j;
// 		for(j=0 ; j<i ; j++){
// 			if(a[j] == a[i]) break ;
// 		}
// 		if(i == j) ct++ ;
// 	}
// 	return ct ; 
// }
// void countDistinct(int a[],int n,int k){
// 	for(int i=0 ; i<=n-k ; i++){
// 		cout<<countDistinctWindow(a+i,k)<<" ";
// 	}
// }
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n];
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	countDistinct(a,n,k) ;
// }



// An efficient C++ program to
// count distinct elements in
// every window of size k
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// void countDistinct(int arr[], int k, int n)
// {
//     // Creates an empty hashmap hm
//     unordered_map<int, int> hm;

//     // initialize distinct element count for current window
//     int dist_count = 0;

//     // Traverse the first window and store count
//     // of every element in hash map
//     for (int i = 0; i < k; i++) {
//         if (hm[arr[i]] == 0) {
//             dist_count++;
//         }
//         hm[arr[i]] += 1;
//     }

//     // Print count of first window
//     cout << dist_count << endl;

//     // Traverse through the remaining array
//     for (int i = k; i < n; i++) {
//         // Remove first element of previous window
//         // If there was only one occurrence, then reduce distinct count.
//         if (hm[arr[i - k]] == 1) {
//             dist_count--;
//         }
//         // reduce count of the removed element
//         hm[arr[i - k]] -= 1;

//         // Add new element of current window
//         // If this element appears first time,
//         // increment distinct element count

//         if (hm[arr[i]] == 0) {
//             dist_count++;
//         }
//         hm[arr[i]] += 1;

//         // Print count of current window
//         cout << dist_count << endl;
//     }
// }

// int main()
// {
//     int arr[] = { 1, 2, 1, 3, 4, 2, 3 };
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int k = 4;
//     countDistinct(arr, k, size);

//     return 0;
// }
// // This solution is contributed by Aditya Goel

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int a[n] ;
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i] ;
//     }
//     unordered_map<int,int> mp;
//     vector<int> v ;
//     for(int i=0 ; i<k ; i++){
//         mp[a[i]]++ ;
//     }
//     v.push_back(mp.size()) ;
//     for(int i=1 ; i<n-k+1 ; i++){
//         mp[a[i-1]]-- ;
//         if(mp[a[i-1]]<=0){
//             mp.erase(a[i-1]) ;
//         }
//         mp[a[i+k-1]]++ ;
//         v.push_back(mp.size()) ;
//     }
//     for(int i=0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n;
//     cin>>n;
//     int a[n] ; 
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i] ;
//     }

//     // unordered_map<int,int> mp;
//     // for(int i = 0 ; i<n ; i++){
//     //     mp[a[i]]++;
//     // }

//     // while(n--){
//     //     int mf = INT_MIN ;
//     //     int mfn = 0 ; 
//     //     for(auto x : mp){
//     //         mf = max(mf,x.second);
//     //         mfn = x.first ;
//     //     }
//     //     for(int i=0 ; i<mf ; i++){
//     //         cout<<mfn<<" ";
//     //     }
//     //}
//     // for(auto x : mp){
//     //     cout<<x.first<<" "<<x.second<<endl;
//     // }
//     // unordered_map<int,multiset<int>> map ;
//     // for(auto x : mp){
//     //     map[x.second].insert(x.first) ; 
//     // }

//     // for(auto x : map){
//     //     auto &h = x.second ; 
//     //     for(auto &i : h){
//     //         cout<<i<<" ";
//     //     }
//     // }

//     multiset<int> s ;
//     for(int i=0 ; i<n ; i++){
//         int x ;
//         cin>>x ;
//         s.insert(x) ; 
//     }
//     for(auto it = s.begin() ; it != s.end() ; it++){
//         cout<<*it<<" ";
//     }
// }

//// using namespace std ;
// int main(){
//     int n;
//     cin>>n;
//     int a[n] ;
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i] ;
//     }
//     unordered_map<int,int> mp ;
//     for(int i=0 ; i<n ; i++){
//         mp[a[i]]++ ;
//     }
//     multiset<int> s;
//     for(auto &x : mp){
//         s.insert(x.second) ;
//     }

// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n;
//     cin>>n;
//     multiset<int> mls ;
//     for(int i=0 ; i<n ; i++){
//         int x;
//         cin>>x;
//         mls.insert(x);
//     }
//     for(auto it=mls.begin() ; it!=mls.end() ; it++){
//         cout<<(*it)<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	map<pair<string,string> , vector<int>> mp ;
// 	int n;
// 	cin>>n ; 
// 	for(int i=0 ; i<n ; i++){
// 		string firstName ,lastName ;
// 		int ct ; 
// 		cin>>firstName>>lastName>>ct ;
// 		for(int j=0 ; j<ct ; j++){
// 			int x ;
// 			cin>>x ;
// 			mp[{firstName,lastName}].push_back(x) ;
// 		}
// 	}
// 	for(auto &pr : mp){
// 		auto &fullName = pr.first ;
// 		auto &number = pr.second ;
// 		cout<<fullName.first<<" "<<fullName.second<<endl;
// 		cout<<number.size()<<endl ;
// 		for(auto &element : number){
// 			cout<<element<<" ";
// 		}cout<<endl ; 
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;

// // bool compare(pair<int,int> a,pair<int,int> b)
// //     {
// //         if(a.second==b.second)
// //         return a.first<b.first;
// //         return a.second>b.second;
// //     }

// bool compare(pair<int,int> a , pair<int,int> b){
// 	if(a.second == b.second){
// 		return a.first<b.first ;
// 	}
// 	return a.second>b.second ;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	unordered_map<int,int> mp;
// 	for(int i=0 ; i<n ; i++){     //O(1)
// 		mp[a[i]]++ ;
// 	}    
// 	for(auto &x : mp){
// 		cout<<(x.first)<<" "<<(x.second)<<endl;
// 	}cout<<endl;
//     //vector<pair<int,int>> vt(mp.begin(),mp.end()); 
//     vector<pair<int,int>> v(mp.begin() , mp.end()) ;
//     for(int i=0 ; i<v.size() ; i++){
//     	cout<<v[i].first<<" "<<v[i].second<<endl;
//     }cout<<endl;

//     sort(v.begin() , v.end() , compare);
//     for(auto &x : v){
//     	int p = x.second;
//     	// cout<<x.first<<" "<<x.second<<endl;
//     	while(p--){
//     		cout<<x.first<<" ";
//     	}
//     }
// }


// #include<bits/stdc++.h>
// using namespace std; 
// bool compare(pair<int,int> a , pair<int,int> b){
// 	if(b.second == a.second){
// 		return a.first<b.first ;
// 	}
// 	return a.second>b.second ; 
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ; 
// 	}
// 	unordered_map<int,int> mp;
// 	for(int i=0 ; i<n ; i++){
// 		mp[a[i]]++;
// 	}
	
// 	vector<pair<int,int>> v(mp.begin() , mp.end()) ;
// 	sort(v.begin() , v.end() , compare) ;

// 	for(auto &x : v){
// 		int it = x.second ;
// 		while(it--){
// 			cout<<x.first<<" ";
// 		}
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// bool esort(pair<int,int> a,pair<int,int> b){
// 	if(a.second == b.second) return a.first<b.first;
// 	return a.second>b.second ;
// }
// vector<int> sortByCount(map<int,int> m){
// 	vector<pair<int,int>> v(m.begin(),m.end());
// 	sort(v.begin(),v.end() , esort) ;
// 	vector<int> res ;
// 	for(auto &x : v){
// 		int it = x.second;
// 		while(it--){
// 			res.push_back(x.first) ;
// 		}
// 	}
// 	return res ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	//sort(a,a+n) ; 
// 	map<int,int> mp;
// 	for(int i=0 ; i<n ; i++){
// 		mp[a[i]]++ ;
// 	}
// 	for(auto &x:mp){
// 		cout<<x.first<<" "<<x.second<<endl;
// 	}

// 	vector<int> v = sortByCount(mp);
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<v[i]<<" ";
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	// int a[n] ;
// 	// for(int i=0 ; i<n ; i++){
// 	// 	cin>>a[i];
// 	// }
// 	//sort(a,a+n) ;
// 	int a[n][n] ; 
// 	//a[0][0] = 0 ;
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=0 ; j<n ; j++){
// 			cin>>a[i][j] ;
// 		}
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		for(int j=0 ; j<n ; j++){
// 			cout<<a[i][j]<<" ";
// 		}cout<<endl;
// 	}
// }


#include<bits/stdc++.h>
using namespace std ;
bool returnByOrder(pair<int,int>a,pair<int,int>b){
	if(a.second == b.second) return a.first<b.first ;
	return a.second>b.second ;
}
int main(){
	int n;
	cin>>n;
	int a[n] ; 
	for(int i=0 ; i<n ; i++){
		cin>>a[i] ;
	}
	unordered_map<int,int> mp ;
	for(int i=0 ; i<n ; i++){
		mp[a[i]]++ ;
	}
	vector<pair<int,int>> v(mp.begin() , mp.end());
	sort(v.begin() , v.end() , returnByOrder) ;
    vector<int> result ;
    for(auto &x : v) {
    	auto t = x.second ; 
    	for(int i=0 ; i<t ; i++){
    		result.push_back(x.first) ;
    	}
    }
    for(int i=0 ; i<result.size() ; i++){
    	cout<<result[i]<<" ";
    }
}