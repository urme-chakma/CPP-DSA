// // // // #include<bits/stdc++.h>
// // // // using namespace std ;

// // // // class Student{
// // // // 	public : 
// // // // 	string name ;
// // // // 	int age ;
// // // // 	bool gender ;

// // // // 	void displayInfo(){
// // // // 		cout<<"Name : "<<name<<endl ;
// // // // 		cout<<"Age : "<<age<<endl ;
// // // // 		cout<<"Gender : "<<gender<<endl ;
// // // // 	}
// // // // };
// // // // int main(){
// // // // 	Student arr[3] ;
// // // // 	for(int i=0 ; i<3 ; i++){
// // // // 		cin>>arr[i].name ;
// // // // 		cin>>arr[i].age ;
// // // // 		cin>>arr[i].gender ;
// // // // 	}

// // // // 	for(int i=0 ; i<3 ; i++){
// // // // 		arr[i].displayInfo() ;
// // // // 	}
// // // // }


// // // //Setters and Getters function 
// // // #include<bits/stdc++.h>
// // // using namespace std ; 
// // // class setter{
// // // 	string name ;
// // // 	public : 
// // // 	int age ;
// // // 	bool gender ;

// // // 	void setName(string s ){
// // // 		name = s ;
// // // 	}

// // // 	void display(){
// // // 		cout<<"Name : "<<name<<endl;
// // // 		cout<<"Age : "<<age<<endl;
// // // 		cout<<"Gender : "<<gender<<endl;
// // // 	}
// // // };
// // // int main(){
// // // 	setter arr[3] ;
// // // 	for(int i=0 ; i<3 ; i++){
// // // 		string s;
// // // 		cin>>s ;
// // // 		arr[i].setName(s) ;
// // // 		cin>>arr[i].age;
// // // 		cin>>arr[i].gender ;
// // // 	}

// // // 	for(int i=0 ; i<3 ; i++){
// // // 		arr[i].display() ;
// // // 	}
// // // }


// // //setters practice
// // #include<bits/stdc++.h>
// // using namespace std ; 
// // class setter{
// // 	string name ;
// // 	int age ;
// // 	bool gender ;

// // 	public : 
// // 	void setName(string s){
// // 		name = s ;
// // 	}
// // 	void setAge(int n){
// // 		age = n ;
// // 	}

// // 	void setGender(bool b){
// // 		gender = b ;
// // 	}

// // 	void display(){
// // 		cout<<"Name : "<<name<<endl;
// // 		cout<<"Age : "<<age<<endl;
// // 		cout<<"Gender : "<<gender<<endl;
// // 	}
// // };

// // int main(){
// // 	setter arr[3] ;
// // 	for(int i=0 ; i<3 ; i++){
// // 		string s ;
// // 		int age ;
// // 		bool gender ;
// // 		cin>>s>>age>>gender ;
// // 		arr[i].setName(s) ;
// // 		arr[i].setAge(age) ;
// // 		arr[i].setGender(gender);
// // 	}

// // 	for(int i=0 ; i<3 ; i++){
// // 		arr[i].display() ; 
// // 	}
// // }



// #include<bits/stdc++.h>
// using namespace std ;
// class student{
	
// 	string name ;

// 	public :
// 	int age ;
// 	bool gender ;

// 	// student(string s){
// 	// 	name = s; 
// 	// }

// 	void setName(string s){
// 		name = s ;
// 	}

// 	void getName(){
// 		cout<<name<<endl;
// 	}

// 	void display(){
// 		cout<<"Name : "<<name<<endl;
// 		cout<<"Age : "<<age<<endl;
// 		cout<<"Gender : "<<gender<<endl;
// 	}
// };
// int main(){
// 	student array[3] ;
// 	for(int i=0 ; i<3 ; i++){
// 		string s ;
// 		cin>>s;
// 		array[i].setName(s);
// 		cin>>array[i].age ;
// 		cin>>array[i].gender ;
// 	}

// 	for(int i=0 ; i<3 ; i++){
// 		//array[i].display() ;
// 		array[i].getName() ;
// 	}
// }



//Constructor
// #include<bits/stdc++.h>
// using namespace std ; 
// class constructor{
// 	string name ;
// 	int age ;
// 	bool gender ;
// 	public :

// 	//default constructor 
// 	constructor(){
// 		cout<<"Default constructor"<<endl;
// 	}
// 	constructor(string s , int a , bool g){
// 		name = s; 
// 		age = a ;
// 		gender = g ;
// 	}


	
// 	void getName(){
// 		cout<<name<<endl;
// 		cout<<age<<endl;
// 		cout<<gender<<endl;
// 	}

// 	// void display(){
// 	// 	cout<<"Name : "<<name<<endl;
// 	// 	cout<<"Age : "<<age<<endl;
// 	// 	cout<<"Gender : "<<gender<<endl;
// 	// }
// };
// int main(){
// 	//constructor s("Urme", 24 , 0) ;
// 	//s.display() ;
// 	constructor s;
// }


// #include<bits/stdc++.h>
// using namespace std ;
// class constructor{
// 	public:
// 		string name ;
// 		int age ;
// 		bool gender ;

// 		constructor(string s , int a , bool g){
// 			name = s ;
// 			age = a ;
// 			gender = g ;
// 		}
// 		//default copy constructor
// 		constructor(constructor &a){
// 			cout<<"Copy constructor"<<endl;
// 			name = a.name ;
// 			age = a.age ;
// 			gender = a.gender ;
// 		}

// 		void display(){
// 			cout<<name<<endl;
// 			cout<<age<<endl;
// 			cout<<gender<<endl;
// 		}


// 		void getName(){
// 			cout<<name<<endl;
// 			cout<<age<<endl;
// 			cout<<gender<<endl;
// 		}
// };
// int main(){
// 	constructor a("Urme",24,0);
// 	a.getName() ;

// 	//copy constructor 

// 	constructor b = a ;
// 	b.display() ;

// 	//another method of copying constructor
// 	constructor c(a) ;
// 	c.display() ;
// }



//Initial Template for C++

#include <iostream>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class complex
{
    int x, y;

    
    public:
    complex(){}
    
    complex(int real, int imag)
    {x=real; y=imag;}
    
    complex operator+(complex c)
    {
        // Add your code here.
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        
        return temp;
        
    }
    
    void display()
    {
        cout<<x<<" + "<<y<<"i"<<endl;
       
    }
    
    
};


// { Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int c11, c12, c21, c22;
        cin>>c11>>c12>>c21>>c22;
     
        
	
	complex c1, c2, c3;
	c1 = complex(c11, c12);
	c2 = complex(c21, c22);
	c3 = c1 + c2;
	
	c3.display();
    }
	return 0;
}  // } Driver Code Ends