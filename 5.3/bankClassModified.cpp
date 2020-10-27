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
    void getDetails(int);
    void showDetails(int);
    void depositAmount(void);
    void withdrawAmount(void);
    void checkBalance(void);
};

void Bank::getDetails(int x)
{
    cout << "Enter Depositor"<<x<<" Name : ";
    cin >> depositorName;
    cout << "Enter Account number of Depositor"<<x<<" : ";
    cin >> accountNumber;
    cout << "Enter Type of Account of Depositor"<<x<<endl;
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
         cout<<"Cannot Withdraw from the A/C "<<accountNumber<<" !!!! "<<endl;
     else{
         balanceOfAccount =  amountToDeposite - amountToWithdraw;
         cout<<"The Balnce of the Account is : "<<balanceOfAccount<<endl;
     }
     
}
void Bank::showDetails(int y){
    cout<<"The Name of the Depositor "<<y<<" is : "<<depositorName<<endl;
    cout<<"The Account Number of the Depositor "<<y<<" is : "<<accountNumber<<endl;
    switch (typeOfAccount)
    {
    case 1:
        cout<<"The Account Type of Depositor "<<y<<" is : Savings ";
        break;
    case 2:
        cout<<"The Account Type of Depositor "<<y<<" is : Current ";
        break;
    default:
        break;
    }
    cout<<endl;
    checkBalance();
}
int main()
{
    Bank b;
    for (int i = 1; i <=10; i++)
    {       
       b.getDetails(i);
       b.showDetails(i);
    }
    return 0;
}