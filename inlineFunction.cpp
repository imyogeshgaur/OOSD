#include<iostream>
using namespace std;
class Calculator{
  protected:
         int a,b;
  public: 
      void additionOfNumbers(int,int);
      void substractionOfNumbers(int,int);
      void multiplicationOfNumbers(int,int);
      void divisionOfNumbers(int,int);
};
inline void Calculator::additionOfNumbers(int a,int b){
    cout<<"The sum of numbers is : "<<a+b;
}
inline void Calculator::substractionOfNumbers(int a,int b){
    cout<<"The sum of numbers is : "<<a-b;
}
inline void Calculator::multiplicationOfNumbers(int a,int b){
    cout<<"The sum of numbers is : "<<a*b;
}
inline void Calculator::divisionOfNumbers(int a,int b){
    cout<<"The sum of numbers is : "<<a/b;
}
int main()
{
 Calculator c;
 c.additionOfNumbers(12,23);
 cout<<endl;
 c.substractionOfNumbers(121,23);
 cout<<endl;
 c.multiplicationOfNumbers(120,23);
 cout<<endl;
 c.divisionOfNumbers(46,23);
return 0;
}