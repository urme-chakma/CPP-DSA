//10 * 10e5 *(log10e5)
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,k;
// 		cin>>n>>k;
// 		multiset<long long> s;
// 		for(int i=0 ; i<n ; i++){
// 			long long candy_ct ;
// 			cin>>candy_ct ;
// 			s.insert(candy_ct) ;
// 		}
// 		long long total_candies = 0;
// 		for(int i=0 ; i<k ; i++){
// 			auto last_it = (--s.end());
// 			long long candy_ct = *last_it ;
// 			total_candies += candy_ct ;
// 			s.erase(last_it);
// 			s.insert(candy_ct / 2);
// 		}
// 		cout<<total_candies<<endl;
// 	}
// }


#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long> ms;
		long long candy_ct = 0 ;
		while(n--){
			cin>>candy_ct;
			ms.insert(candy_ct);
		}
		// for(auto it = ms.begin() ; it != ms.end() ; it++){
		// 	cout<<*it<<" ";
		// }cout<<"\n";
		//cout<<candy_ct<<" ";

		long long total_candies = 0 ;

		for(int i=0 ; i<k ; i++){
			auto it = (--ms.end());
			candy_ct = *it ;
			total_candies += candy_ct ;
			ms.erase(it) ;
			ms.insert(candy_ct/2);
		}
		cout<<total_candies<<endl;
	}
}