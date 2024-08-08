#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    cout<<"Method 1. Printing by Increment Pointer"<<endl;
    int *ptr = arr;
    for(int i=0;i<6;i++)
        cout<<*(ptr+i)<<endl;
    cout<<"Method 2. Printing by Array name itself"<<endl;
    for(int i=0;i<6;i++)
        cout<<arr[i]<<endl;
    cout<<"Method 3. Printing by Array of Pointers"<<endl;
    int *ptrArray[6];
    for(int i=0;i<6;i++)
        ptrArray[i] = &arr[i];
    for(int i=0;i<6;i++){
        cout<<*(ptrArray[i])<<endl;
        cout<<(ptrArray[i])<<endl;}
}
