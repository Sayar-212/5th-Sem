#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
    string name;
    double mileage;
protected:
    void showdetails(string n, double m)
    {
        name=n,mileage=m;
        cout<< "Name of the Vehicle = "<<name<<endl;
        cout<< "Mileage it offers = "<<mileage<<endl;
    }
};
class two_wheeler : public Vehicle
{
private:
    string manufact;
    int max_speed;
public:
    void inputdetails()
    {
        cout<<"FOR 2 Wheeler"<<endl<<endl;
        cout<<"Enter manufacturer name "<<endl;
        cin>>manufact;
        cout<<"Enter Maximum Speed"<<endl;
        cin>>max_speed;
        cout<<"Manufacturer Name = "<<manufact<<endl;
        cout<<"Maximum Speed = "<<max_speed<<endl<<endl;
        showdetails("Bike",28.09);
    }
};
class four_wheeler : public Vehicle
{
private:
    string colour;
    string type; //cedan or huchback
public:
    void inputdetails()
    {
        cout<<"FOR 4 Wheeler"<<endl<<endl;
        cout<<"Enter colour of the car "<<endl;
        cin>>colour;
        cout<<"Enter Type "<<endl;
        cin>>type;
        cout<<"Colour of the car = "<<colour<<endl;
        cout<<"Type = "<<type<<endl;
        showdetails("Car",15.09); //user input
    }
};
int main()
{
    two_wheeler obj1;
    four_wheeler obj2;
    obj1.inputdetails();
    obj2.inputdetails();
}
