#include <iostream>
using namespace std;
class Student {
protected:
    int roll;
public:
    void setRoll(int r) {
        roll = r;
    }
    void displayRoll() {
        cout << "Roll Number: " << roll << endl;
    }
};
class Test : virtual public Student {
protected:
    int marks;
public:
    void setMarks(int m) {
        marks = m;
    }
    void displayMarks() {
        cout << "Marks: " << marks << endl;
    }
};
class Sports : virtual public Student {
protected:
    int score;
public:
    void setScore(int s) {
        score = s;
    }
    void displayScore() {
        cout << "Score: " << score << endl;
    }
};
class Result : public Test, public Sports {
private:
    int total;
public:
    void calculateTotal() {
        total = marks + roll;  // Assuming the total is calculated this way
    }
    void displayResult() {
        displayRoll();
        displayMarks();
        displayScore();
        cout << "Total: " << total << endl;
    }
};
int main() {
    Result studentResult;
    studentResult.setRoll(123);
    studentResult.setMarks(85);
    studentResult.setScore(95);
    studentResult.calculateTotal();
    studentResult.displayResult();
    return 0;
}
