#include<iostream>
using namespace std;
struct employee{
    int id;
    int salary;
    char name[30];
    };
int main(){
    employee emp;
    cout<<"Enter details of the employee\n";
    cout<<"Name:?\n";
    cin.getline(emp.name,30);
    cout<<"ID:?\n";
    cin>>emp.id;
    cout<<"Salary:?\n";
    cin>>emp.salary;

    //Printing the details
    cout<<"Entered details\n";
    cout<<"Name: "<<emp.name<<"\n";
    cout<<"ID: "<<emp.id<<"\n";
    cout<<"Salary: "<<emp.salary;

    }
