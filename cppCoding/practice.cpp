// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int t , flag=0;
// 	cin>>t;
// 	char s[100];
// 	while(t--){
// 		int flag = 0 ;
// 		char hsh[26]={0};
// 		cin>>s;
// 		for(int i=0 ; s[i]!='\0' ; i++){
// 			hsh[s[i]-'a']++;
// 		}
// 		for(int i=0 ; i<26 ; i++){
// 			if(hsh[i]>=2) flag = 1 ; 
// 		}
// 		if(flag==1) cout<<"Yes"<<endl;
// 		else cout<<"No"<<endl;
// 	}
// }
// #include<bits/stdc++.h>
// using namespace std ;

// void findMissing(int a[],int b[],int n,int m){
// 	for(int i=0 ; i<n ; i++){
// 		int j;
// 		for(j=0 ; j<m ; j++){
// 			if(a[i] == b[j]){
// 				break;
// 			}
// 		}
// 		if (j==m){
// 			cout<<a[i]<<" ";
// 		}
// 	}cout<<endl;
// }

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		int a[n],b[m];
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i];
// 		}
// 		for(int i=0 ; i<m ; i++){
// 			cin>>b[i];
// 		}
// 		findMissing(a,b,n,m);
// 	}
// }

// C++ program to demonstrate various function of unordered_set 

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	//declaring set for storing string data_type
// 	unordered_set<string> s;

// 	//Inserting various string , same string will be stored
// 	//once in set

// 	s.insert("code");
// 	s.insert("in");
// 	s.insert("c++");
// 	s.insert("is");
// 	s.insert("fast");

// 	string key = "slow";

// 	//find returns end iterator if key is not found,
// 	//else it returns iterator to that key

// 	if(s.find(key)==s.end()){
// 		cout<<key<<" not found"<<endl<<endl;
// 	}else{
// 		cout<<key<<" Found "<<endl<<endl;
// 	}

// 	key = "c++";
// 	if(s.find(key) == s.end()){
// 		cout<<key<<" not found\n";
// 	}else{
// 		cout<<key<<" Found "<<key<<endl;
// 	}

// 	//now iterating over whole set and printing its
// 	//content
// 	cout<<"\nAll elements : ";
// 	unordered_set<string>::iterator it ;
// 	for(it=s.begin() ; it!=s.end() ; ++it){
// 		cout<<*it<<" ";
// 	}cout<<endl;

// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	set<string> s;
// 	s.insert("My");
// 	s.insert("name");
// 	s.insert("is");
// 	s.insert("Miss");
// 	s.insert("Google");

// 	string key = "is";
// 	if(s.find(key) == s.end()){
// 		cout<<key<<" is found"<<endl;
// 	}else{
// 		cout<<key<<" not found"<<endl;
// 	}

// 	set<string>::iterator it;
// 	for(it=s.begin() ; it!=s.end() ; ++it){
// 		cout<<*it<<" ";
// 	}cout<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// const int N = 1e7+10;
// long long h[N] ; 
// int main(){
// 	int t;
// 	cin>>t ;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		long long a[n],b[m];
// 		for(int i=1 ; i<=n ; i++){
// 			cin>>a[i];
// 			//h[a[i]]++;
// 		}
// 		for(int i=1 ; i<=m ; i++){
// 			cin>>b[i];
// 			h[b[i]]++;
			
// 		}
// 		long long missingNumber ;
// 		for(int i=1 ; i<=n ; i++){
// 			if(h[a[i]]==0){
// 				missingNumber = a[i];
// 			}
// 		}
// 		cout<<missingNumber<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		int a[n],b[m];
// 		map<int,int> hash;
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i];
// 		}
// 		for(int i=0 ; i<m ; i++){
// 			cin>>b[i];
// 			hash.insert(pair<int,int> (b[i],i));
// 		}
// 		for(int i=0 ; i<n ; i++){
// 			if(hash.find(a[i])==hash.end()){
// 				cout<<a[i]<<" ";
// 			}
// 		}cout<<endl;
// 	}
// 	return 0 ; 
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		unordered_set<int> s;
// 		int m,n;
// 		long long a[m],b[n];
// 		for(int i=0 ; i<m ;i++){
// 			cin>>a[i];
// 		}
// 		for(int i=0 ; i<n ; i++){
// 			cin>>b[i];
// 			s.insert(b[i]);
// 		}
// 		unordered_set<int>::iterator it;
// 		for(it != s.find(a[*it]) ; it=s.end() ; ++it){
// 			cout<<a[*it]<<" ";
// 			}
// 		}cout<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m;
// 		cin>>n>>m;
// 		int a[n],b[m];
// 		map<int,int> hash;
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i];
// 		}
// 		for(int i=0 ; i<m ; i++){
// 			cin>>b[i];
// 			hash.insert(pair<int,int> (b[i],i));
// 		}
// 		for(int i=0 ; i<n ; i++){
// 			if(hash.find(a[i]) == hash.end()){
// 				cout<<a[i]<<" ";
// 			}
// 		}cout<<endl;
// 	}
// 	return 0 ; 
// }
//##############################################################
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n,k,c=0 ; 
// 	cin>>n>>k;
// 	int a[n];
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}
// 	//two pointer algorithm
// 	int l=0 , r = n-1 ; 
// 	while(l<r){
// 		if(a[l]+a[r]>k){
// 			r--;
// 		}else if(a[l]+a[r]<k){
// 			l++;
// 		}else{
// 			c=1;
// 			break;
// 		}
// 	}
// 	if(c){
// 		cout<<"YES";
// 	}else{
// 		cout<<"NO";
// 	}
// }

///////////////////// let's use pre-computation //////////////////////
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n];
// 	for(int i=0 ; i<n ; cin>>a[i++]);  // xoss approch
// 	unordered_set<int> s;
//  	unordered_set<int>::iterator it;

// 	int flag = 0 ; 
// 	for(int i=0 ; i<n ; i++){
// 		if(s.find(a[i]) == s.end()){  //If the element is not found in the set
// 			s.insert(k-a[i]);
// 			//cout<<*s[a[i]]<<" ";
// 		}else {
// 			flag = 1 ; 
// 			break;
// 		}
// 	}
// 	for(it = s.begin() ; it==s.end() ; it++){
// 		cout<<a[*it]<<" " ;
// 	}cout<<endl;
// 	if(flag) cout<<"YES";
// 	else cout<<"NO";
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n; 
// 	cin>>n ; 
// 	int a[n] ;
// 	for(int i=0 ; i<n ; cin>>a[i++]);
// 	int cumulative_sum[n+1];
//     cumulative_sum[0] = 0 ; 
// 	for(int i=1 ; i<=n ; i++){
// 		cumulative_sum[i] = cumulative_sum[i-1] + a[i-1]; 
// 	}

// 	int max_sum = 0 ; 
// 	for(int i=1 ; i<=n ; i++){
// 		int sum = 0 ; 
// 		for(int j=0 ; j<i ; j++){
// 			sum = cumulative_sum[i] - cumulative_sum[j] ;
// 			max_sum = max (sum , max_sum) ; 
// 		}
// 	}
// 	cout<<max_sum;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,a;
// 		cin>>n>>a;
// 		int c[n],d[n];
// 		for(int i=0 ; i<n ; i++){
// 			cin>>c[i]>>d[i] ; 
// 		}
// 		int ans = 0 , maxm , minm;
// 		for(int i=0 ; i<n ; i++){
// 			maxm = minm = d[i];
// 			int cost = 0 ; 

// 			for(int j=i ; j<n ; j++){
// 				maxm = max(maxm,d[j]);
// 				minm = min(minm,d[j]);
// 				cost += c[j];
// 				//cout<<"c : "<<cost<<endl;
// 				ans = max(ans,(j-i+1)*a-cost-(maxm-minm)*(maxm-minm));
// 				//cout<<"ans till : "<<ans<<endl;
// 			}
// 		}
// 		cout<<ans<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// #define ll long long 
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		ll N,A;
// 		cin>>N>>A;
// 		ll D[N],C[N];
// 		ll perf[N];
// 		perf[0] = 0 ; 
// 		for(ll i=1 ; i<=N ; i++){
// 			cin>>C[i]>>D[i];
// 			perf[i] = perf[i-1] + C[i];
// 		}
// 		ll ans = 0 , mn , mx ;
// 		for(int i=1 ; i<=N ; i++){
// 			mn = D[i];
// 			mx = D[i];
// 			for(int j=i ; j<=N ; j++){
// 				mn = min(mn,D[j]);
// 				mx = max(mx,D[j]);
// 				int cost = perf[j] - perf[i-1];
// 				ans = max(ans,(A*(j-i+1)-cost-(mx-mn)*(mx-mn)));
// 			}
// 		}
// 		cout<<ans<<endl;
// 	}
// }

////////// Perfect pair ////////////////////
// #include<bits/stdc++.h>
// using namespace std ; 
// const int N = 1e5 + 7;
// int hsh[N];
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i=1 ; i<=n ; cin>>a[i++]);
// 		for(int i=1 ; i<n ; i++){
// 			for(int j=i+1 ; j<=n ; j++){
// 				//hsh[i] = a[i] + a[j] ; 
// 				for(int k=1 ; k<=N ; k++){
// 					hsh[k] = a[i]+a[j];
// 					//cout<<hsh[k]<<" ";
// 				}//cout<<endl;
// 			}
// 		}
// 		for(int i=1 ; i<=N ; i++){
// 			cout<<hsh[i]<<" ";
// 		}cout<<endl;
// 		int ct = 0 ; 
// 		double sq , cb ; 
// 		for(int i=1 ; i<=n ; i++){
// 			sq = sqrt(hsh[i]);
// 			cb = cbrt(hsh[i]);
// 			if(sq - floor(sq) == 0 || cb - floor(cb) == 0){
// 				ct++;
// 			}
// 		}
// 		cout<<ct<<endl;

// 	}
// }
/////////////////////////////////////////////
// #include<bits/stdc++.h>
// using namespace std ; 
// const int N = 1e5 + 7 ;
// int hsh[N];
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i=1 ; i<=n ; i++){
// 			cin>>a[i];
// 			hsh[i] = hsh[i-1]+a[i];
// 		}
// 		int ct = 0 ; 
// 		for(int i=1 ; i<=n ; i++){
// 			for(int j=i;j<=n ; j++){
// 				int diff = hsh[j] - hsh[j-i+1];
// 				double sq = sqrt(diff) , cb = cbrt(diff);
// 				if((sq != 0 && cb!=0)&&(sq - floor(sq) ==0 || cb - floor(cb) == 0)){
// 					ct++;
// 				}
// 			}
// 		}
// 		cout<<ct<<endl;
// 	}
// } 

// #include<bits/stdc++.h>
// using namespace std ; 
// int main()
// {
// 	int i,j,k,n,t,q;
// 	cin>>t;
// 	while(t--){
// 		q=0 ; 
// 		cin>>n;
// 		int a[n] ;
// 		int b[2001];
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i];
// 			b[a[i]]++;
// 		}
// 		int g = 0 , w = 0 ; 
// 		b[0]=0;
// 		for( i=1 ; i<=1000 ; i++){
// 			for(k=1 ; k*k <= 2000 ; k++){
// 				if(k*k-i>=0){
// 					int m=g ; 
// 					int s = w ; 
// 					if(k*k == 2*i){
// 						w += (b[i]*(b[i]-1))/2;
// 					}
// 					else{
// 						g+=b[(k*k-i)]*b[i];
// 					}
// 				}
// 			}
// 		}
// 		for(i=1;i<=1000;i++){
// 			for(k=2 ; k*k*k<=2000;k++){
// 				if(k*k*k-i>=0 && (k*k*k!=64 && k*k*k!=729)){
// 					int m=g;
// 					int s=w;
// 					if(k*k*k==2*i){
// 						w+=(b[i]*(b[i]-1))/2;
// 					}else{
// 						g+=b[(k*k*k-i)]*b[i];
// 					}
// 				}
// 				cout<<g/2+w<<"\n";
// 			}
// 		}
// 	}
// }


//############################################################
// #include<bits/stdc++.h>
// #define ll long long 
// #define vll vector<ll>
// #define llin(a) ll a ; cin>>a;
// #define llin2(a,b) ll a,b ; cin>>a>>b;
// #define llin3(a,b,c) ll a,b,c ; cin>>a>>b>>c;
// #define fulll(v) v.begin() , v.end()
// #define vecin(n, v) for(ll i=0 ; i<n ; i++) cin>>v[i];
// #define vcout(n,v) for(ll i=0 ; i<n ; i++) cout<<v[i]<<" ";cout<<endl;
// #define rep(i,s,n) for(ll i=s ; i<n ; i++)
// #define endl "\n"
// #define test cout<<"test line"<<endl;
// #define swapper void swap(ll*a,ll*b){ll t=*a;*a=*b;*b=t;}
// #define pll pair<ll,ll>
// #define vpll vector<pll>
// #define mod 1000000007
// using namespace std ; 


// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 	bool sq[2001] = {false};
// 	rep(i,1,sqrt(2001)){
// 		if(i*i<=2001)
// 			sq[i*i] = true; 
// 		if(i*i*i<=2001)
// 			sq[i*i*i]=true;
// 	}
// 	llin(t);
// 	while(t--){
// 		llin(n);
// 		vll v;
// 		unordered_map<ll,ll> ump;
// 		rep(i,0,n)
// 		{
// 			llin(a);
// 			ump[a]++;
// 		}
// 		for(auto i:ump)
// 			v.push_back(i.first);
// 		n = v.size();
// 		ll c=0;
// 		rep(i,0,n)
// 		{
// 			ll f = ump[v[i]];
// 			if(f>1&&sq[2*v[i]])
// 				c+=(f*(f-1))/2;
// 			for(ll j=i+1 ; j<n ; j++){
// 				if(sq[v[i]+v[j]])
// 					c+=(f*ump[v[j]]);
// 			}
// 		}
// 		cout<<c<<endl;
// 	}
// 	return 0 ; 
// }
//#####################################################
// #include<bits/stdc++.h>
// using namespace std ; 
// bool init[2020];
// int main(){
// 	int t;
// 	cin>>t;
// 	for(int a=2 ; a*a <= 2000 ; a++){
// 		if(a*a <= 2000) init[a*a] = true ; 
// 		if(a*a*a <= 2000) init[a*a*a] = true ; 
// 	}
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		unordered_map<int,int> m;
// 		vector<int> v;
// 		v.clear() ; 
// 		m.clear() ; 
// 		for(int a=0 ; a<n ; a++){
// 			int x;
// 			cin>>x;
// 				m[x]++;
// 		}
// 		for(auto it=m.begin() ; it!=m.end() ; it++){
// 			v.push_back(it->first); //first integer of the pair
// 		}

// 		int ans = 0 ;
// 		for(int a=0 ; a<v.size() ; a++){
// 			int value=m[v[a]];
// 			if(value>1 && init[2*v[a]]==true){
// 				ans += (value*(value-1))/2;
// 			}
// 			for(int b=a+1 ; b<v.size() ; b++){
// 				if(init[v[a]+v[b]]==true){
// 					ans += value*m[v[b]];
// 				}
// 				//cout<<v[a]<<" "<<v[b]<<" "<<init[v[a]+v[b]]<<endl;
// 				cout<<ans<<endl;
// 			}
// 		}
// 		cout<<ans<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}
// 	bool flag = false ; 
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			if(a[i]==a[j]){
// 				flag = true ; 
// 			}
// 		}
// 	}
// 	if(flag) cout<<"true"<<endl;
// 	else cout<<"false"<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std ; 
// const int N = 1e7+10;
// long long int ar[N] = {0};

// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	while(m--){
// 		int a,b,k;
// 		cin>>a>>b>>k;
// 		cout<<a<<" "<<b<<" "<<k<<endl;
// 		ar[a] += k;
// 		ar[b+1] -= k;
// 		cout<<ar[a]<<" "<<ar[b+1]<<endl;
// 	}
// 	for(int i=1 ; i<=n ; i++){
// 		ar[i] += ar[i-1];
// 	}
// 	for(int i=1 ; i<=n ; i++){
// 		cout<<ar[i]<<" ";
// 	}cout<<endl;
// 	long long mx = -1;
// 	for(int i=1 ; i<=n ; i++){
// 		if(mx<ar[i]){
// 			mx = ar[i];
// 		}cout<<mx<<endl;
// 	}
// 	cout<<mx<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std ; 
// const int N = 1e7 + 10 ; 
// long long int ar[N] ;
// int main()
// {
// 	int n,m;
// 	cin>>n>>m;
// 	while(m--){
// 		int a,b,k;
// 		cin>>a>>b>>k;
// 		ar[a] += k;
// 		ar[b+1] -= k ;
// 	}
// 	for(int i=1 ; i<=n ; i++){
// 		ar[i] += ar[i-1];
// 	}
// 	long long int mx = INT_MIN;
// 	for(int i=1 ; i<=n ; i++){
// 		mx = max(mx,ar[i]);
// 	}
// 	cout<<mx<<endl;
// }

// TC = O(m+n) = 2*10^5 + 10^7 ~ 10^10

// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// void solve() {
//     ll n, m, x;
//     cin >> n >> m >> x;
//     x--;
//     ll col = x / n;
//     ll row = x % n;
//     //cout<<col<<" "<<row<<endl;
//     //cout<<row<<" * "<<m<<" + "<<col<<" + 1"<<endl;
//     cout << row * m + col + 1 << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); cout.tie(nullptr);
//     int n;
//     cin >> n;
//     while (n--) {
//         solve();
//     }
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,q;
// 		cin>>n>>q;
// 		string s;
// 		cin>>s;
// 		while(q--){
// 			int l,r;
// 			cin>>l>>r;
// 			int hsh[26];
// 			for(int i=0 ; i<26 ; i++){
// 				hsh[i]=0;
// 			}
// 			l--;r--;
// 			for(int i=l ; i<=r ; i++){
// 				hsh[s[i]-'a']++;
// 			}
// 			int oddct = 0 ;
// 			for(int i=0 ; i<26 ; i++){
// 				if(hsh[i]%2 != 0) oddct++;
// 			}
// 			if(oddct>1) cout<<"NO\n";
// 			else cout<<"Yes\n";
// 		}
// 	}
//}
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,q;
// 		cin>>n>>q;
// 		string s ;
// 		cin>>s;
// 		while(q--){
// 			int l,r;
// 			cin>>l>>r;
// 			int hsh[26];
// 			for(int i=0 ; i<26 ; i++){
// 				hsh[i] = 0 ;
// 			}
// 			l--;r--;
// 			for(int i=l ; i<=r ; i++){
// 				hsh[s[i] - 'a']++;
// 			}
// 			int oddct=0 ; 
// 			for(int i=0 ; i<26 ; i++){
// 				if(hsh[i]%2 != 0) oddct++;
// 			}
// 			if(oddct>1) cout<<"NO\n";
// 			else cout<<"YES\n";
// 		}
// 	}
// }
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a[3][3];
// 	for(int i=0 ; i<3 ; i++){
// 		for(int j=0 ; j<3 ; j++){
// 			cin>>a[i][j];
// 		}
// 	}

// 	for(int i=0 ; i<3 ; i++){
// 		for(int j=0 ; j<3 ; j++){
// 			cout<<a[i][j]<<" ";
// 		}cout<<endl;
// 	}
// 	cout<<"_______________"<<endl;
// 	cout<<endl;

// 	for(int i=0 ; i<3 ; i++){
// 		for(int j=0 ; j<3 ; j++){
// 			cout<<a[j][i]<<" ";
// 		}cout<<endl;
// 	}

// }
// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){ 
//     // This program will create different sequence of  
//     // random numbers on every program run  
  
//     // Use current time as seed for random generator 
//     // srand(time(0)); 
  
//     // for(int i = 0; i<4; i++) 
//     //     cout<<rand()<<" "; 
//     // return 0; 
//     //cout<<rand()<<endl;
//     //cout<< rand()%1 <<endl;
//    int n;
//    cin>>n;
//    cout<<n;
//    if(n==42){
//    	    break;
//    } 
//    return 0;
// }
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<n<<endl;
// }

// #include<bits/stdc++.h>

// using namespace std ;

// #define ll long long 
// long long memo[10000];
// ll fibo(ll n){
// 	if(memo[n]){
// 		return memo[n] ;
// 	}
// }

// int main(){
// 	ll t , i ; 
// 	cin>>t ; 
// 	memo[0] = 1 ; 
// 	memo[1] = 1 ;
// 	while(t--){
// 		ll n;
// 		cin>>n;
// 		for(i = 0 ; i<n ; i++){
// 			cout<<fibo(i)<<" ";
// 		}
// 		cout<<endl;
// 	}
// }
// #include<bits/stdc++.h>
// using namespace std ;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int reverseNumber = 0 ;
// 	while(n>0){
// 		int lastDigit = n%10 ;
// 		reverseNumber = reverseNumber*10 + lastDigit;
// 		n = n / 10 ;
// 	}
// 	cout<<reverseNumber<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s;
// 	cin>>s;
// 	for(int i=0 ; i<s.size() ; i++){
// 		s[i] = tolower(s[i]);
// 	}
// 	int flag = 1 ;
// 	int n = s.size();
// 	for(int i=0 ; i<= n/2 ; i++){
// 		if(s[i] != s[n-i-1]){
// 			flag = 0 ; 
// 			//cout<<s[i]<<" "<<s[n-i-1];
// 			//break ;
// 		}//cout<<endl;
// 	}
// 	if(flag) cout<<s<<endl;
// 	else cout<<s<<" is not a palindrome"<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		int a[n] ; 
// 		for(int i=0 ; i<n ; i++){
// 			cin>>a[i] ; 
// 		}

// 		unordered_map<int,int> mp;
// 		for(int i=0 ; i<n ; i++){
// 			mp[a[i]]++;
// 		}
// 		int index = 0;
// 		for(int i=0 ; i<n ; i++){
// 			if(mp[a[i]] == 1){
// 				index = i;
// 			}
// 		}
// 		cout<< index + 1<<endl;
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
// 	int minElement = INT_MAX ;
// 	int minElementIndex = 0 ;
// 	for(int i=0 ; i<n ; i++){
// 		if(a[i] < minElement){
// 			minElement = a[i] ; 
// 			minElementIndex = i ;
// 		}
// 	}
// 	cout<<minElementIndex+1<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e5 + 10 ;
// int a[N];
// void merge(int l,int r , int mid){
// 	int l_sz = mid - l + 1 ;
// 	int L[l_sz + 1];
// 	int r_sz = r-mid;
// 	int R[r_sz + 1] ;  //for keeping INT_MAX value in order to compare
// 	for(int i=0 ; i<l_sz ; i++){
// 		L[i] = a[i+l];
// 	}	
// 	L[l_sz] = R[r_sz] = INT_MAX ;
// 	int l_i = 0 ;
// 	int r_i = 0 ;
// 	for(int i=l; i<=r ; i++){
// 		if(L[l_i] <= R[r_i]){
// 			a[i] = L[l_i];
// 			l_i++;
// 		}else{
// 			a[i] = L[r_i] ;
// 			r_i++;
// 		}
// 	}
// }

// void mergeSort(int l , int r){
// 	if(l==r) return ; 
// 	int mid = (l+r) / 2 ;
// 	mergeSort(l,mid);
// 	mergeSort(mid+1,r);
// 	merge(l,r,mid);
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}
// 	mergeSort(0,n-1);
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
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
// 		int ct = 0 ;
// 		while(n--){
// 			int x;
// 			cin>>x;
// 			if(x == 2) continue ;
// 			else ct++ ;
// 		}
// 		cout<<ct<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){
// 	int n,q;
// 	cin>>n>>q;
// 	int a[n] ; 
// 	for(int i=1 ; i<=n ; i++){
// 		cin>>a[i] ;
// 	}
// 	while(q--){
// 		int x;
// 		cin>>x;
// 		//cout<<x<<" ";
// 		int index = 0 ;
// 		for(int i=1 ; i<=n ; i++){
// 			if(x == a[i]) {
// 				index = i ;
// 				reverse(a,a+index);
// 				reverse(a+1,a+index);
// 				break;
// 			}
// 		}
// 		cout<<index<<" ";
// 	}
// }



//Merge Sort
// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e7 + 10 ; 
// int a[N] ;

// void merge(int l,int r,int mid){
// 	int l_sz = mid - l + 1 ;
// 	int L[l_sz+1];
// 	int r_sz = r - mid ; // r-(mid+1)-1
// 	int R[r_sz + 1] ;

// 	//Constructing Left Array
// 	for(int i=0 ; i<l_sz ; i++){
// 			L[i] = a[i+l] ; 
// 	}

// 	//Constructing Right Array
// 	for(int i=0 ; i<r_sz ; i++){
// 		R[i] = a[i+mid+1];
// 	}

// 	L[l_sz] = R[r_sz] = INT_MAX ;
// 	int l_i = 0 ;
// 	int r_i = 0 ;

// 	// Merging two arrays
// 	for(int i=l ; i<=r ; i++){
// 		if(L[l_i] <= R[r_i]){
// 			a[i] = L[l_i] ;
// 			l_i++;
// 		}else {
// 			a[i] = R[r_i] ;
// 			r_i++ ; 
// 		}
// 	}
// }
// void mergeSort(int l,int r){
// 	if(l==r) return ; // if l==r , there is only 1 element 
// 	int mid = (l+r)/2;
// 	mergeSort(l, mid); 
// 	mergeSort(mid + 1 , r) ;
// 	merge(l,r,mid);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	mergeSort(0,n-1);
// 	for(int i=0 ; i<n ;i++){
// 		cout<<a[i]<<" " ; 
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s; cin >> s;
//     int n = s.size();
//     for(int i = n-1; i >= 0; i--){
//         if(s[i] == '0'){
//             s.pop_back();
//         }
//         else break;
//     }
//     cout<<s<<endl;
// }

//Array of Vector Practice
// #include<bits/stdc++.h>
// using namespace std ; 

// void printVec(vector<string> &v){
// 	cout<<"Size : "<<v.size()<<endl;
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<v[i]<<" " ;
// 	}cout<<endl;
// }
// int main(){
// 	int N;
// 	cin>>N;
// 	vector<string> v[N] ;
// 	for(int i=0 ; i<N ; i++){
// 		int n;
// 		cin>>n;
// 		while(n--){
// 			string s;
// 			cin>>s;
// 			v[i].push_back(s) ;
// 		}
// 	}
// 	for(int i=0 ; i<N ; i++){
// 		printVec(v[i]) ; 
// 	}
// 	cout<<v[0][0];
// }

// #include<bits/stdc++.h>
// using namespace std ;
// void printVec(vector<int> &v){
// 	cout<<"Size : "<<v.size()<<endl;
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<v[i]<<" ";
// 	}cout<<endl;
// }
// int main(){
// 	int N;
// 	cin>>N;
// 	vector<vector<int>> v;  //vector of vector
// 	for(int i=0 ; i<N ; i++){
// 		int n;
// 		cin>>n;
// 		vector<int> temp;
// 		for(int j=0 ; j<n ; j++){
// 			int x ;
// 			cin>>x ;
// 			temp.push_back(x) ;
// 		}
// 		v.push_back(temp) ;
// 	}
// 	for(int i=0 ; i<v.size() ; i++){
// 		printVec(v[i]) ;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// void printVector(vector<int> &v){
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<v[i]<<" ";
// 	}cout<<endl;
// }
// int main(){
// 	int N;
// 	cin>>N;
// 	vector<vector<int>> v ; 
// 	for(int i=0 ; i<N ; i++){
// 		int n;
// 		cin>>n;
// 		vector<int> temp ; 
// 		for(int j=0 ; j<n ; j++){
// 			int x;
// 			cin>>x;
// 			temp.push_back(x) ;
// 		}
// 		v.push_back(temp) ; 
// 	}
// 	for(int i=0 ; i<v.size() ; i++){
// 		printVector(v[i]) ; 
// 	}
// }

//Merge Sort 
// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e7 + 10 ;
// int a[N] ;

// void merge(int l ,int r ,int mid){
// 	int l_sz = mid - l + 1 ;
// 	int L[l_sz+1] ;
// 	int r_sz = r-mid ; // r - (mid + 1) - 1
// 	int R[r_sz+1] ; 
// 	for(int i=0 ; i<l_sz ; i++){
// 		L[i] = a[i+l] ;
// 	}
// 	for(int i=0 ; i<r_sz ; i++){
// 		R[i] = a[i+mid+1];
// 	}
// 	L[l_sz] = R[r_sz] = INT_MAX ;
// 	int l_i = 0 ;
// 	int r_i = 0 ; 

// 	//Merging two arrays
// 	for(int i=l ; i<=r ; i++){
// 		if(L[l_i]<= R[r_i]){
// 			a[i] = L[l_i];
// 			l_i++;
// 		}else{
// 			a[i] = R[r_i];
// 			r_i++ ;
// 		}
// 	}
// }

// void mergeSort(int l,int r){
// 	if(l==r) return ;
// 	int mid = (l+r)/2;
// 	mergeSort(l,mid) ; 
// 	mergeSort(mid+1 , r) ;
// 	merge(l,r,mid) ; 
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	mergeSort(0,n-1);
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" " ;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int hsh[30] ;
// char s[310000];
// int main(){
// 	int n,ans = 0;
// 	scanf("%d",&n);
// 	scanf("%s",s+1) ;
// 	int len = strlen(s+1);
	
// 	for(int i=1 ; i<=len ; i++){
// 		if(s[i]>='a' && s[i]<='z'){
// 			hsh[s[i]-'a']++;
// 		}else{
// 			if(hsh[s[i]-'A']>0) hsh[s[i]-'A']--;
// 			else ans++;
// 		}
// 	}
// 	printf("%d\n",ans) ;
// 	return 0 ; 
// }



// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n,ans = 0 ;
// 	cin>>n;
// 	string s;
// 	cin>>s;
// 	int ln = s.size() ; 
// 	map<char,int> mp ;
// 	for(int i=0 ; i<ln ; i++){
// 		int x = s[i] ;
// 		if(islower(x)){
// 			mp[x]++ ;
// 		}else{
// 			x = tolower(x) ;
// 			if(mp[x]>0){
// 				mp[x]--;
// 			}else ans++;
// 		}
// 	}cout<<ans;
// }

//Monk and the Magical Candy Bags
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,k;
// 		cin>>n>>k;
// 		multiset<long long> s;
// 		while(n--){
// 			int x;
// 			cin>>x;
// 			s.insert(x) ; 
// 		}
// 		//method one of writing iterator
// 		// for(auto it : s){
// 		// 	cout<<it<<" ";
// 		// }

// 		//method two of writing iterator
// 		// for(auto it = s.begin() ; it != s.end() ; it++){
// 		// 	cout<<*it<<" ";
// 		// }
// 		long long total_candies = 0 ;
// 		for(int i=0 ; i<k ; i++){
// 			auto last_it = --s.end() ; 
// 			long long candy_ct = *last_it ;
// 			total_candies += candy_ct ;
// 			s.erase(last_it) ;
// 			candy_ct=candy_ct/2;
// 			s.insert(candy_ct) ;
// 		}
// 		cout<<total_candies<<endl;
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
// 	int mxd = INT_MIN ;
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=0 ; j<n ; j++){
// 			if(a[i] == a[j]){
// 				int d = j-i;
// 				mxd = max(mxd , d) ;
// 			}
// 		}
// 	}
// 	cout<<mxd ;
// 	//O(N*N)
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	double ca = (double) a ;
// 	double cb = (double) b ; 
// 	double x = (ca/cb);
// 	cout<<x<<endl;
// }


/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s;
// 	cin>>s;
	// int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0 ;
	// for(int i=0 ; i<s.size() ; i++){
	// 	if(s[i] == '0') a++ ;
	// 	else if(s[i] == '1') b++ ;
	// 	else if(s[i] == '2') c++ ;
	// 	else if(s[i] == '3') d++ ;
	// 	else if(s[i] == '4') e++ ;
	// 	else if(s[i] == '5') f++ ;
	// 	else if(s[i] == '6') g++ ;
	// 	else if(s[i] == '7') h++ ;
	// 	else if(s[i] == '8') j++ ;
	// 	else k++;
	// } 
	// cout<<s[s.size()-1]<<endl;
	// cout<<'0'<<" "<<a<<endl;
	// cout<<'1'<<" "<<b<<endl;
	// cout<<'2'<<" "<<c<<endl;
	// cout<<'3'<<" "<<d<<endl;
	// cout<<'4'<<" "<<e<<endl;
	// cout<<'5'<<" "<<f<<endl;
	// cout<<'6'<<" "<<g<<endl;
	// cout<<'7'<<" "<<h<<endl;
	// cout<<'8'<<" "<<j<<endl;
	// cout<<'9'<<" "<<k<<endl;
// 	for(int i=0 ; i<s.size() ; i++){
// 		cout<<s[i]<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// void nonDuplicate(int a[] , int n){
// 	set<int> s ;
// 	for(int i=0 ; i<n ; i++){
// 		s.insert(a[i]) ;
// 	}
// 	for(auto it = s.begin() ; it!=s.end() ; it++){
// 		cout<<*it<<" ";
// 	}
// } 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	nonDuplicate(a,n) ;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// vector<int> printNonduplicate(int a[],int n){
// 	vector<int> v ;
// 	for(int i=0 ; i<n ; i++){
// 		if(a[i] != a[i+1]) v.push_back(a[i]) ;
// 		else continue ;
// 	}
// 	// for(int i=0 ; i<v.size() ; i++){
// 	// 	cout<<v[i]<<" ";
// 	// }
// 	return v ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	vector<int> v = printNonduplicate(a,n) ;
// 	for(int i=0 ; i<v.size() ; i++){
// 		cout<<v[i]<<" ";
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int removeDuplicate(int a[],int n){
// 	int i=0 ; 
// 	for(int j=1 ; j<n ; j++){
// 		if(a[j] != a[i]){
// 			i++ ; 
// 			a[i] = a[j] ;
// 		}
// 	}
// 	return i+1 ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	removeDuplicate(a,n) ; 
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int removeDuplicate(int a[] , int n){
// 	if(n==1 || n==0) return n ; 
// 	int temp[n] ; 
// 	int count = 0 ; 
// 	for(int i=0 ; i<n-1 ; i++){
// 		if(a[i] != a[i+1]) {
// 			temp[count++] = a[i] ;
// 		}
// 	}
// 	temp[count++] = a[n-1] ;
// 	for(int i=0 ; i<count ; i++){
// 		a[i] = temp[i] ;
// 	}
// 	return count ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	int count = removeDuplicate(a,n) ;
// 	for(int i=0 ; i<count ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int removeDuplicate(int a[] , int n){
// 	int count = 0 ;
// 	for(int i=1 ; i<n ; i++){
// 		if(a[i] != a[count]){
// 			count++ ;
// 			a[count] = a[i] ;
// 		}
// 	}
// 	return count+1 ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}
// 	int x = removeDuplicate(a,n) ;
// 	for(int i=0 ; i<x ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }



// #include<bits/stdc++.h>
// using namespace std;
// void reverseGroup(int a[] , int n , int k){
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=k-1 ; j>=0 ; j--){
// 			a[i] = a[j];
// 		}
// 	}
// } 
// int main(){
// 	int n,k;
// 	cin>>n>>k;
// 	int a[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i] ;
// 	}
// 	reverseGroup(a,n,k);
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// const int N = 1e7 + 10 ; 
// int a[N] ;
// void merge(int l,int r,int mid){
// 	int l_sz = mid-l+1 ;
// 	int L[l_sz + 1] ;
// 	int r_sz = r-mid ;
// 	int R[r_sz + 1] ;
// 	for(int i=0 ; i<l_sz ; i++){
// 		L[i] = a[i+l] ;
// 	}
// 	for(int i=0 ; i<r_sz ; i++){
// 		R[i] = a[i+mid+1];
// 	}

// 	R[r_sz] = L[l_sz] = INT_MAX ;
// 	int l_i = 0 , r_i = 0 ;
// 	for(int i=l ; i<=r ; i++){
// 		if(L[l_i] <= R[r_i]){
// 			a[i] = L[l_i] ;
// 			l_i++ ;
// 		}else{
// 			a[i] = R[r_i] ;
// 			r_i++;
// 		}
// 	}
// } 
// void merge_sort(int l , int r){
// 	if(l==r) return ;
// 	int mid = (l+r) / 2 ;
// 	merge_sort(l,mid) ;
// 	merge_sort(mid+1 , r) ;
// 	merge(l,r,mid) ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>a[i];
// 	}
// 	merge_sort(0,n-1);
// 	for(int i=0 ; i<n ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }



// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int a[3] ;
// 	for(int i=0 ; i<3 ; i++){
// 		cin>>a[i] ;
// 	}
// 	long long s ;
// 	cin>>s;
// 	int p1,p2 ;
// 	cin>>p1>>p2;
// 	if(p1 != p2 || p1<=1 || p2 <= 3){
// 		while(s--){
// 		int temp = a[p1-1];
// 		a[p1-1] = a[p2-1];
// 		a[p2-1] = temp ;
// 		}
// 	}

// 	for(int i=0 ; i<3 ; i++){
// 		cout<<a[i]<<" ";
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ; 

// bool should_i_swap(pair<int,int> a,pair<int,int> b){  //for increasing order
// 	if(a>b) return true ;
// 	return false ;
// }

// bool should_i_swap2(pair<int,int> a , pair<int,int> b){   //for decreasing order
// 	if(a<b) return true ;
// 	return false ;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<pair<int,int>> v(n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i].first>>v[i].second ;
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			if(should_i_swap2(v[i],v[j])){
// 				swap(v[i] , v[j]) ;
// 			}
// 		}
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		cout<<v[i].first<<" "<<v[i].second<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// bool should_i_swap(int a,int b){  //decreasing order
// 	if(a<b) return true ;
// 	return false;
// }

// bool should_i_swap2(int a,int b){ //increasing order
// 	if(a>b) return true ;
// 	else return false ; 
// }

// bool should_i_swap_pair(pair<int,int> a , pair<int,int> b){   //decreasing order
// 	if(a<b) return true;
// 	return false ;
// }

// bool should_i_swap_pair2(pair<int,int>a , pair<int,int>b){  //increasing order
// 	if(a>b) return true ;
// 	return false  ;
// }

// bool should_i_swap_pair3(pair<int,int> a , pair<int,int> b){    //increasing order
// 	if(a.first != b.first){
// 		if(a.first > b.first) return true ;
// 		else return false ;
// 	}else{
// 		if(a.second < b.second) return true ;
// 		else return false ; 
// 	}
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<pair<int,int>> v(n) ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>v[i].first>>v[i].second ;
// 	}
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i+1 ; j<n ; j++){
// 			if(should_i_swap_pair3(v[i],v[j])){
// 				swap(v[i] , v[j]);
// 			}
// 		}
// 	}

// 	for(int i=0 ; i<n ; i++){
// 		cout<<v[i].first<<" "<<v[i].second<<endl;
// 	}
// }


// #include <iostream>
// using namespace std;
// int swap(int a , int b){
//     int temp = a;
//     a = b ; 
//     b = temp ;
//     return a,b;
// }
// int main() {
    //Write your code here
	// int a,b;
 //    cin>>a>>b;
 //    swap(a,b) ;
 //    cout<<a<<"\n"<<b;
 //    return 0;

    // int c = 1 ;
    // int d = c++;
    // cout<<c<<" "<<d;

    //cout<<7--2<<endl;


 //    int x;
	// int y;
	// int z;
	// x = 3;
	// y = 4;
	// z = ++x * y--;
	// cout<<x<<" "<<y<<" "<<z;


// 	int a = 10, b = 5, c = 5;
//     int d;
//     d = b + c == a;
//     cout << d;
// }



// #include<iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int b = 5;

//     int c = a + b * 10;

//     cout << c;

// }

// #include <iostream>
// using namespace std;
// int main() {
//     int x, y;
//     y = 100;
//     x = (y + 10, 99 + y);
//     cout << "With brackets value of x :" << x << endl;
//     x = y + 10, 99 + y;
//     cout << "Without brackets value of x :" << x;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// string reverseWordWide(string &input){
// 	vector<string> temp ;
// 	string str="" ; 
// 	for(int i=0 ; i<input.size() ; i++){
// 			temp.push_back(input[i]) ;
// 			//str.push_back(input[i]);
// 	}
// 	//temp.push_back(str) ;

// 	string ans="" ;
// 	for(int i=temp.size()-1 ; i>=0 ; i--){
// 		ans += temp[i] ;
// 	}
// 	return ans ;

// }
// int main() {
// 	string s ;
// 	getline(cin,s) ; 
// 	string ans = reverseWordWide(s) ;
// 	cout<<ans<<" ";
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	string s ;
// 	getline(cin,s) ;
// 	string ans = reverseWordWise(s) ;
// 	cout<<ans<<endl;
// }


// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void reverseStringWordWise(string input)
// {
//     //Write your code here
//     vector<string> temp ;
//     string str = "" ;
//     for(int i=0 ; i<input.size() ; i++){
//         if(input[i] == ' '){
//             temp.push_back(str) ;
//             str = ""; 
//         }else{
//             str.push_back(input[i]) ;
//         }
// 	}
// 	temp.push_back(str) ;
    
//    for(int i=temp.size()-1 ; i>=0 ; i--){
//        cout<<temp[i]<<" ";
//    }
// }

// int main()
// {
//     string s;
//     cin >> s;
//     getline(cin, s);
//     reverseStringWordWise(s);
//     //cout << ans << endl;
// }



// #include<bits/stdc++.h>
// using namespace std ; 
// void reverseStringWordWise(string s){
// 	vector<string> temp ;
// 	string str = "" ;
// 	for(int i=0 ; i<s.size() ; i++){
// 		if(s[i] == ' '){
// 			temp.push_back(str) ; 
// 			str = "" ;
// 		}else{
// 			str.push_back(s[i]) ;
// 		}
// 	}
// 	temp.push_back(str) ;

// 	for(int i=temp.size()-1 ; i>=0 ; i--){
// 		cout<<temp[i]<<" ";
// 	}
// }
// int main(){
// 	string s ;
// 	getline(cin,s) ;
// 	reverseStringWordWise(s) ;
// }