#include<iostream> 
 using namespace std; 
 int x = 5;      
 int &test(); 
 int main() 
 { 
     cout<<"En_no:-220130318004"<<endl; 
           cout<<"Mohammed Chauhan"<<endl; 
     test()=15; 
     cout<<test(); 
     return 0; 
 } 
 int &test() 
 { 
     return x; 
 }
