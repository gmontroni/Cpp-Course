#include <iostream>

using namespace std;

int main()
{

    // para chamar arrays use colchetes no final
    // da variável ex: int array[]
    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    luckyNums[0] = 21;  // troca o valor do elemento no índice 0

    cout << luckyNums[0] << endl; // first index em c++

    int arrayNums[20];  // cria um array de 20 posições
    arrayNums[0] = 101; // aloca o valor 101 na primeira posição do array
    arrayNums[1] = 1001;    // aloca 1001 na segunda posição

    cout << arrayNums[1] << endl;   // imprime o valor da segunda posição do array

    return 0;
}
