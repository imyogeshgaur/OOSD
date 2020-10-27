#include<iostream>
using namespace std;
void value(int x){
    int b=20;
    cout<<b; 
}
int main()
{
   int a=10;
   cout<<"Local value is : ";
   value(a);
   cout<<"\nGlobal value is : "<<a;
return 0;
}