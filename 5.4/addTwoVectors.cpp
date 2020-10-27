#include <iostream>
#include <vector>
#include<algorithm>
#include<functional>
using namespace std;
class MakeVector
{
private:
    vector<float> myVector;

public:
    vector<float> createVector(int);
    void addVector(vector<float>, vector<float>,int);
};
vector<float> MakeVector::createVector(int size)
{
    float value;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value at index " << i << " : ";
        cin >> value;
        myVector.push_back(value);
    }
    return myVector;
}
void MakeVector::addVector(vector<float> vector1, vector<float> vector2,int size)
{
    transform(vector1.begin( ), vector1.end( ), vector2.begin( ), vector1.begin( ),std::plus<float>( ));
    cout<<"The Resultant Vector is : "<<endl;
    for(auto x: vector1)
        cout<<x<<" ";
}
int main()
{
    MakeVector mv;
    int sizeOfVectors;
    cout << "Enter the size of the Vectors : ";
    cin >> sizeOfVectors;
    cout << endl;
    cout << "Enter Vector 1 : " << endl;
    vector<float> firstVector = mv.createVector(sizeOfVectors);
    cout << "Enter the Vector 2 : " << endl;
    vector<float> secondVector = mv.createVector(sizeOfVectors);
    mv.addVector(firstVector, secondVector,sizeOfVectors);
    return 0;
}