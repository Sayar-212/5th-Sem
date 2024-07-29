#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class CoinToss
{
public:
    void making_call()
    {
        cout<<"What you gonna chose?(head/tail)"<<endl;
        cin>>h;
        strlwr(h);
        if(strcmp(h,"head")!=0 && strcmp(h,"tail")!=0)
            cout<<"Please enter a valid choice from Head/Tail"<<endl;
        else
            cout<<"You chose "<<h<<endl;
        tossCoin();
    }
    void tossCoin()
    {
        int toss = rand() % 2;
        const char* result = (toss==0) ? "head" : "tail";
        cout << "Coin toss result: " << result << endl;
        analysis(result);
    }
    void analysis(const char* result)
    {
       y = strcmp(h,result);
       declaration();
    }
    void declaration()
    {
        if (y!=0)
            cout<<"Uh-Oh! you lost the toss"<<endl;
        else
            cout<<"Congratulations, You won the toss"<<endl;
    }
private:
    char h[10];
    int y;
};
int main()
{
    CoinToss coin;
    coin.making_call();
}
