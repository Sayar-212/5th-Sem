#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
class thinking_cap
{
public:
void slots(char new_green[ ], char new_red[ ]);
void push_green( ) const;
void push_red( ) const;
private:
char green_string[50];
char red_string[50];
};
void thinking_cap::slots(char new_green[ ], char new_red[ ])
{
if(strlen(new_green)>50)
{ 
cout<<"Not a good string."<<endl;
}
strcpy(green_string, new_green);
strcpy(red_string, new_red);
}
void thinking_cap::push_green( ) const
{
cout<<green_string<<endl;
}
void thinking_cap::push_red( ) const
{
cout<<red_string<<endl;
}
int main( ) 
{
thinking_cap obj1,obj2;
obj1.slots("Hello", "Goodbye");
obj2.slots("Goteams!","Boo");
obj1.push_green( );
obj2.push_green( );
obj1.push_red( );
obj2.push_red( );
}
