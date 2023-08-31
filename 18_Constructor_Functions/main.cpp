#include <iostream>
using namespace std;

/*
função construtora é uma função especial
sempre deverá ser chamada quando criarmos
um objeto de uma classe.
*/

// criando uma classe para livros
class Book {
    public:
        string title;
        string author;
        int pages;
        // constructor (função construtora)
        // A ideia é criar objetos de maneira eficaz
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;

        }

        /*
        Book(){
            cout << "Creating Object" << endl;
        }
        */

        /*
        Book(string name){
            cout << name << endl;
        }
        */
};

int main()
{

    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkein", 700);

    cout << book1.title;

    return 0;
}
