//
// Created by Admin on 5/4/2023.
//

#ifndef UNTITLED_ROUTER_H
#define UNTITLED_ROUTER_H
#include <string>
#include <utility>

using namespace std;

class Router {
private:
    string brand;
    string modelNumber;
    double price;
public:
    Router(string aBrand, string aModelNumber, double aPrice) {
        brand = aBrand;
        modelNumber = aModelNumber;
        price = aPrice;
    };

    void setBrand(string aBrand){
        brand = aBrand;
    }
    void setModelNumber(string aModelNumber){
        modelNumber = aModelNumber;
    }
    void setPrice(double aPrice){
        price = aPrice;
    }

    string getBrand(){
        return brand;
    }
    string getModelNumber(){
        return modelNumber;
    }
    double getPrice(){
        return price;
    }

    string toString(){
        return "brand: " + brand + ", model number: " + modelNumber + ", price: " + to_string(price) + "\n";
    }
};


#endif //UNTITLED_ROUTER_H
