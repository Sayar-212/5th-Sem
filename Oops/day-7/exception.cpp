#include <iostream>
#include <cmath>
using namespace std;
class Exception {
public:
    string error() const {
        return "Invalid Triangle: The sum of any two sides must be greater than the third.";
    }
};
void validateTriangle(double a, double b, double c) {
    if (!(a + b > c && b + c > a && c + a > b)) {
        throw Exception();
    }
}
double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    double a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;
    try {
        validateTriangle(a, b, c);
        double area = calculateArea(a, b, c);
        cout << "The area of the triangle is: " << area << endl;
    } catch (Exception& e) {
        cout << e.error() << endl;
    }
    return 0;
}
