#include <iostream>
using namespace std;

/*
Herança é onde podemos definir uma classe e, definir
outras classes. Essas classes podem estender/herdar
as funcionalidades da classe original.
*/

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }

};

/*
Neste exemplo, a nova classe de chefe italiano herda
as funcionalidades da classe chefe através do comando
(: public Chef)
*/

class ItalianChef : public Chef {
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    // cria o objeto chef e executa a funcionalidade
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();

    return 0;
}
