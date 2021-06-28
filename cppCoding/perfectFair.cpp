// #include<bits/stdc++.h>
// #define ll long long
// #define vll vector<ll>
// #define llin(a) ll a; cin>>a;
// #define llin2(a,b) ll a,b; cin>>a>>b;
// #define llin3(a,b,c) ll a,b,c; cin>>a>>b>>c;
// #define fulll(v) v.begin(),v.end()
// #define vecin(n, v) for(ll i=0; i<n;i++) cin>>v[i];
// #define vecout(n, v) for(ll i=0; i<n;i++) cout<<v[i]<<" "; cout<<endl;
// #define rep(i, s, n) for(ll i=s;i<n;i++)
// #define endl "\n"
// #define test cout<<"test line"<<endl;
// #define swapper void swap(ll *a, ll *b){ll t=*a;*a=*b;*b=t;}
// #define pll pair<ll,ll>
// #define vpll vector<pll >
// #define mod 1000000007
// using namespace std;



// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     bool sq[2001]={false};
//     rep(i,1,sqrt(2001))
//     {
//         if(i*i<=2001)
//             sq[i*i]=true;
//         if(i*i*i<=2001)
//             sq[i*i*i]=true;
//     }

//     llin(t);
//     while(t--)
//     {
//         llin(n);
//         vll v;
//         unordered_map<ll,ll > ump;
//         rep(i,0,n)
//         {
//             llin(a);
//             ump[a]++;
//         }
//         for(auto i:ump)
//             v.push_back(i.first);
//         n=v.size();
//         ll c=0;
//         rep(i,0,n)
//         {
//             ll f=ump[v[i]];
//             if(f>1&&sq[2*v[i]])
//                 c+=(f*(f-1))/2;
//             for (ll j=i+1; j<n; j++)
//             {
//                 if (sq[v[i]+v[j]])
//                     c+=(f*ump[v[j]]);
//             }
//         }
//         cout<<c<<endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std  ;
bool init[2020];
int main(){
    int t;
    cin>>t;
    for(int i=2 ; i*i<2000 ; i++ ){
        if(i*i<=2000){
            init[i*i] = 1 ;
        }
        if(i*i*i<=2000){
            init[i*i*i] = 1 ; 
        }
    }

    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> m;
        vector<int> v;
        m.clear();
        v.clear();
        for(int i=0 ; i<n ; i++){
            int x;
            cin>>x;
                m[x]++;
        }
        for(auto it=m.begin() ; it!=m.end() ; it++){
            v.push_back(it->first);
        }
        int ans = 0 ;
        for(int a=0 ; a<v.size() ; a++){
            int value = m[v[a]];
            if(value>1 && init[2*v[a]]==1){
                ans += (value*(value-1))/2;
            }
            for(int b=a+1 ; b<v.size() ; b++){
                if(init[v[a]+v[b]]==1){
                    ans += value * m[v[b]];
                }
            }
        }
        cout<<ans<<endl;
    }
}