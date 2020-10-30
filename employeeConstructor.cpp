#include<iostream>
using namespace std;
class Employee{
  private : 
       int empId;
       string empName;
       string empDepartment;
       double empSalary;
  public:
       Employee(int id,string name,string dept,double sal){
           empId=id;
           empName=name;
           empDepartment = dept;
           empSalary=sal;
       }
       void showData(){
           cout<<"The Id of the Employee is : "<<empId<<endl;
           cout<<"The Name of the Employee is : "<<empName<<endl;
           cout<<"The Department of the Employee is : "<<empDepartment<<endl;
           cout<<"The Salary of the Employee is : "<<empSalary<<endl;
       }
};
int main()
{
    Employee e(1,"Ramesh","SDE",50000.567);
    e.showData();
return 0;
}