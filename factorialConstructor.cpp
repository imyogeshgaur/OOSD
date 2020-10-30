#include<iostream>
using namespace std;
class Factorial{
    private :
         int factorial;
         int number;
    public : 
         Factorial(int num){
             number=num;
             factorial=1;
             for (int i = 1; i <= number; i++)
             {
                 factorial *=i;
             }
             
         }
         void printData(){
             cout<<"The Factorial of the Number is : "<<factorial<<endl;
         }
};
int main()
{
  Factorial f(5);
  f.printData();
return 0;
}