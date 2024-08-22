#include <iostream>
using namespace std;
template <typename T>
class Multiplier {
public:
    T multiply(T a, T b) {
        return a * b;
    }
};
int main() {
    Multiplier<int> intMultiplier;
    Multiplier<double> doubleMultiplier;
    int intResult = intMultiplier.multiply(5, 10);
    cout << "Multiplication of two integers: " << intResult << endl;
    double doubleResult = doubleMultiplier.multiply(5.5, 10.1);
    cout << "Multiplication of two doubles: " << doubleResult << endl;
}
