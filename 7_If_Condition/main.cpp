#include <iostream>

using namespace std;

int main()
{
    bool isMale = false, isTall = false;

    // o operador lógico (e) é &&
    // o operador lógico (ou) é ||
    if(isMale || isTall){
        cout << "You are a tall male.";
    } else if(isMale && !isTall){   // a negação é (!)
        cout << "You are a short male.";
    } else if(!isMale && isTall){
        cout << "You are tall but not male.";
    } else {
        cout << "You are not male and not tall.";
    }

    return 0;
}
