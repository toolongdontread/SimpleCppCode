#include <iostream>
#include "Router.h"
#include "ComputerShop.h"

using namespace std;

int main() {

    ComputerShop shop = ComputerShop();

    shop.addRouter(Router("Linksys","RVS4000",1080));
    shop.addRouter(Router("Planet", "VRT-3115",510));
    shop.showRouter();

    cout << "ModelNumber: " << endl;
    for(string str : shop.modelNumberSet()){
        cout << str << endl;
    }

    cout << "Price: " << endl;
    for(double price : shop.priceList()){
        cout << price << endl;
    }

    return 0;
}
