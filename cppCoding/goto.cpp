// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	if(n%2 == 0){
// 		goto printEven ;
// 	}
// 	else {
// 		goto printOdd ;
// 	}

// 	printEven : 
// 		cout<<"Even number.";
// 		return 0 ;
// 	printOdd :
// 		cout<<"Odd number.";
// 		return 0 ;
// }



// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n ;
// 	print : 
// 		cout<<n<<" ";

// 	n++ ;

// 	if(n<=30){
// 		goto print ;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;

// 	if(n<=5){
// 		goto print ;
// 		//n++ ;
// 	}
// 	n++;
// print :
// 	cout<<n<<" ";
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main()
// {
// 	int n;
// 	cin>>n;
// print :
// 	cout<<n<<" ";
// 	n++ ;
// 	if(n<=5){
// 		goto print ;
// 	}

// }

// #include <iostream>
// using namespace std;

// int main() {
//     //Write your code here
// 	char c ;
//     cin>>c;
//     if(c >= 'A' && c<='Z') cout<<1<<endl;
//     else if(c>='a' && c<='z') cout<<0<<endl;
//     else cout<<-1<<endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     //Write your code here
//    int a,b;
//    cin>>a>>b;
//    if(a==0 && b==0)cout<<"Origin";
//    if(a == 0) cout<<"y axis" ;
//    else if( b == 0) cout<<"x axis";
//    else if(a>0 && b>0) cout<<"1st Quadrant";
//    else if(a<0 && b>0) cout<<"2nd Quadrant";
//    else if(a<0 && b<0) cout<<"3rd Quadrant" ;
//    else cout<<"4th Quadrant";
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int x = 4 ;
// 	do{
// 		cout<<x<<" ";
// 		x-- ;
// 	}while(x>0) ;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// void print_even(int n){
// 	if(n%2 == 0){
// 		cout<<n<<endl;
// 	}
// }

// void printAll(int n){
// 	cout<<n<<endl;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n] ;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>arr[i] ;
// 	}
// 	//for_each(arr,arr+5,print_even) ;
// 	for(int x : arr){
// 		printAll(x) ;
// 	}
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 15;
//     for (;;)
//         cout << n;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
// 	for(int i=0 ; i<10 ; i++){
// 		cout<<i;
// 	}
// 	return 0 ; 
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i;
//     for (i = 0; i < 10; i++); 
//     {
//         cout << i;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
// 	int n;
// 	cin>>n;
// 	int sum = 0 ;
// 	for(int i=1 ; i<=n ; i++){
// 		if(i%2 == 0){
// 			sum += i ;
// 		}
// 	}
// 	cout<<sum<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int st_val , en_val , scl_val ;
// 	double cel_val ;
// 	cin>>st_val>>en_val>>scl_val ;
// 	for(int i=st_val ; i<=en_val ; i+=scl_val) {
// 		cel_val = ((i-32)*5)/9;
// 		cout<<i<<" "<<floor(cel_val)<<endl;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	long long n ; 
// 	cin>>n;
// 	int evenSum = 0 , oddSum = 0 ;
// 	while(n != 0){
// 		int last_digit = n%10 ;
// 		if(last_digit%2 == 0){
// 			evenSum += last_digit ;
// 		}
// 		else{
// 			oddSum += last_digit ;
// 		}
// 		n = n/10 ;
// 	}
// 	cout<<evenSum<<" "<<oddSum ;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int x , n ;
// 	cin>>x>>n;
// 	int power_mul = 1 ;
// 	for(int i=0 ; i<n ; i++){
// 		power_mul *= x ;
// 	}
// 	cout<<power_mul<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	int n;
// 	cin>>n;
// 	if(n==0) cout<<1;
// 	else if(n<0) cout<<"Error";
// 	else{
// 		int fact = n ; 
// 		for(int i=1 ; i<n ; i++){
// 			fact *= (n-i) ;
// 		}
// 		cout<<fact;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int first = 0 , second = 1 , nth_term ;
// 	if(n<=1) cout<<n<<endl;
// 	else {
// 		for(int i=0 ; i<n-1 ; i++){
// 			nth_term = first + second ;
// 			first = second ;
// 			second = nth_term ;
// 		}
// 		cout<<nth_term<<endl;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s="hello" ;
// 	for(int i=0 ; i<s.size() ; i++){
// 		putchar(toupper(s[i]));
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
// 	string s = "HELLO";
// 	for(int i=0 ; i<s.size() ; i++){
// 		putchar(tolower(s[i])) ;
// 	}
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double num = 200, squareRoot;
//     squareRoot = sqrt(num);
//     cout << squareRoot;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// void change(int &x){
//     x = 100 ;
//     cout<<x<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<n<<endl;
//     change(n) ;
//     cout<<n<<" ";
// }



// #include<bits/stdc++.h>
// using namespace std  ;
// int sumof(int &a,int &b){
//     return  a+b ;
// }
// int main(){
//     int a , b ;
//     cin>>a>>b ;
//     int sum = sumof(a,b) ;
//     cout<<sum<<endl;
// }







// #include<bits/stdc++.h>
// using namespace std ; 
// int add(int &a , int &b){
//     return a+b ;
// }

// int add(int a,int b , int c){
//     return a+b+c ;
// }
// int main(){
//     int a,b,c ;
//     cin>>a>>b>>c ;
//     cout<<add(a,b)<<endl;
//     cout<<add(a,b,c)<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int addWithDefaultArgument(int x,int y , int z=0 , int w = 0){
//     return x+y+z+w ;
// }
// int main(){
//     cout<<addWithDefaultArgument(10 , 20)<<endl;
//     cout<<addWithDefaultArgument(10 , 20 , 30)<<endl;
//     cout<<addWithDefaultArgument(10 , 20 , 30 , 40)<<endl;
// }



// #include<bits/stdc++.h>
// using namespace std ; 

// void printDivisors(int &n){
//     for(int i=1 ; i<=n ; i++){
//         if(n%i == 0) cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printDivisors(n) ;
//     return 0 ;
// }
// #include <iostream>

// using namespace std;

//     //Write your countBits function here
// int countBits(int &x){
//     int ct = 0 ;
//     while(x != 0){
//         if(x%2 == 1) ct++ ;
//         x = x/2 ;
//     }
//     return ct ;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout<<countBits(n);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n;
//     cin>>n;
//     int isPrime = 1 ;
//     for(int i=2 ; i*i<=n ; i++){
//         if(n%i == 0) isPrime = 0 ;
//     }
//     cout<<isPrime<<endl;
// }


// #include <iostream>

// using namespace std;

// //Write your totalPrime function here
// int totalPrime(int &s , int &e){
//     int ct=0 ;
//     for(int i=s ; i<=e ; i++){
//         if(i == 2) ct++ ;
//         else{
//             for(int j=2 ; j*j<=i ; j++){
//                 if(i % j != 0) ct++ ;
//                 //break ;
//             }
//         }        
//     }
//     return ct ;
// }

// int main() {
//     int S, E;
//     cin >> S >> E;
//     cout << totalPrime(S, E);
//     return 0;
// }


// #include <iostream>

// #include<math.h>

// using namespace std;

// bool isPrime(int n){

//    for(int i=2;i<=sqrt(n);i++){

//       if(n%i==0)

//           return 0;

//    }

//    return 1;

// }

 

// int totalPrime(int S, int E){

//    int count = 0;

//    for(int i=S;i<=E;i++){

//        if(isPrime(i)){

//            count++;

//        }

//    }

//    return count;

// }

 

// int main() {

//    int S, E;

//    cin >> S >> E;

//    cout << totalPrime(S, E);

//    return 0;

// }



// #include<bits/stdc++.h>
// using namespace std ; 

// bool isPrime(int &x){
//    for(int i=2 ; i*i<=x ; i++){
//       if(x%i == 0) return 0 ;
//    }
//    return 1 ;
// }
// int totalPrime(int &a,int &b){
//    int ct = 0 ;
//    for(int i=a ; i<=b ; i++){
//       if(isPrime(i)) ct++ ;
//    }
//    return ct ; 
// }
// int main(){
//    int a,b ;
//    cin>>a>>b;
//    cout<<totalPrime(a,b) ;
// }



// #include<bits/stdc++.h>
// using namespace std ; 

// bool isPrime(int &x){
//    for(int i=2 ; i*i<=x ; i++){
//       if(x % i == 0) return 0 ;
//    }
//    return 1 ;
// }
// int totalPrime(int &a,int &b){
//    int ct = 0 ;
//    for(int i=a ; i<=b ; i++){
//       if(isPrime(i)) ct++ ;
//    }
//    return ct ;
// }
// int main(){
//    int a,b;
//    cin>>a>>b ;
//    cout<<totalPrime(a,b) ;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
//    int firstValue = 5 , secondValue = 15 ;
//    char thirdValue = 'a' ;
//    int *p1 = &firstValue , *p2 = &secondValue ;
//    char *p3 = &thirdValue ;

//    cout<<&firstValue<<endl;
//    cout<<&p1<<endl;

//    *p1 = 20 ;
//    cout<<firstValue<<endl;
   

//    //cout<<*p1<<endl;
//   // *p1 = 10 ; 
//   // cout<<*p1<<endl;
//   // cout<<firstValue<<endl;
//    //*p2 = *p1 ;
//    //cout<<*p2<<endl;
//    //cout<<p1<<endl;
//   // p1 = p2 ;
//    //cout<<*p1<<endl; 
//    //cout<<p1<<endl;
//   // *p1 = 20 ;
//    // cout<<firstValue<<endl;
//    // cout<<*p1<<endl;
//    // cout<<&firstValue<<endl;
//    // cout<<&p1<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//    int f=5 , s = 15 ;
//    char t = 'a' ;
//    int *pf , *ps;
//    char *pt ;
//    pf = &f , ps = &s ;
//    pt = &t ;

//    cout<<&f<<endl;
//    cout<<pf<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//    int a = 4 , b= 0;
//    int *pa = &a ;
//    *pa = 8 ;
//    int *pb = &b ;
//    *pb = *pa ;
//    cout<<pa<<endl;
//    cout<<pb<<endl;
//    pa = pb ;
//    cout<<pa<<endl;

// }

//#include<bits/stdc++.h>
// using namespace std ; 
// int main(){
//    int a = 10 ;
//    int *p = &a ;
//    cout<<p<<endl;
//    cout<<"Size of integer is : "<<sizeof(int)<<"bytes"<<endl;
//    cout<<p+1<<endl;
//    cout<<p+2<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
//    int x = 6 ; 
//    int *p = &x ; 
//    int **q = &p ;
//    int ***r = &q ;

//    printf("%d\n",*p) ;
//    printf("%d\n",*q) ;
//    printf("%d\n",*(*q)) ;
//    printf("%d\n",*r) ;
//    printf("%d\n",*(*r)) ;
//    printf("%d\n" , *(*(*r))) ;

//    ***r = 10 ; 
//    printf("%d\n",x) ;

//    ***r += 2 ;
//    printf("%d\n",x) ;

//    int *u = 0 ;
//    cout<<u<<endl;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     char * ptr;
//     char Str[] = "abcdefg";
//     ptr = Str;
//     ptr += 2;
//     cout << ptr;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// void increment(int &n){
//    n++ ;
// } 
// int main() {
//    int n;
//    cin>>n;
//    increment(n) ;
//    cout<<n<<endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[] = {5,1,15,20,25};
//     int i, j, k;
//     i = a[0];
//     j = a[1]++;
//     k = a[i++];
//     cout<<++a[1]<<endl;

//     cout << i << " " << j << " " << k;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int finIndex(int a[] , int n , int s){
//     int i ;
//     for(i=0 ; i<n ; i++){
//         if( a[i] == s){
//             return i ;
//             //break ;
//         }
//     }
//     return -1 ;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n] ;
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i] ;
//     }
//     int s ;
//     cin>>s ;
//     int index = finIndex(a , n , s) ;
//     cout<<index<<endl;
// }

// #include <iostream>
// using namespace std;
// int search(int arr[], int n, int x) {
//     int i;
//     for (i = 0; i < n; i++)
//         if (arr[i] == x)
//             return i;
//     return -1;
// }
// int main() {
//     int n; //size of array
//     cin >> n;
//     int arr[n];
//     // taking input in arr
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int x; //Element to be searched
//     cin >> x;
//     int result = search(arr, 10, x);
//     if (result == -1)
//         cout << "Element is not present in array";
//     else
//         cout << "Element is present at index " << result;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ; 
// int findIndex(int *a , int n , int x){
//     int i ;
//     for(int i=0 ; i<n ; i++){
//         if(a[i] == x) return i ;
//     }
//     return -1 ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     int a[n] ;
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     int x ;
//     cin>>x;
//     int index = findIndex(a , n , x);
//     cout<<index<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std; 
// int find_last_index(int *a , int n , int x){
//     int last_index = -1 ;
//     for(int i=0 ; i<n ; i++){
//         if(a[i] == x) last_index = i ; 
//     }
//     return last_index ;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n] ;
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i] ;
//     }
//     int x ;
//     cin>>x ; 
//     int last_index = find_last_index(a , n , x) ;
//     cout<<last_index<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n;
//     cin>>n ;
//     int a[n] ;
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i] ;
//     }

//     for(int i=n-1 ; i>=0 ; i--){
//         cout<<a[i]<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// int main(){
//     int n ;
//     cin>>n;
//     int a[n] ;
//     for(int i=0 ; i<n ; i++){
//         cin>>a[i] ;
//     }
//     int k;
//     cin>>k;
//     while(k--){
//         for(int i=0 ; i<n-1 ; i++){
//             int temp = a[i] ;
//             a[i] = a[i+1] ;
//             a[i+1] = temp ;
//         }
//     }

//     for(int i=0 ; i<n ; i++){
//         cout<<a[i]<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// void kth_largest_smallest(int *a , int n , int k){
//     int smallest_count = 0 ; 
//     int largest_count = 0 ;
//     while(smallest_count<k){
//         for(int i=0 ; i<n-1 ; i++){
//             if(a[i] != a[i+1]) {
//                 smallest_count++ ;
//             }
//         }
//     }

//     while(largest_count<k){
//         for(int i=n-1 ; i>0 ; i--){
//             if(a[i] != a[i-1]) {
//                 largest_count++ ;
//             }
//         }
//     }

//     cout<<smallest_count<<" "<<largest_count;
// }
// int main() {
//     int t ;
//     cin>>t ;
//     while(t--){
//         int n , k ;
//         cin>>n>>k;
//         int a[n] ; 
//         for(int i=0 ; i<n ; i++){
//             cin>>a[i] ;
//         }
//         sort(a , a+n) ; 
//         kth_largest_smallest(a,n,k) ;
//     }
// }

// #include <bits/stdc++.h>

// #include <iostream>

// #include<algorithm>

// using namespace std;

// void kthSmallestLargest(int arr[], int n, int k) {
//     sort(arr, arr + n);
//     //kthlargest
//     int z = n - 1;
//     int mn = INT_MAX;
//     int count = 0;
//     int flag = 0;

//     while (z >= 0) {

//         if (arr[z] < mn) {
//             mn = arr[z];
//             count++;
//         }
//         if (count == k) {
//             flag = 1;
//             cout << arr[z] << " ";
//             break;
//         }

//         z--;
//     }
//     if (flag == 0)
//         cout << -1 << " ";

//     // kthSmallest
//     count = 0;
//     mn = INT_MIN;
//     flag = 0;

//     for (int i = 0; i < n; i++) {

//         if (arr[i] > mn) {
//             mn = arr[i];
//             count++;
//         }
//         if (count == k) {
//             flag = 1;
//             cout << arr[i] << endl;
//             break;
//         }
//     }
//     if (flag == 0)
//         cout << -1 << endl;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t > 0) {
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         kthSmallestLargest(arr, n, k);
//         cout << endl;
//         t--;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std ; 
// void kth_largest_smallest(int *a , int n , int k){
//     sort(a , a+n) ; 
//     int count = 0 ; 
//     int flag = 0 ;
//     int mx = INT_MAX ;
//     for(int i=n-1 ; i>=0 ; i--){
//         if(a[i]<mx){
//             mx = a[i] ;
//             count++ ;
//         }
//         if(count == k){
//             flag = 1 ;
//             cout<<a[i]<<" ";
//             break ;
//         }
//     }
//     if(flag == 0) cout<<-1<<" ";

//     count = 0 ;
//     flag = 0 ;
//     int mn = INT_MIN ;
//     for(int i=0 ; i<n ; i++) {
//         if(a[i] > mn){
//             mn = a[i] ;
//             count++ ;
//         }
//         if(count == k){
//             flag = 1 ;
//             cout<<a[i]<<" ";
//             break ;
//         }
//     }
//     if(flag == 0){
//         cout<<-1<<" ";
//     }

// }
// int main(){
//     int t ; 
//     cin>>t ;
//     while(t--){
//         int n , k ; 
//         cin>>n>>k ;
//         int a[n] ;
//         for(int i=0 ; i<n ; i++){
//             cin>>a[i] ;
//         }
//         kth_largest_smallest(a , n , k) ;
//         cout<<endl;
//     }
// }

// // #include <iostream>
// // using namespace std;

// // void sort012(int arr[], int n) {

// //     int countZero = 0;
// //     int countOne = 0;
// //     int countTwo = 0;

// //     for (int i = 0; i < n; i++) {

// //         if (arr[i] == 0)
// //             countZero++;

// //         else if (arr[i] == 1)
// //             countOne++;

// //         else if (arr[i] == 2)
// //             countTwo++;
// //     }

// //     int index = 0;

// //     for (int i = 0; i < countZero; i++) {

// //         arr[index] = 0;
// //         index++;
// //     }

// //     for (int i = 0; i < countOne; i++) {

// //         arr[index] = 1;
// //         index++;
// //     }

// //     for (int i = 0; i < countTwo; i++) {

// //         arr[index] = 2;
// //         index++;
// //     }

// // }

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t > 0) {
// //         int n;
// //         cin >> n;
// //         int arr[n];
// //         for (int i = 0; i < n; i++) {
// //             cin >> arr[i];
// //         }
// //         sort012(arr, n);
// //         for (int i = 0; i < n; i++) {
// //             cout << arr[i] << " ";
// //         }
// //         cout << endl;
// //         t--;
// //     }
// //     return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std ; 

// void kth_largest_smallest(int *a , int n , int k){
//     sort(a , a+n) ;
//     //2nd largest
//     int count = 0 ; 
//     int mn = INT_MAX ;
//     int flag = 0 ; 
//     for(int i=n-1 ; i>=0 ; i--){
//         if(a[i] < mn){
//             mn = a[i] ;
//             count++ ;
//             break ;
//         }
//         if(count == k ){
//             flag = 1 ;
//             cout<<a[i]<<" ";
//             break ;
//         }
//     }
//     if(flag = 0) cout<<-1<<" ";

//     flag = 0 ;
//     count = 0 ; 
//     int mx = INT_MIN ;
//     for(int i=0 ; i<n ; i++){
//         if(a[i] > mx){
//             mx = a[i] ;
//             count++ ;
//         }
//         if(count == k){
//             flag = 1 ; 
//             cout<<a[i]<<" ";
//             break ;
//         }
//     }
//     if(flag ==0) cout<<-1<<" ";
// }
// int main(){
//     int t ;
//     cin>>t ;
//     while(t--){
//         int n , k ;
//         cin>>n>>k ;
//         int a[n] ;
//         for(int i=0 ; i<n ; i++){
//             cin>>a[i] ; 
//         }

//         kth_largest_smallest(a , n , k);
//         cout<<endl ;
//     }
// }


#include<bits/stdc++.h>
using namespace std ;
void kth_largest_smallest(int *a , int n , int k){
    sort(a,a+n) ;
    int mn = INT_MAX ;
    //kth largest 
    int count = 0 ; 
    int flag = 0 ; 
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]<mn){
            mn = a[i] ;
            count++ ;
        }
        if(count == k){
            flag = 1 ;
            cout<<mn<<" ";
            break ;
        }
    }
    if(flag == 0){
        cout<<-1<<" ";
    }

    //kth smallest 
    flag = 0 ; 
    count = 0 ;
    int mx = INT_MIN ;
    for(int i=0 ; i<n ; i++){
        if(a[i]>mx){
            mx = a[i] ;
            count++ ;
        }
        if(count == k) {
            cout<<mx<<" " ;
            flag = 1 ;
            break ;
        }
    }
    if(flag == 0) cout<<-1<<" ";
}
int main(){
    int t;
    cin>>t ;
    while(t--){
        int n,k ;
        cin>>n>>k;
        int a[n] ;
        for(int i=0 ; i<n ; i++){
            cin>>a[i] ;
        }
        kth_largest_smallest(a , n , k) ;
        cout<<endl;
    }
}