#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class MakeVector{
   private:
         vector<float>myVector;
   public:
        void createVector(int);
        void modifyTheVector(int ,float);
        void multiplyWithScalor(float);
        void showVector(vector<float>);   
};
void MakeVector::createVector(int size){
      float value;
      for (int i = 0; i < size; i++)
      {
         cout<<"Enter the value at index "<<i<<" : ";
         cin>>value;
         myVector.push_back(value);
      }  
}
void MakeVector::modifyTheVector(int position,float value){
     auto iterator = myVector.begin();
     myVector.erase(iterator+position);
     myVector.insert(iterator+position,value);
     cout<<"The Resulting Vector is : ";
     showVector(myVector);
     cout<<endl;
}
void MakeVector::multiplyWithScalor(float scaler){
     for_each(myVector.begin(),myVector.end(),[scaler](float &v){v *= scaler;});
     cout<<"The Resulting Vector is : ";
     showVector(myVector);
}
void MakeVector::showVector(vector<float> getVector){
      for(auto z:getVector){
           cout<<z<<" ";
      }   
}
int main()
{
  MakeVector mv;
  int sizeOfVector,positionToChange;
  float valueAtPosition,scalerValue;
  cout<<"Enter the size of the Vector : ";
  cin>>sizeOfVector;
  mv.createVector(sizeOfVector);
  cout<<"Enter the Position You Want to Change : ";
  cin>>positionToChange;
  cout<<"Enter the Value You Want at that position : ";
  cin>>valueAtPosition;
  mv.modifyTheVector(positionToChange,valueAtPosition);
  cout<<"Enter the Scalar value : ";
  cin>>scalerValue;
  mv.multiplyWithScalor(scalerValue);
return 0;
}