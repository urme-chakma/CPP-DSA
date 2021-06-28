// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	string s;
// 	cin>>s ;
// 	map<char,int> mp;
// 	for(int i=0 ; i<s.size() ; i++){
// 		mp[s[i]]++ ;
// 	}
// 	int ans = INT_MIN ;

// 	for(auto &pr : mp){
// 		ans = max(ans,pr.second);
		
// 	}
// 	if(ans == 1) cout<<0<<endl;
// 	else cout<<ans<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s ;
// 	cin>>s;
// 	vector<char> vUp ;
// 	vector<char> vLo ;
// 	for(int i=0 ; i<s.size() ; i=i+2){
// 		vLo.push_back(s[i]) ;
// 	} 
// 	for(int i=1 ; i<s.size() ; i=i+2){
// 		vUp.push_back(s[i]) ;
// 	}
// 	unordered_map<char,int> mp;

// 	for(auto x : vUp){
// 		cout<<x<<" ";
// 	}cout<<endl;
// 	for(auto x : vLo){
// 		//mp[x]++;
// 		cout<<x<<" ";
// 	}
// 	// for(auto x : mp){
// 	// 	cout<<x.first<<" "<<x.second<<endl;
// 	// }

// }

// #include<bits/stdc++.h>
// using namespace std ; 
// const int N = 2e6 + 100;
// int main(){
// 	int n;
// 	cin>>n;
// 	char loc[N] ;
// 	scanf("%s", loc);   //taking the input string as character
// 	map<int,int> m ;
// 	int rooms = (n-1)*2 ;
// 	int ans = 0 ;
// 	for(int i=0 ; i<rooms ; i+=2){
// 		m[loc[i]-'a']++;    //odd possition's elements
// 		if(m[loc[i+1]-'A']==0){   //even possition's elements
// 			ans++;
// 		}else {
// 			m[loc[i+1]-'A']--;
// 		}
// 	}
// 	cout<<ans<<endl;
// }


// 

//#include<bits/stdc++.h>
// using namespace std ; 
// int main() {
// 	int n;
// 	cin>>n;
// 	string s ;
// 	cin>>s; 

// }

// #include <vector>
// #include <list>
// #include <map>
// #include <set>
// #include <deque>
// #include <queue>
// #include <stack>
// #include <bitset>
// #include <algorithm>
// #include <functional>
// #include <numeric>
// #include <utility>
// #include <sstream>
// #include <fstream>
// #include <iostream>
// #include <iomanip>
// #include <cstdio>
// #include <cmath>
// #include <cstdlib>
// #include <cctype>
// #include <string>
// #include <cstring>
// #include <string.h>
// #include <cassert>
// #include <climits>
 
// using namespace std;
 
// const int oo = int(2e9) + 9;
// const double eps = 1e-9;
// const double pi = 3.14159265358979323846264338327950;
 
// #define debug printf("ERROR DETECTED...!!\n");
// #define debug1(p)        cerr << #p << ": " << p << endl;
// #define debug2(p, q)     cerr << #p << ": " << p << " | " << #q << ": " << q << endl;
// #define debug3(p, q, r)  cerr << #p << ": " << p << " | " << #q << ": " << q << " | " << #r << ": " << r << endl;
 
// #define  takeinput() freopen("ip.txt","r",stdin);
// #define  takeoutput() freopen("op.txt","w",stdout);
 
// typedef vector < int > vi;
// typedef pair < int, int> ii;
// typedef vector < ii > vii;
 
// #define trvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
// #define trvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
 
// typedef long long int64;
// typedef double float64;
 
// //START
 
// int main() {
//     string str;
//     int x;
//     cin>>x;
//     cin>>str;
//     int sz = str.size();
//     int has[30];
//     memset(has,0,sizeof(has));
//     int ans = 0;
//     for(int i=0;i<sz;i++) {
//         if(i%2 == 0) {
//             has[str[i]-'a']++;
//         }
//         else {
//             if(has[tolower(str[i])-'a'])has[tolower(str[i])-'a']--;
//             else ans++;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>

// using namespace std;

// int has[30]; //has [i] = the number of the i-th key already owned 
// char s[310000];

// int main()
// {
//     int n,ans=0;
//     scanf("%d",&n);
//     scanf("%s",s+1);     //input string
//     int len=strlen(s+1);
//     for(int i=1;i<=len;i++)
//     {
//         if(s[i]>='a'&&s[i]<='z') has[s[i]-'a']++;
//         else
//         {
//             if(has[s[i]-'A']>0) has[s[i]-'A']--;
//             else ans++;
//         }
//     }
//     printf("%d\n",ans);
//     return 0;
// }
/////////////////////////////////////////////////////////////////
// #include<bits/stdc++.h>
// using namespace std ;
// int hsh[30] ;
// char s[310000];
// int main() {
// 	int n,ans=0;
// 	scanf("%d",&n);
// 	scanf("%s",s+1);
// 	int len = strlen(s+1);
	
// 	for(int i=1 ; i<=len ; i++){
// 		if(s[i]>='a' && s[i]<='z'){
// 			hsh[s[i]-'a']++;
// 		}else{
// 			if(hsh[s[i]-'A']>0) hsh[s[i]-'A']--;
// 			else ans++;
// 		}
// 	}
// 	printf("%d\n",ans );
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int hsh[26];
// int main() {
//     int n;
//     string s;
//     cin >> n;
//     cin >> s;
//     int minstep = 0;
//     char cl, cu;
//     cl = 'a';
//     cu = 'A';
//     for (int i = 0; i < s.length(); ++i) {
//         int idx;
//         if (i % 2 == 0) {
//             idx = s[i] - cl;
//             hsh[idx]++;
//         } else {
//             idx = s[i] - cu;
//             if (hsh[idx] == 0) {
//                 minstep++;
//             } else {
//                 hsh[idx]--;
//             }
//         }
//     }
//     cout << minstep;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define sf scanf
// #define pf printf
// #define ssf sscanf
// #define spf sprintf
// #define fsf fscanf
// #define fpf fprintf
// #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
// #define scase sf ("%d",&tc)
// #define sn sf ("%d",&n)
// #define whilecase while (tc--)
// #define eof while (cin >> n)
// #define forloop for (pos=1; pos<=tc; pos++)
// #define arrayloop (i=0; i<n; i++)
// #define cinstr cin >> str
// #define getstr getline (cin,str)
// #define pcase pf ("Case %d: ",pos)
// #define pii pair <int,int>
// #define pb push_back
// #define in insert
// #define llu unsigned long long
// #define lld long long
// #define U unsigned int
// #define endl "\n"

// const int MOD = 1000000007;
// const int MAX = 1000005;

// int main (void)
// {
//     /*
//     freopen ("input.txt","r",stdin);
//     freopen ("output.txt","w",stdout);
//     */

//     int n,i,ans;
//     char str[200000],x;

//     while (sf ("%d",&n) != EOF)
//     {
//         n = 2*n-2;

//         sf ("%s",str);

//         map <char,int> mp;
//         ans = 0;

//         for (i=0; i<n; i++)
//         {
//             x = str[i];

//             if (islower(x))
//                 mp[x]++;
//             else
//             {
//                 x = tolower(x);

//                 if (mp[x] > 0)
//                     --mp[x];
//                 else
//                     ++ans;
//             }
//         }

//         pf ("%d\n",ans);
//     }

//     return 0;
// }

//#include<bits/stdc++.h>
// using namespace std; 
// int hsh[28];
// int main(){
// 	int n;
// 	cin>>n;
// 	string s;
// 	cin>>s;
// 	int ans = 0; 
// 	for(int i=0 ; i<s.length() ; i++){
// 		if(s[i]>='a' && s[i]<='z'){
// 			hsh[s[i]-'a']++;
// 		}else{
// 			if(hsh[s[i]-'A']==0){
// 				ans++;
// 			}else{
// 				hsh[s[i]-'A']--;
// 			}
// 		}
// 	}
// 	cout<<ans<<endl;
// }

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ln = s.size() ; 
	int ans = 0 ; 
	map<char,int> m;
	for(int i=0 ; i<ln ; i++){
		char x = s[i] ;
		if(islower(x)){
			m[x]++;
		}else{ 
			x = tolower(x);
			if(m[x]>0){
				m[x]--;
			}
			else ans++;
		}
	}cout<<ans<<endl;
}
