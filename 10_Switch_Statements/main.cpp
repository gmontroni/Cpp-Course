#include <iostream>

using namespace std;

/*
Ao invés de criar um if para cada dia da semana
é possível usar o switch case, que faz a mesma
função
*/

string getDayOfWeek(int dayNum){

    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;  // se não colocar o break o c++ continua procurando
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:    // funciona como o else do if
        dayName = "Invalid Day Number";
    }

    return dayName;
}

int main()
{
    cout << getDayOfWeek(1);
    return 0;
}
