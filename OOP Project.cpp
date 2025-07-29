// A Project where we are going to use OOP for product management
#include <iostream>
#include <fstream>
#include <string>
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

        virtual void productdetails(ostream& out) {
            out << "Product Name: " << name << endl;
            out << "Brand: " << brand << endl;
            out << "Shape: " << shape << endl;
            out << "Price: " << price << endl;
            out << "Product Warranty: " << warranty << " years." << endl;
        }
};

class Sales : public Product { // Inherited Derived class
    private: // Private Attributes
    double profit;
    double tax;
    double target;

    // Set and Get method for accessing private members when needed
    void setprofit(double profit){ 
        this->profit = profit;
    }
    double getprofit(){
        return profit;
    }

    void settax(double tax){
        this->tax = tax;
    }
    double gettax(){
        return tax;
    }

    void settarget(double target){
        this->target = target;
    }
    double gettarget(){
        return target;
    }

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

    void salesdetails(ostream& out)
    {
        productdetails(out);
        out << "Number of items sold: " << itemsSold << endl;
        out << "Number of items found faulty: " << itemsFaulty << endl;
        out << "Overall feedback on the Website: " << reviews << endl;
        
    }
};

int main () {

    Sales mySales("Dress", "Limelight", "Frock", 5999.9, 5, 750, 50, 'B');
    mySales.salesdetails(cout);

    ofstream file_open("Product Data storing.txt", ios::app);
    if (!file_open) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    mySales.salesdetails(file_open);
    file_open.close();

    return 0;
}