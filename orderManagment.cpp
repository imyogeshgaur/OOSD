#include<iostream>
using namespace std;
class Order{
   private:
        int itemNumber;
        char itemName[30];
        double itemPrice;
   public: 
        void getItemNumber(int);
        void getItemName(string);
        void getItemPrice(double);
};
void Order::getItemNumber(int itemNumber){
    cout<<"The item Number of the Item is : "<<itemNumber<<endl;
}
void Order::getItemName(string itemName){
    cout<<"The Name of the Item is : "<<itemName<<endl;
}
void Order::getItemPrice(double itemPrice){
    cout<<"The Price of the Item is : "<<itemPrice;
}
int main()
{
  Order om;
  om.getItemNumber(1);
  om.getItemName("Smartphone");
  om.getItemPrice(15999.456);
return 0;
}