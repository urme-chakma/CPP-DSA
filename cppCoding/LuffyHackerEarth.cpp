// #include<bits/stdc++.h>
// using namespace std ; 
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--){   //loop of t size
// 		int n,q;
// 		cin>>n>>q;
// 		string s;
// 		cin>>s;
// 		while(q--){   //loop of q size
// 			int l,r;
// 			cin>>l>>r;
// 			int hsh[26];
// 			for(int i=0 ; i<26 ; i++){  // loop of 26  
// 				hsh[i] = 0 ;  //Hashing characters
// 			}
// 			l-- ; r-- ; 
// 			for(int i=l ; i<=r ; i++){    // max loop is n size
// 				hsh[s[i] - 'a']++;
// 			}
			
// 			int oddCt = 0 ; 
// 			for(int i=0 ; i<26 ; i++){    // loop of 26
// 				if(hsh[i] % 2 != 0 ) oddCt++;
// 			}
// 			if(oddCt>1) cout<<"NO\n";
// 			else cout<<"YES\n";

// 		}

// 		//O(t*(n+q*(26 + n + 26)))
// 		//O(t*q*n) = 10*10^5*10^5
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// const int N = 1e7 + 10 ; 
// int hsh[N][26];
// int main()
// {
// 	int t;
// 	cin>>t;
	
// 	while(t--){
// 		for(int i=0 ; i<N ; i++){
// 			for(int j=0 ; j<26 ; j++){
// 					hsh[i][j] = 0 ; 
// 				}
// 		}
// 		int n , q ; 
// 		cin>>n>>q;
// 		string s;
// 		cin>>s;
// 		for(int i=0 ; i<n ; i++){
// 			hsh[i+1][s[i] - 'a']++;
// 		}
// 		for(int i=0 ; i<26 ; i++){
// 			for(int j=1 ; j<=n ; i++){    // using j as the row because I need to switch 
// 				hsh[j][i] += hsh[j-1][i]; //the row in order to sum of i-th array. 
// 			}
// 		}
// 		while(q--){
// 			int l,r;
// 			cin>>l>>r;
// 			int oddCt = 0 ; 
// 			for(int i=0 ; i<26 ; i++){
// 				int charCt = hsh[r][i] - hsh[l-1][i];
// 				if(charCt % 2 != 0) oddCt++;  // oddCt represents how many alphabet are present that's count odd ;
// 			}
// 			if(oddCt>1) cout<<"NO"<<endl;
// 			else cout<<"YES"<<endl;
// 		}
// 	}
// }

//O(t*(n+n)*26+q*26))
//O(t*n*26) = 10 * 10 ^5 *26

#include<bits/stdc++.h>
using namespace std ;
const int N = 1e5 + 10 ; 
int hsh[N][26];
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0 ; i<N ; i++){
			for(int j=0 ; j<26 ; j++){
				hsh[i][j] = 0 ;
			}
		}

		int n,q ; 
		cin>>n>>q ;
		string s;
		cin>>s;

		for(int i=0 ; i<n ; i++){
			hsh[i+1][s[i] - 'a']++;   // making arrays for all 26 letters
		}

//     Finding the prefix sum 
		for(int i=0 ; i<26 ; i++){
			for(int j=1 ; j<=n ; j++){
					hsh[j][i] += hsh[j-1][i];     //i-th array of the two dimentional array
			}
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			int oddCt = 0 ;
			for(int i=0 ; i<26 ; i++){
				int charCt = hsh[r][i] - hsh[l-1][i];   //how many i present in r to l range
				if(charCt % 2 != 0 ) {
					oddCt++;
				}
			}
			
			if(oddCt>1) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
}

//TC = O(t*((N*26)+n+(26*n)+(q*26)))