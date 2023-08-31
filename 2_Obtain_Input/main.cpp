#include <iostream>

using namespace std;

int main()
{

    // int age;
    string age, name;

    // OBTENDO UM NÚMERO
    // cout = "c out" joga a informação para fora
    cout << "Enter your age: ";
    // cin = "c in" recebe a informação
    //cin >> age;         // obtém um número
    getline(cin, age);


    // OBTENDO STRINGS
    cout << "Enter your name: ";
    getline(cin, name); // obtém uma linha inteira de texto

    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old.";

    return 0;
}
