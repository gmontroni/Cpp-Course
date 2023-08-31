#include <iostream>

using namespace std;

/*
chamando a função que está abaixo do main
obs: caso não queira usar está chamada
deixe a função acima do main
*/

void sayHi(string name, double age);
double cube(double num);

int main()
{
    sayHi("Guilherme", 28);    // chamando a função criada na main
    sayHi("Andressa", 26);
    sayHi("Munão", 26);
    sayHi("Bia", 26);

    // forma de retornar o valor da função
    double answer = cube(10);
    cout << answer << endl;

    // outras formas
    cout << cube(8) << endl;

    return 0;
}

// FUNÇÕES FORA DA MAIN

// void é usado quando a função não irá retornar nada
void sayHi(string name, double age){
    cout << "Hello " << name << " you are " << age << endl;
}

// funções que retornam algo
// cálcula o valor cúbico de um número
double cube(double num){
    double result = num*num*num;   // ou num^3
    return result;
}
