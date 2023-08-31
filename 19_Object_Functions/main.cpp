#include <iostream>
using namespace std;

// criando uma classe para estudantes
class Student {
    public:
        string name;
        string major;
        double gpa;
        //função construtora
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        // funções de objetos ou funções instanciais
        // podemos usá-la para extrair informações importantes
        // em objetos das classes criadas
        bool hasHonors(){
            if (gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student2.hasHonors();

    return 0;
}
