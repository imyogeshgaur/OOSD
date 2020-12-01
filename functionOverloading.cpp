#include<iostream>
using namespace std;
class Bank{
protected:
   float principleAmount=1000;
   float rateOfInterest=0.08;
   int time=1;
   float interestAmount;
public:
    void calcInterest(float p){
      interestAmount = p*rateOfInterest*time/100;
      cout<<"The interest amount is : "<<interestAmount;
   }
    void calcInterest(float r){
      interestAmount = principleAmount*r*time/100;
      cout<<"The interest amount is : "<<interestAmount;
   }
    void calcInterest(int t){
      interestAmount = principleAmount*rateOfInterest*t/100;
      cout<<"The interest amount is : "<<interestAmount;
   }

};
int main()
{
   Bank B;
   B.calcInterest(10000);
   B.calcInterest(0.045f);
   B.calcInterest(4);
return 0;
}