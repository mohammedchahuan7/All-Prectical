 #include<iostream> 
 using namespace std; 
 void swap(int &,int &); 
 int main() 
 { 
     int a=10, b=20; 
     cout<<"En_no:-220130318004"<<endl; 
      cout<<"Mohammed Chauhan"<<endl; 
     cout<<"Before swapping the value is "<<a<<" & "<<b<<endl; 
     swap(a,b); 
     cout<<"After swapping the value is "<<a<<" & "<<b<<endl; 
     return 0; 
 } 
 void swap(int &a, int &b) 
 { 
     int temp=a; 
         a=b; 
         b=temp; 
 }
