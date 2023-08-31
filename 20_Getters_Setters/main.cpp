#include <iostream>
using namespace std;

class Movie {
    private:    // Ninguém pode acessar diretamente
        string rating;

    /*
    Para conseguir acesso é possível criar uma verificação
    sendo ela acoplada dentro de um setter e mostrada em um getter
    */

    public:     // É possível acessar diretamente
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        /*
        A função setter e getter serve para controlar
        com quais informações o usuário pode iteragir
        */

        // criando um setter
        void setRating(string aRating){
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        // criando um getter
        string getRating(){
            return rating;  // retorna o rating
        }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << avengers.getRating();

    return 0;
}
