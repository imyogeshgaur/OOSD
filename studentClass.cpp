#include <iostream>
using namespace std;
class Student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        void getDetails(void);
        void showDetails(void);
};

void Student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}

void Student::showDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}
 
int main()
{
    Student Yogesh;

    Yogesh.getDetails();
    Yogesh.showDetails();     
    return 0;
}