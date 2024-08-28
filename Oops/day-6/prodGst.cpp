#include <iostream>
using namespace std;
class Gst;
class Product
{
private:
    string product_name;
    int product_price;
public:
    void setdetails(string s, int p)
    {
        product_name = s;
        product_price = p;
    }
    friend void finalPrice(Product ob1, Gst ob2);
};
class Gst
{
private:
    double gst_rate;
public:
    void setdetails(double x)
    {
        gst_rate = x;
    }

    friend void finalPrice(Product ob1, Gst ob2);
};
void finalPrice(Product ob1, Gst ob2)
{
    double gstamt = ob1.product_price * (ob2.gst_rate / 100);
    double total_price = ob1.product_price + gstamt;
    cout << "Product Name = " << ob1.product_name << endl;
    cout << "Final Price = " << total_price << endl;
}
int main()
{
    Product obj1;
    Gst obj2;
    obj1.setdetails("iphone", 80000);
    obj2.setdetails(12);
    finalPrice(obj1, obj2);
    return 0;
}
