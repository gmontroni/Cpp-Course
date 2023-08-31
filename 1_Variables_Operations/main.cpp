#include <iostream>
#include <cmath>        // pacote de operações matemáticas

using namespace std;

int main()
{

    // VARIÁVEIS
    string characterName = "John";
    int characterAge = 35;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;

    characterName = "Mike";
    characterAge = 21;

    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;


    // Obs: usa-se aspas simples ('') para character e
    // aspas duplas ("") para strings
    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;

    // temos duas formas de chamar variáveis do tipo ponto flutuante
    double gpa = 2.3;
    float gpb = 21.1;

    bool isMale = true;

    // prints
    // cout = imprimir
    // endl = quebra a linha (funciona como \n)
    cout << grade << endl;
    cout << phrase << endl;
    cout << age << endl;
    cout << gpa << endl;
    cout << gpb << endl;
    cout << isMale << endl;

    // OPERAÇÕES COM STRINGS
    // length: quantidade de elementos
    string name = "Guilherme Valderramos Montroni";
    cout << name.length() << endl;

    cout << name[0] << endl; //imprime o primeiro elemento da sequência
    cout << name.find("Vald",0) << endl; // imprime o índice que começa a string

    string namesub;

    // substr devolve uma sub string sendo o
    // primeiro parâmetro o indice do início da string desejada
    // e o segundo parâmtro o número de elementos selecionados
    namesub = name.substr(22, 8);
    cout << namesub << endl;

    // OPERAÇÕES COM NÚMEROS
    // como já conhecemos, os sinais para as operações básicas são:
    // +, -, *, /.

    // Além disso temos, o resto da divisão (%)
    cout << 15 % 4 << endl; // resto 3

    // somar e subtrair 1 (++ e --)
    int wnum = 5;

    cout << ++wnum << endl; // printa 5+1
    cout << --wnum << endl; // printa 6-1

    double vnum = 2;
    cout << vnum << endl;

    vnum += 80; // vnum = 2 + 80
    cout << "vnum += 80 = " << vnum << " ";

    vnum *= 2;  // vnum = 82*2
    cout << "vnum *= 2 = " << vnum << " ";

    vnum -= 50; // vnum = 164 - 50
    cout << "vnum -= 50 = " << vnum << " ";

    vnum /= 6;  // vnum = 114/6
    cout << "vnum /= 60 = " << vnum << " ";

    cout << vnum << endl;

    // para operações mais significativas existe o pacote
    // cmath que pode ser incluído no código a partir de
    // #include <cmath>

    // cmath functions

    cout << pow(3,3) << endl;   // 3 elevado a 3
    cout << sqrt(25) << endl;   // raíz de 25
    cout << round(4.3) << endl; // arredonda para o inteiro mais próximo
    cout << floor(5.9) << endl; // arredonda para o menor inteiro
    cout << ceil(3.1) << endl;  // arredonda para o maior inteiro
    cout << fmax(5,10) << endl; // mostra o maior valor
    cout << fmin(5,10) << endl; // mostra o menor valor

    return 0;

}
