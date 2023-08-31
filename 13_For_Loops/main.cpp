#include <iostream>

using namespace std;

/* 
diferente do while, o for é dado por 3 parâmetros

1. variável e valor inicial
2. condição para manter o looping
3. passo das iterações
*/

int main()
{
    // for padrão
    for(int i=1; i <= 5; i++){
        cout << i << endl;
    }

    int nums[] = {1,2,5,7,3};
    // for para percorrer arrays
    for(int i = 1; i < 5; i++){
        cout << nums[i] << endl;
    }

    return 0;
}
