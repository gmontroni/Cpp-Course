#include <iostream>
using namespace std;

// obs: ponteiros são endereços de memória

/*
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;
*/

int main()
{
    int age = 19;
    int *pAge = &age;       // salva o ponteiro da variável age

    /*
    obs: para salvar o ponteiro é necessário indicar a forma
    da variável original (no caso aqui é int)
    Além disso, é preciso usar o (*) no começo da variável
    */

    cout << "pAge = " << pAge << endl;

    // podemos acessar diretamente o valor salvo no ponteiro através
    cout << "valor salvo em pAge = " << *pAge << endl;

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    // o & na frente da variável indica o ponteiro
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    return 0;
}
