//
// Created by Admin on 5/4/2023.
//

#ifndef UNTITLED_COMPUTERSHOP_H
#define UNTITLED_COMPUTERSHOP_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <list>
#include "Router.h"

class ComputerShop {
private:
    map<string, Router> routerMap;
public:
    void addRouter(Router oneRouter){
        routerMap.insert({oneRouter.getBrand()+": "+oneRouter.getModelNumber(), oneRouter});
    }
    void showRouter(){
        for(auto mapEle : routerMap){
            cout << mapEle.second.toString() << endl;
        }
    }
    set<string> modelNumberSet(){
        set<string> modelNumSet = {};
        for(auto mapEle : routerMap){
            modelNumSet.insert(mapEle.second.getModelNumber());
        }
        return modelNumSet;
    }
    list<double> priceList(){
        list<double> priceL = {};
        for(auto mapEle : routerMap){
            priceL.push_back(mapEle.second.getPrice());
        }
        return priceL;
    }
};


#endif //UNTITLED_COMPUTERSHOP_H
