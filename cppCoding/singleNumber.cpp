#include<bits/stdc++.h>
using namespace std ; 

//C++ solution using map
class solution{
public:
	int singleNumber(vector<int>& nums){
		map<int,int>mp;
		for(auto i : nums) mp[i]++;
		for(auto i:mp) if(i.second == 1) return i.first ; 
		return 0 ; 
	}
};

//C++ solution using XOR
class Solutin{
public:
	int singleNumber(vector<int>& nums){
		int ans = 0 ; 
		for(auto i : nums){
			ans^=i;
		}
		return ans ; 
	}
};
int main()
{
	vector<int> a; 
	return 0 ; 
}