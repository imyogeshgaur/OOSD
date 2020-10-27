#include <iostream>
#include <string.h>
using namespace std;
class Bank
{
private:
    char depositorName[30];
    long accountNumber;
    int typeOfAccount;
    float amountToDeposite;
    float balanceOfAccount;
    float amountToWithdraw;

public:
    void getDetails(void);
    void showDetails(void);
    void depositAmount(void);
    void withdrawAmount(void);
    void checkBalance(void);
};

void Bank::getDetails(void)
{
    cout << "Enter Depositor's name : ";
    cin >> depositorName;
    cout << "Enter Account number : ";
    cin >> accountNumber;
    cout << "Enter Type of Account : "<<endl;
    cout<<"Press 1 for Savings Account "<<endl<<"Press 2 for Current Account ";
    cin >> typeOfAccount;
    depositAmount();
    withdrawAmount();
}
void Bank::depositAmount(void)
{
    cout << "Enter your Deposited Amount for A/C "<<accountNumber<<" : ";
    cin >> amountToDeposite;
}
void Bank::withdrawAmount(void){
     cout<<"Enter the Amount to be withdrawn from A/C "<<accountNumber<<" : ";
     cin>>amountToWithdraw;
}
void Bank::checkBalance(void){
     if(amountToWithdraw > amountToDeposite)
         cout<<"Cannot Withdraw from the A/C "<<accountNumber<<" !!!! ";
     else{
         balanceOfAccount =  amountToDeposite - amountToWithdraw;
         cout<<"The Balnce of the Account is : "<<balanceOfAccount;
     }
     
}
void Bank::showDetails(void){
    cout<<"The Name of the Depositor is : "<<depositorName<<endl;
    cout<<"The Account Number of the Depositor is : "<<accountNumber<<endl;
    switch (typeOfAccount)
    {
    case 1:
        cout<<"The Account Type is : Savings ";
        break;
    case 2:
        cout<<"The Account Type is : Current ";
        break;
    default:
        break;
    }
    cout<<endl;
    checkBalance();
}
int main()
{
    Bank b ;
    b.getDetails();
    b.showDetails();
    return 0;
}