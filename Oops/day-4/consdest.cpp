#include <iostream>
#include <string>
using namespace std;
class MyClass {
private:
    string name;
public:
    MyClass(string objName) : name(objName) {
        cout << "Object " << name << " is created." << endl;
    }
    ~MyClass() {
        cout << "Object " << name << " is destroyed." << endl;
    }
};
int main() {
    MyClass* obj1 = new MyClass("Object1");
    MyClass* obj2 = new MyClass("Object2");
    MyClass* obj3 = new MyClass("Object3");
    delete obj1;
    delete obj2;
    delete obj3;
}
