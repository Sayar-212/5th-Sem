#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
class Employee
{
private:
    int empid;
    double sal;
public:
    void id_generation()
    {
        srand(time(0));
        empid = rand()%5000+1;
        cout<<"Employee Id = "<<empid<<endl;
    }
    friend class Boss;
};
class Boss
{
public:
    void salary_decider(Employee &obj1)
    {
        int x = obj1.empid;
        obj1.sal = x*10;
        cout<<"Basic Pay "<<obj1.sal<<endl;
    }
    void increase_salary(Employee &obj1,int incr)
    {
        cout<<"Increased Salary : "<<obj1.sal+incr<<endl;
    }
};
int main()
{
    string name;
    int age;
    cout<<"Enter Name and Age : "<<endl;
    cin>>name;
    cin>>age;
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    Employee emp;
    emp.id_generation();
    Boss b;
    b.salary_decider(emp);
    if (name == "Sayar")
        b.increase_salary(emp,5000);
}
