// A Project where we are going to use OOP for product management
#include <iostream>
using namespace std;

class Product { // Parent Base class
    public:
    // Attributes of any Item
        string name;
        string brand;
        string shape;
        double price;
        int warranty;

        Product( string name, string brand, string shape, double price, int warranty) // Parameterized Constructor
        {
            this->name = name;
            this->brand = brand;
            this->shape = shape;
            this->price = price;
            this->warranty = warranty;
        }
};

class Sales : public Product { // Inherited Derived class
    private: // Private Attributes
    double profit;
    double tax;
    double target;

    public:
    int itemsSold;
    int itemsFaulty;
    char reviews;

    Sales(string name, string brand, string shape, double price, int warranty,int itemsSold, int itemsFaulty, char reviews):
     Product(name,brand,shape,price,warranty)
    {
        this->itemsSold = itemsSold;
        this->itemsFaulty = itemsFaulty;
        this->reviews = reviews;
    }

    void salesdetails()
    {
            cout << "Product Name: " << name << endl;
            cout << "Brand: " << brand << endl;
            cout << "Shape: " << shape << endl;
            cout << "Price: " << price << endl;
            cout << "Product Warranty: " << warranty << " years." << endl;
        cout << "Number of items sold: " << itemsSold << endl;
        cout << "Number of items found faulty: " << itemsFaulty << endl;
        cout << "Overall feedback on the Website: " << reviews << endl;
    }
};

int main () {

    Sales mySales("Dress", "Limelight", "Frock", 5999.9, 5, 750, 50, 'B');
    mySales.salesdetails();

    return 0;
}