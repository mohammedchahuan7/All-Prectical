#include<iostream> 
 using namespace std; 
 int area(float, float PI=3.14); 
 int main() 
 { 
     float redius; 
     cout<<"En_no:-220130318004"<<endl; 
      cout<<"Mohammed Chauhan"<<endl; 
     cout<<"Enter the value of Redius : "; 
     cin>>redius; 
     cout<<"Area of the circle is :: "<<area(redius)<<endl; 
     return 0; 
 } 
 int area(float rad, float PI) 
 { 
     return(PI * rad * rad); 
 }
