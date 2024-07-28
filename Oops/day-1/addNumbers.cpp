#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
class addNumbers
{
	private:
	int a,b;
	public:
	void addition(int x,int y);
};
void addNumbers::addition(int x,int y)
{
	cout<<"Result = "<<x+y<<endl;
}
int main()
{
	int a,b;
	addNumbers obj1;
	cout<<"Enter a,b"<<endl;
	cin>>a;
	cin>>b;
	obj1.addition(a,b);
}
