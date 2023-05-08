#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int numA = 0;
int numB = 0;
string opr = "";

int addXY(int x, int y){
    return x+y;
}
int minusXY(int x, int y){
    return x-y;
}
int timesXY(int x, int y){
   return x*y;
}
int dividesXY(int x, int y){
    return x/y;
}
int modulusXY(int x, int y){
    return x%y;
}
int powerXY(int x, int y){
    return pow(x, y);
}

bool checkOpr(string a){
    vector<string> oprVector = {"+", "-", "*", "/", "%", "**"};
    for(int i=0;i<oprVector.size();i++){
        if(a==oprVector[i]) return true;
    }
    return false;
}
int main() {
    cout << "Please enter the first number: " << endl;
    cin >> numA;
    cout << "Please enter the operator: " << endl;
    cin >> opr;
    while(checkOpr(opr) == false){
        cout << "Please enter the correct operator: " << endl;
        cin >> opr;
    }
    cout << "Please enter the second number: " << endl;
    cin >> numB;
    if(opr == "+"){
        cout << "The result is: " << addXY(numA, numB);
    }
    else if(opr == "-"){
        cout << "The result is: " << minusXY(numA, numB);
    }
    else if(opr == "*"){
        cout << "The result is: " << timesXY(numA, numB);
    }
    else if(opr == "/"){
        cout << "The result is: " << dividesXY(numA, numB);
    }
    else if(opr == "%"){
        cout << "The result is: " << modulusXY(numA, numB);
    }
    else if(opr == "**"){
        cout << "The result is: " << powerXY(numA, numB);
    }

    return 0;
}
