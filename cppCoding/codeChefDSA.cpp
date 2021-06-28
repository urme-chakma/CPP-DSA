// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	vector<int> a;
// 	int x ;
// 	while(x!=42){
// 		cin>>x;
// 		a.push_back(x);
// 	}
// 	for(int i : a){
// 		if(i==42) break;
// 		cout<<i<<endl;
// 	}
// }

//Another Solution
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	while(cin>>n){
// 		if(n == 42) break ;
// 		cout<<n<<endl;
// 	}
// }

///Another Problem
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		int reverseN = 0 ;
// 		while(n>0){
// 			int lastDigit = n%10;
// 			reverseN = reverseN*10 + lastDigit;
// 			n = n/10 ; 
// 		}
// 		cout<<reverseN<<endl;
// 	}
// }
	//Using recursion
// #include<bits/stdc++.h>
// using namespace std ; 
// long long int reverse(long long int n){
// 	int digit = (int)log10(n);
// 	if(n==0) return 0 ;
// 	return n%10 * pow(10,digit)+reverse(n/10);
// }
// int main(){
// 	// int t;
// 	// cin>>t;
// 	// while(t--){
// 	// 	int n;
// 	// 	cin>>n;

		
// 	// }
// 	long long int n;
// 	cin>>n;
	
// 	if(n%10==0){
// 		n = n/10;
// 	}

// 	if(n == reverse(n)) cout<<"YES"<<endl;
// 	else cout<<"NO"<<endl;
// }



// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t ;
// 	cin>>t ; 
// 	while(t--){
// 		string s;
// 		cin>>s ;
// 		bool ct = 0 ; 
// 		for(int i=0 ; i<s.size() ; i++){
// 			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
// 				ct = 1 ;
// 				break ; 
// 			}  
// 		}
// 		if(ct) cout<<"Yes"<<endl;
// 		else cout<<"No"<<endl;
// 	}
// }

#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n;
	cin>>n;
	string s ;
	cin>>s ;
	unordered_map<int,int> mp ;
	for(int i=0 ; i<n ; i++){
		mp[s[i]]++;
	}
	if(('c').find(mp))
}