#include <iostream>
using namespace std;
class MyClass{
    public:
    MyClass();//constructeur par defaut
    ~MyClass();//destructeur
    void affiche(){
        cout<<"apres";
    };
};
MyClass::MyClass(){//definir  constructeur en dehors de la classe.
    cout<<" le constructeur s'affichera le premier  ";
}
MyClass::~MyClass(){//definir destructeur en dehors de la classe.
    cout<<" le destructeur s'affichera le dernier"<<endl;
}
int main(){
    MyClass A ;//creation objet du classe 'MyClasse'
    A.affiche();
    return 0;
}