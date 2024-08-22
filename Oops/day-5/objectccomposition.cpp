#include <iostream>
#include <string>
using namespace std;
class Publication {
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
    int num_copies;
    int sold;
public:
    Sales() : num_copies(0), sold(0) {}
    void setNumCopies(int nc) { num_copies = nc; }
    void setSold(int s) { sold = s; }
    int getNumCopies() const { return num_copies; }
    int getSold() const { return sold; }
};
class Book {
    Publication obj_pub;
    Sales obj_sales;
    int no_of_pages;
public:
    Book() : obj_pub(), obj_sales(), no_of_pages(0) {}
    void setBookDetails(string title, double price, int copies, int sold, int pages) {
        obj_pub.setTitle(title);
        obj_pub.setPrice(price);
        obj_sales.setNumCopies(copies);
        obj_sales.setSold(sold);
        no_of_pages = pages;
    }
    void display() const {
        cout << "Title: " << obj_pub.getTitle() << endl;
        cout << "Price: Rs." << obj_pub.getPrice() << endl;
        cout << "Number of copies: " << obj_sales.getNumCopies() << endl;
        cout << "Sold copies: " << obj_sales.getSold() << endl;
        cout << "Number of pages: " << no_of_pages << endl;
    }
};
int main() {
    Book myBook;
    myBook.setBookDetails("How to get 100/100 in C++ by 1 day study", 1499.99, 1000, 500, 750);
    myBook.display();
    return 0;
}
