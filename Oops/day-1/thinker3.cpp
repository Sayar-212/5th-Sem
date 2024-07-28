#include <stdlib.h>
#include <iostream>
#include <string.h>
class thinking_cap
{
public:
void slots(char new_green[ ], char new_red[ ])
{
	if(strlen(new_green)>50)
		std::cout<<"error"<<std::endl;
	strcpy(green_string, new_green);
	strcpy(red_string, new_red); 
}
void push_green( ) const {
	 std::cout<<green_string<<std::endl;
}
void push_red( ) const {
	 std::cout<<red_string<<std::endl;
}
private:
char green_string[50];
char red_string[50];
};
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
