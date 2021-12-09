#include <iostream>
using namespace std;
class Animal{
    public:
    string nom;
    int age;
    void set_value(string name,int Age){//fonction pour definir les varibles pour les utuliser dans les classe hérité
        nom=name;
        age=Age;
    }

};
class Zebra: public Animal{
public:
void set_value(string name,int Age){
        
        cout<<" je suis "<<name<<" . j'ai "<<Age<<" ans. je suis d'origine  du Sud-ouest."<<endl;

    }
};
class Dauphin: public Animal{
public:
void set_value(string name,int Age){
        
        cout<<" je suis "<<name<<" .j'ai "<<Age<<" ans .je suis une mammifere aux allures de poisson vit dans les mers, les oceans."<<endl;

    }};
    int main(){
        Zebra zebra;
        Dauphin dauphin;
        zebra.set_value("zebro",10);
        dauphin.set_value("dauphino",20);
    
    }