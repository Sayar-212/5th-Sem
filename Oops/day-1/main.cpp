#include <iostream>
#include "thinker.h"
using namespace std;
int main()
{
	char newgreen[50],newred[50],green1[50],red1[50];
	Thinking_cap obj1,obj2;
	cout<<"Enter String for Green and Red slots for first Call"<<endl;
	cin>>newgreen;
	cin>>newred;
	cout<<"Enter String for Green and Red slots for second Call"<<endl;
	cin>>green1;
	cin>>red1;
	obj1.slots(newgreen,newred);
	obj2.slots(green1,red1);
	obj1.push_green();
	obj1.push_red();
	obj2.push_green();
	obj2.push_red();
}

	
	
