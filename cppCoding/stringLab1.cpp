// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	string s ;
// 	getline(cin,s) ;
// 	int count[26] = {0} ;
// 	char ans  ;
// 	int mx = INT_MIN ;
// 	for(int i=0 ; i<s.size() ; i++){
// 		count[s[i] - 'a']++ ;
// 	}

// 	for(int i=0 ; i<26 ; i++){
// 		if(count[i] > mx){
// 			mx = count[i] ;
// 			ans = 'a' + i ;
// 		}
// 	}
// 	cout<<ans<<endl ;

// 	for(int i=0 ;  i<26 ; i++){
// 		cout<<i<<" "<<count[i]<<endl ;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int countwords(string input){
// 	if(input.size() == 0) return 0 ; 
// 	int count = 1 ;
// 	for(int i=0 ; i<input.size() ; i++){
// 		if(input[i] == ' '){
// 			count++ ;
// 		}
// 	}
// 	return count ;
// }
// int main(){
// 	string s ;
// 	getline(cin,s) ;
// 	int output = countwords(s) ;
// 	cout<<output<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s ;
// 	//getline(cin,s) ;
// 	cin>>s;
// 	for(int i=0 ; i<s.size() ; i++){
// 		for(int j=i ; j<s.size() ; j++){
// 			for(int k=i ; k<=j ; k++ ){
// 				cout<<s[k];
// 			}cout<<endl;
// 		}
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ;
// string reverseStringWordWise(string s){
// 	vector<string> temp ;
// 	string str = "" ;
// 	for(int i=0 ; i<s.size() ; i++){
// 		if(s[i] == ' '){
// 			temp.push_back(str) ;
// 			str = "";
// 		}else str.push_back(s[i]) ;
// 	}
// 	temp.push_back(str)

// 	for(int i=0 ; i<temp.size() ; i++){
// 		cout<<temp[i]<<" ";
// 	} 
// }
// int main(){
// 	string s;
// 	//cin>>s;
// 	getline(cin,s) ;
// 	string ans = reverseStringWordWise(s) ;
// 	//cout<<ans<<endl;
// }



//C++ program to reverse a string
// #include <bits/stdc++.h>
// using namespace std;

// // Function to reverse words*/
// void reverseWords(string s)
// {
	
// 	// temporary vector to store all words
// 	vector<string> tmp;
// 	string str = "";
// 	for (int i = 0; i < s.length(); i++)
// 	{
		
// 		// Check if we encounter space
// 		// push word(str) to vector
// 		// and make str NULL
// 		if (s[i] == ' ')
// 		{
// 			tmp.push_back(str);
// 			str = "";
// 		}

// 		// Else add character to
// 		// str to form current word
// 		else
// 			str.push_back(s[i]);
// 	}

// 	// Last word remaining,add it to vector
// 	tmp.push_back(str);

// 	// Now print from last to first in vector
// 	int i;
// 	for (i = tmp.size() - 1; i >= 0; i--)
// 		cout << tmp[i] << " ";
// 	// Last word remaining,print it
// 	//cout << tmp[0] << endl;
// }

// // Driver Code
// int main()
// {
// 	string s ;
// 	getline(cin,s) ;
// 	reverseWords(s);
// 	return 0;
// }


// // #include<bits/stdc++.h>
// // using namespace std ;
// // string reverseWordWise(string input){
// // 	vector<string> temp ;
// // 	string str = "" ;
// // 	for(int i=0 ; i<input.size() ; i++){
// // 		if(input[i] == ' '){
// // 			temp.push_back(str) ; 
// // 			str = "";
// // 		}else{
// // 			str.push_back(input[i]) ;
// // 		}
// // 	}

// // 	temp.push_back(str) ; 

// // 	int i ; 
// // 	for(i=temp.size()-1 ; i>=0 ; i--){
// // 		return temp[i] ; 
// // 	}
// // 	return temp[0] ;
// // }
// // int main(){
// // 	string s;
// // 	getline(cin,s);
// // 	string ans = reverseWordWise(s) ;
// // 	cout<<ans<<endl;
// // }



// #include <iostream>
// #include <vector>
// using namespace std;

// string reverseStringWordWise(string input)
// {
//     vector<string> words;
//     int n = input.size();
//     string word;
//     // Extract each word
//     for (int i = 0; i < n; i++)
//     {
//         if (input[i] == ' ')
//         {
//             words.push_back(word);
//             word = "";
//         }
//         else
//         {
//             word.push_back(input[i]);
//         }
//     }
//     words.push_back(word);
    
//     // Reverse the words in the sentence
//     int i = 0, j = words.size() - 1;
//     while (i < j)
//     {
//         swap(words[i], words[j]);
//         i++;
//         j--;
//     }

//     // Append back the words
//     string ans;
//     for (int i = 0; i < words.size(); i++)
//     {
//         ans.append(words[i]);
//         ans.push_back(' ');
//     }
//     return ans;
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     string ans = reverseStringWordWise(s);
//     cout << ans << endl;
// }


// #include<bits/stdc++.h>
// using namespace std ; 

// string reverseWordWise(string input){
//     vector<string> words ;
//     string word ;
//     for(int i=0 ; i<input.size() ; i++){
//         if(input[i] == ' '){
//             words.push_back(word) ;
//             word = "" ;
//         }else {
//             word.push_back(input[i]) ;
//         }
//     }
//     words.push_back(word) ;

//     int i=0 , j=words.size()-1 ;
//     while(i<j){
//         swap(words[i],words[j]) ;
//         i++ ; 
//         j--;
//     }

//     string ans ;
//     for(int i=0 ; i<words.size() ; i++){
//         ans.append(words[i]) ; 
//         ans.push_back(' ') ;
//     }
//     return ans ;
// }
// int main(){
//     string s;
//     getline(cin,s) ;
//     string ans = reverseWordWise(s) ;
//     cout<<ans<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// string reverseWordWise(string &input){
//     vector<string> words ;
//     string word ;
//     for(int i=0 ; i<input.size() ; i++){
//         if(input[i] == ' '){
//             words.push_back(word) ;
//             word = "" ;
//         }
//         else{
//             word.push_back(input[i]) ;
//         }
//     }

//     words.push_back(word) ;

//     string ans ;
//     for(int i=words.size()-1 ; i>=0 ; i--){
//         ans.append(words[i]) ;
//         ans.push_back(' ') ;
//     }

//     return ans ;
// }
// int main(){
//     string s;
//     getline(cin,s) ;
//     string ans = reverseWordWise(s) ;
//     cout<<ans<<endl;
// }



// // #include <iostream>
// // #include <cstring>
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 10 ;
// int array[N] ; 
// bool isPermutation(char input1[], char input2[]) {
//     // Write your code here
//     int n1 = input1.size() ;
//     int n2 = input2.size() ; 
//     if(n1 != n2) return false ;

//     for(int i=0 ; i<n1 ; i++){
//         if()
//     }
// }

// int main() {
//     int size = 1e6;
//     // char str1[size];
//     // char str2[size];
//     string str1 , str2 ;
//     cin >> str1 >> str2;
//     cout << (isPermutation(str1, str2) ? "true" : "false");
// }


// #include<bits/stdc++.h>
// using namespace std ;

// const int N = 1e6 + 10 ; 
// int a[N] ;
// bool isPermutation(string input1 , string input2){
//     if(input1.size() != input2.size()) return false ;
//     for(int i=0 ; i<input1.size() ; i++){
//         a[input1[i] - 'a']++ ;
//     }

//     for(int i=0 ; i<input2.size() ; i++){
//         if(a[input2[i] - 'a'] == 0) {
//             return false;
//             break ;
//         }
//     }
//     return true ;
// } 
// int main(){
//     string str1 , str2 ;
//     cin>>str1>>str2 ;
//     bool flag = isPermutation(str1 , str2) ;
//     if(flag == 1){
//         cout<<"true";
//     }else{
//         cout<<"false" ;
//     }
// }



// #include <iostream>
// #include <cstring>
// #include<bits/stdc++.h>

// using namespace std;

// bool isPermutation(char *input1[], char *input2[]) {
//     // Write your code here
//     int input1_size = sizeof(input1)/sizeof(input1[0]);  
// }

// int main() {
//     int size = 1e6;
//     char str1[size];
//     char str2[size];
//     cin >> str1 >> str2;
//     cout << (isPermutation(str1, str2) ? "true" : "false");
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
//     char arr[100] = "apple" ;
//     int i=0 ;
//     while(arr[i] != '\0'){
//         cout<<arr[i]<<" ";
//         i++ ;
//     }
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isPermutation(char input1[], char input2[]) {
//     // Write your code here
// }

// int main() {
//     int size = 1e6;
//     char str1[size];
//     char str2[size];
//     cin >> str1 >> str2;
//     //cout << (isPermutation(str1, str2) ? "true" : "false");
//     cout<<str1<<" "<<str2<<endl;
// }


// //palindrome or not 
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
//     int n;
//     cin>>n ; 
//     char array[n+1] ;
//     cin>>array ;
//     bool check = 1 ;
//     for(int i=0 ; i<n ; i++){
//         if(array[i] != array[n-1-i]){
//             check = 0 ;
//             break ;
//         }
//     }
//     if(check) cout<<"The word is a palindrome" ;
//     else cout<<"The word is not a palindrome" ;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// const int N = 26 ;
// int a[N] = {0};
// bool isPermutation(char input1[], char input2[]) {
//     // Write your code here
//     return input1 != input2 ;
//     int i=0 ;
//     while(input1[i] != '\0'){
//         a[input1[i] - 'a']++ ; 
//         i++ ; 
//     }

// }

// int main() {
//     // int size = 1e6;
//     // char str1[size];
//     // char str2[size];
//     string str1 , str2 ;
//     cin >> str1 >> str2;
//     //cin.ignore() ; 
//     cout << (isPermutation(str1, str2) ? "true" : "false");
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// bool isPermutation(string s1 , string s2){
//     int n1 = s1.size() ; 
//     int n2 = s2.size() ;
//     if(n1 != n2) return false ;
//     sort(s1.begin() , s1.end()) ;
//     sort(s2.begin() , s2.end()) ;
//     for(int i=0 ; i<n1 ; i++){
//         if(s1[i] != s2[i]){
//             return false ;
//             break ;
//         }
//     }
//     return true ;
// }
// int main(){
//     string str1 , str2 ;
//     cin>>str1>>str2 ;
//     //cout<<str1<<" "<<str2<<endl;
//     if(isPermutation(str1,str2)){
//         cout<<"true"<<endl;
//     }else{
//         cout<<"false"<<endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){
//     string s , s1 ;
//     cin>>s>>s1 ;
//     int i ; 
//     if(s[i] || s1[i]){
//         cout<<s[i]<<" "<<s1[i]<<endl; ; 
//     }
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// string removeConsecutiveDuplicates(string input)
// {
//     // Write your code here
//     string str ; 
//     for(int i=0 ; i<input.size()-1 ; i++){
//         if(input[i] != input[i+1]){
//             str.push_back(input[i]) ;
//         }
//     }
//     str.push_back(input[input.size()-1]) ;
//     return str ; 
// }

// string removeConsecutiveDuplicate(string input){
//     int n = input.size() ;
//     if(n==0) return input ;
//     string ans;
//     ans += input[0] ; 
//     int i=1 ; 
//     while(i<n){
//         if(input[i] != input[i-1]){
//             ans += input[i] ;
//         }
//         i++ ;
//     }
//     return ans ; 
// }

// int main()
// {
//     string str;
//     cin >> str;
//     string ans = removeConsecutiveDuplicate(str);
//     cout << ans << endl;
// }



// #include<bits/stdc++.h>
// using namespace std ;
// string reverseEachWord(string input){
//     int n = input.size() ;
//     if(n==0) return input ;
//     reverse(input.begin() , input.end()) ;
//     string tmp_str = "" ;
//     vector<string> v_string ;
//     for(int i=0 ; i<n ; i++){
//         if(input[i] == ' '){
//             v_string.push_back(tmp_str) ;
//             tmp_str = "" ;
//         }else{
//             tmp_str.push_back(input[i]) ;
//         }
//     }
//     v_string.push_back(tmp_str) ;
//     string ans;
//     int v_sz = v_string.size() ;
//     for(int i=v_sz-1 ; i>=0 ; i--){
//         ans.append(v_string[i]) ;
//         ans.push_back(' ') ;
//     }
//     return ans ;
// } 
// int main(){
//     string str ; 
//     getline(cin,str) ;
//     string ans = reverseEachWord(str) ;
//     cout<<ans<<endl;
// }




// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// string reverseEachWord(string input)
// {
//     int previous = -1;
//     input += " ";
//     int n = input.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (input[i] == ' ')
//         {
//             // reverse the current word
//             int st = previous + 1, end = i - 1;
//             while (st < end)
//             {
//                 swap(input[st], input[end]);
//                 st++;
//                 end--;
//             }
//             previous = i;
//         }
//     }
//     return input;
// }

// int main()
// {

//     string str;
//     getline(cin, str);
//     string ans = reverseEachWord(str);
//     cout << ans << endl;
//     ;
// }



// #include<bits/stdc++.h>
// using namespace std ; 
// string reverseEachWord(string input){
//     int previous = -1 ;
//     input += " " ;
//     int n = input.size() ;
//     for(int i=0 ; i<n ; i++){
//         if(input[i] == ' '){
//             int start = previous+1 , end = i-1 ;
//             while(start<end){
//                 swap(input[start],input[end]) ;
//                 start++ ; 
//                 end-- ;
//             }
//             previous = i ;
//         }
//     }
//     return input ; 

//     //tc = O(N) , sc = O(1) ;
// }
// int main() {
//     string s;
//     getline(cin,s) ;
//     string ans = reverseEachWord(s) ;
//     cout<<ans<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// string reverse_each_word(string &input){
//     int previous = -1 ;
//     input += " " ;
//     int n = input.size() ;
//     for(int i=0 ; i<n ; i++){
//         if(input[i] == ' '){
//             int start = previous + 1 , end = i-1 ;
//             while(start<end){
//                 swap(input[start],input[end]) ;
//                 start++ ;
//                 end-- ;
//             }
//             previous = i ; 
//         }
//     }
//     return input ;
// } 
// int main(){
//     string s;
//     getline(cin,s) ;
//     string ans = reverse_each_word(s) ;
//     cout<<ans<<endl;
// }



//another approach
// #include<bits/stdc++.h>
// using namespace std ;
// string reverse_each_word(string &input) {
//     int n = input.size() ;
//     int l=0 , r=0 ;
//     while(l<n){
//         while(r<n && input[r] != ' '){
//             r++ ;
//         }
//         reverse(input.begin()+l , input.begin()+r) ;
//         l = r+1 ; 
//         r = l ;
//     }
//     return input ; 
// }
// int main(){
//     string s;
//     getline(cin,s) ;
//     string ans = reverse_each_word(s) ;
//     cout<<ans<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// string reverse_each_word(string input){
//     int n = input.size() ;
//     int l=0 , r=0 ;
//     while(l<n){
//         while(r<n && input[r] != ' '){
//             r++ ;
//         }
//         int start = l , end = r-1 ;
//         while(start<end){
//             swap(input[start],input[end]) ;
//             start++ ; 
//             end-- ;
//         }
//         l = r+1 ;
//         r = l ;
//     }
//     return input ; 
// }
// int main(){
//     string s;
//     getline(cin,s) ;
//     string ans = reverse_each_word(s) ;
//     cout<<ans<<endl;
// }


#include<bits/stdc++.h>
using namespace std ;
// string removeChar(string s , char c){
//     int n = s.size() ; 
//     for(int i=0 ; i<n ; i++){
//        if(s[i] == c){
//         for(int j=i ; j<n ; j++){
//             s[j] = s[j+1] ;
//         }
//        }
//     }
//     return s ;
// }
int main(){
    string s;
    cin>>s; 
    char c ;
    cin>>c ;
    s.erase(remove(s.begin() , s.end() , c) , s.end()) ;
    cout<<s<<endl;
}