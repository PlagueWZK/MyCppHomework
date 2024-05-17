#include <iostream>
using namespace std;

class Product
{
public:
    Product(int num, int quantity, float price) : num_(num), quantity_(quantity), price_(price)
    {
        sell();
    }
    void sell()
    {
        float discountedPrice = price_ * discount_;
        if (quantity_ > 10)
        {
            discountedPrice *= 0.98;
        }
        sum_ += discountedPrice * quantity_;
        n_ += quantity_;
    }
    static float average()
    {
        if (n_ == 0)
            return 0.0f;
        return sum_ / n_;
    }
    static void display()
    {
        cout << "Total sales amount: " << sum_ << endl;
        cout << "Average price per item: " << average() << endl;
    }
    static float discount_;
    static float sum_;
    static int n_;

private:
    int num_;
    int quantity_;
    float price_;
};
float Product::discount_ = 0.95;
float Product::sum_ = 0.0f;
int Product::n_ = 0;
int main()
{
    Product p1(101, 5, 23.5);
    Product p2(102, 12, 24.56);
    Product p3(103, 100, 21.5);
    Product::display();
    return 0;
}