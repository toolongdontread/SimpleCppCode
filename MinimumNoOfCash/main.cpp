#include <iostream>
#include <vector>

using namespace std;

double money = 0;
vector<int> cashVector = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
vector<double> banknotes = {1000, 500, 100, 50, 20, 10, 5, 2, 1, 0.5, 0.2, 0.1};

vector<int> noOfCash(double x){
    while(x>0){
        if(x >= 1000){cashVector[0]+=1; x-=1000;}
        else if(x<1000 && x>=500) {cashVector[1]+=1; x-=500;}
        else if(x<500 && x>=100) {cashVector[2]+=1; x-=100;}
        else if(x<100 && x>=50) {cashVector[3]+=1; x-=50;}
        else if(x<50 && x>=20) {cashVector[4]+=1; x-=20;}
        else if(x<20 && x>=10) {cashVector[5]+=1; x-=10;}
        else if(x<10 && x>=5) {cashVector[6]+=1; x-=5;}
        else if(x<5 && x>=2) {cashVector[7]+=1; x-=2;}
        else if(x<2 && x>=1) {cashVector[8]+=1; x-=1;}
        else if(x<1 && x>=0.5) {cashVector[9]+=1; x-=0.5;}
        else if(x<0.5 && x>=0.2) {cashVector[10]+=1; x-=0.2;}
        else if(x<0.2 && x>=0.1) {cashVector[11]+=1; x-=0.1;}
        else{break;}
    }
    return cashVector;
}
void result(){
    for(int i=0; i<banknotes.size();i++){
        cout << "You need " << cashVector[i] << " piece(s) of " << banknotes[i] << endl;
    }
}

int main() {
    cout << "Enter how much you have: " << endl;
    cin >> money;
    noOfCash(money);
    result();
    return 0;
}
