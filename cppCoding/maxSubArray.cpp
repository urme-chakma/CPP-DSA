//Print all the subarray of a given array
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n ; 
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; cin>>a[i++]);
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i ; j<n ; j++){
// 			for(int k=i ; k<=j ; k++){
// 				cout<<a[k]<<" " ; 
// 			}
// 			cout<<endl;
// 		}
//			O(n*n*n)
// 	}
// }

//Maximum Subarray Sum 
//Find the subarray in an array which has maximum sum
//Brute force approach
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n ; 
// 	int a[n];
// 	for(int i=0 ; i<n ;cin>>a[i++]);
// 	int max_sum = INT_MIN ; 
// 	for(int i=0 ; i<n ; i++){
// 		for(int j=i ; j<n ; j++){
// 			int sum = 0 ; 
// 			for(int k=i ; k<=j ; k++){
// 				//sum = 0 ; 
// 				cout<<a[k]<<" ";
// 				sum += a[k];
// 			}cout<<"sum is : "<<sum<<endl;
// 			max_sum = max(max_sum,sum);
// 			sum = 0 ;
// 		}
// 	}
// 	cout<<max_sum ; 
// }

// Cumulative sum appraoch for max_sum subarray
//We can say it pre computaiton approach also
// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n] ; 
// 	for(int i=0 ; i<n ; cin>>a[i++]);
// 	int cumulative_sum[n+1];
// 	cumulative_sum[0] = 0 ; 
// 	for(int i=1 ; i<=n ; i++){
// 		cumulative_sum[i] = cumulative_sum[i-1] + a[i-1]; 
// 	}
// 	int max_sum = INT_MIN;
// 	for(int i=1 ; i<=n ; i++){
// 		int sum = 0 ; 
// 		for(int j=0 ; j<i ; j++){
// 			sum = cumulative_sum[i] - cumulative_sum[j];
// 			max_sum = max(sum,max_sum);
// 		}
// 	}
// 	cout<<max_sum;
// }


