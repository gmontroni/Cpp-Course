#include <iostream>

using namespace std;

int power(int baseNum, int powNum){
    int result = 1;

    /* o loop começa de 0 e vai até powNum-1
       ou seja powNum iterações */
    for(int i = 0; i < powNum; i++){
        result *= baseNum;
    }

    return result;
}

int main()
{

    cout << power(2,5);
    return 0;
}
