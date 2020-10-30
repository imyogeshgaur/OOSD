#include<iostream>
using namespace std;
class sumEvenOdd{
private:
    int *arr;
    int sumEven;
    int sumOdd;
public:
    sumEvenOdd(int array[],int Range){
        sumEven=0;
        sumOdd=0;
        arr=array;
        for (int i = 1; i <=Range; i++)
        {
            if(arr[i]%2!=0){
                sumOdd += arr[i];
            }
            else
            {
                sumEven += arr[i];
            }
            
        }
        
    }
    void printData(){
        cout<<"The Sum of Even Numbers is : "<<sumEven<<endl;
        cout<<"The Sum of Odd Numbers is : "<<sumOdd<<endl;
    }
};
int main()
{
    int *b,range;
    cout<<"Enter the Range Size : "<<endl;
    cin>>range;
    b = new int[range];
    cout<<"Enter the Numbers : "<<endl;
    for (int i = 1; i <=range; i++)
    {
        cin>>b[i];
    }
   sumEvenOdd seo(b,range);
   seo.printData();
return 0;
}