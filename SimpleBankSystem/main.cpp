#include <iostream>
using namespace std;

double balance = 0;
double amount = 0;
string string1 = "";
string string2 = "";
bool incorrectOperation = true;
bool endTransaction;

void deposit(double x){
    balance += x;
}

void withdraw(double x){
    balance -= x;
}

double checkBalance(){
    return balance;
}

void checkOperation(string a, double x){
    if(x<0){
        cout << "Please enter a positive amount!" << endl;
    }
    else if(a=="2"){
        deposit(x);
    }
    else if(a=="1" && balance-x > 0){
        withdraw(x);
    }
    else if(a=="3"){
        checkBalance();
    }
    else{
        cout << "You have insufficient balance in your bank account!" << endl;
    }
}

void leave(string b){
    if(b=="9"){
        endTransaction = true;
    }
    else if(b=="0"){
        endTransaction = false;
        incorrectOperation = true;
    }
    else{
        cout << "Please enter the correct operation number!" << endl;
    }
}

int main() {
    while(!endTransaction){
        while(incorrectOperation){
            cout << "Hello! 1. Withdraw     2. Deposit      3. Check Balance" << endl;
            cin >> string1;
            if(string1 == "1"){
                cout << "Please enter the amount you want to withdraw: " << endl;
                incorrectOperation = false;
                cin >> amount;
                checkOperation(string1, amount);
            }
            else if(string1 == "2"){
                cout << "Please enter the amount you want to deposit: " << endl;
                incorrectOperation = false;
                cin >> amount;
                checkOperation(string1, amount);
            }
            else if(string1 == "3"){
                cout << "Your bank account balance : " << checkBalance() << endl;
                incorrectOperation = false;
            }
            else{
                cout << "Please enter the correct operation number!" << endl;
            }
        }
        cout << "Do you want to quit the system? 9. Yes     0. No" << endl;
        cin >> string2;
        leave(string2);
    }
    cout << "Bye!" << endl;

    return 0;
}
