# include<bits/stdc++.h>

using namespace std;

int main()

{

int t,flag=0;

cin>>t;

char s[100];

while(t--)

{

flag=0;

char h[26]={0};

cin>>s;

for(int i=0;s[i]!='\0';i++)

{

h[s[i]-'a']++;

}

for(int i=0;i<26;i++)

{

if(h[i]>=2)

{

flag=1;

}

}


 

if(flag==1)

{

cout<<"Yes"<<endl;

}else cout<<"No"<<endl;


 

}

}