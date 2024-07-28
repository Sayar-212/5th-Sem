#include "thinker.h"
#include <iostream>
#include <string.h>
using namespace std;
void Thinking_cap::slots(char Greenstring[],char Redstring[])
{
	if(strlen(Greenstring)>50)
	{
		cout<<"Enter Valid Message(within 50 characters)"<<endl;
	}
	strcpy(greenstring,Greenstring);
	strcpy(redstring,Redstring);
}
void Thinking_cap::push_green() const
{
	cout<<greenstring<<endl;
}
void Thinking_cap::push_red() const
{
	cout<<redstring<<endl;
}
	
	
	

