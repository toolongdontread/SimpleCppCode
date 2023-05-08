#include <iostream>
#include <cstdlib>

using namespace std;

int secretNum = rand() % 100 + 1;


bool checkAns(int ans) {
    if(ans == secretNum)
        return true;
    return false;
}

void startGame(){
    int i = 0;
    cout << "Please enter the number of chances: ";
    cin >> i;
    for(i;i>0;i--){
        cout << "You have " << i << " chances left" << endl;
        cout << "Please input a number: " << endl;
        int a = 0;
        cin >> a;
        if(checkAns(a)){
            cout << "Bingo" << endl;
            break;
        }
        cout << "Please try again =(\n" << endl;
        continue;
    }
}

int main() {
    startGame();

    return 0;
}
