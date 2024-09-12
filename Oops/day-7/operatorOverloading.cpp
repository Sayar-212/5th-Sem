#include <iostream>
using namespace std;
class Test {
    int marks[5];
public:
    Test(int m1, int m2, int m3, int m4, int m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }
    int operator[](int& index) {
        if (index < 0 || index >= 5) {
            cerr << "Index out of bounds" << endl;
            exit(1);
        }
        return marks[index];
    }
    void compareMarks(Test& t) {
        for (int i = 0; i < 5; i++) {
            if ((*this)[i] > t[i]) {
                cout << "Marks in subject " << i + 1 << " are higher in the first object.\n";
            } else if ((*this)[i] < t[i]) {
                cout << "Marks in subject " << i + 1 << " are higher in the second object.\n";
            } else {
                cout << "Marks in subject " << i + 1 << " are the same for both objects.\n";
            }
        }
    }
};

int main() {
    Test test1(85, 90, 78, 92, 88);
    Test test2(88, 85, 78, 90, 95);
    test1.compareMarks(test2);
    return 0;
}
