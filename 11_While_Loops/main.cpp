#include <iostream>

using namespace std;

int main()
{
    // While Loops

    int index1 = 1;      // contador
    // while continua enquanto a condição for verdadeira
    // while normal
    while(index1 <= 5){
        cout << index1 << endl;
        index1++;        // soma um na variável index
    }

    // Do While Loops

    int index2 = 6;      // contador
    // do while (primeiro ele faz o print e soma 1
    // para depois verificar a condição do while
    do{
        cout << index2 << endl;
        index2++;        // soma um na variável index
    } while(index2 <= 5);


    return 0;
}
