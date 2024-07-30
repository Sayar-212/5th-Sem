#include<iostream>
using namespace std;

class shape
{
    protected:
        int side1;
        int side2;
};
class square:public shape
{
    public:
        void area(int s1)
        {
            side1=s1;
            cout<<"Square has the area "<<side1*side1<< " and "<<side1<<" is the side"<<endl;
        }
};
class rectangle:public shape
{
    public:
        void area(int s1,int s2)
        {
            side1 = s1;
            side2 = s2;
            cout<<"Rectangle of area "<<side1*side2<<endl;
        }
};

int main()
{
    square circle;
    rectangle rect;
    circle.area(4);
    rect.area(4,5);
    return 0;
}
