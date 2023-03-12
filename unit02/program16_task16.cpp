#include<iostream>
 using namespace std;  
class ABC  
{     
public:      int rollno=55;     string 
name="satyam kapri";     
 void display()  
    {  
        cout<<"Accessed by a pointer"<<endl;  
    } };  int main() {   
ABC obj;     ABC *ptr=&obj;      ptr->display();  
    cout<<ptr->name<<" "<<ptr->rollno<<endl;  
}  
  
