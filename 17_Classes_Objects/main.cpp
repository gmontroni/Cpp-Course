#include <iostream>
using namespace std;

/*
podemos armazenar informações nas formas já
vistas, como string, double, char, int ...
No entanto, existem diversas outras informações
que não se encaixam nessas variações. Pra isso,
é necessário criar um novo tipo de dado,
sendo eles chamados de classes.

* Objetos são instancias dentro das classes.
*/

// Criando uma classe para livros
// por convenção a classe é nomeada com letra maiúscula
class Book {
    public:
        string title;
        string author;
        int pages;
};

int main()
{

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.author;

    return 0;
}
