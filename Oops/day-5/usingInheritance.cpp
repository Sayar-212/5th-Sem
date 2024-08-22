#include <iostream>
#include <string>
using namespace std;
class Publication {
protected:
    string title;
    double price;
public:
    Publication() : title("Untitled"), price(0.0) {}
    void setTitle(string t) { title = t; }
    void setPrice(double p) { price = p; }
    string getTitle() const { return title; }
    double getPrice() const { return price; }
};
class Sales {
protected:
    int num_copies;
    int sold;
public:
    Sales() : num_copies(0), sold(0) {}
    void setNumCopies(int nc) { num_copies = nc; }
    void setSold(int s) { sold = s; }
    int getNumCopies() const { return num_copies; }
    int getSold() const { return sold; }
};
class Book : public Publication, public Sales {
    int no_of_pages;
public:
    Book() : Publication(), Sales(), no_of_pages(0) {}
    void setBookDetails(string t, double p, int copies, int s, int pages) {
        setTitle(t);
        setPrice(p);
        setNumCopies(copies);
        setSold(s);
        no_of_pages = pages;
    }
    void display() const {
        cout << "Title: " << getTitle() << endl;
        cout << "Price: Rs." << getPrice() << endl;
        cout << "Number of copies: " << getNumCopies() << endl;
        cout << "Sold copies: " << getSold() << endl;
        cout << "Number of pages: " << no_of_pages << endl;
    }
};
int main() {
    Book myBook;
    myBook.setBookDetails("C++ Programming", 499.99, 1000, 500, 750);
    myBook.display();
    return 0;
}
