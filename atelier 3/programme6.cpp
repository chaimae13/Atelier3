#include <iostream>
using namespace std;
class Personne{
    protected:
    string nom;
    string prenom;
    int Date_naissance;
    public:
    Personne(string nm,string Pr,int DN){
        nom = nm;
        prenom = Pr;
        Date_naissance = DN;
    };
    void afficher(){
        cout<<"le nom est "<<nom<<endl;
        cout<<"le prenom est "<<prenom<<endl;
        cout<<"la date de nainssance est "<<Date_naissance<<endl;
    }  

    };
class Employé :public Personne{
protected:
int salaire;
public:

Employé( string nm,string Pr, int DN,double slr):Personne(nm,Pr,DN){
    salaire =slr;
    }

void afficher(){
    cout<<"le nom est "<<nom<<endl;
    cout<<"le prenom est "<<prenom<<endl;
    cout<<"la date de nainssance est "<<Date_naissance<<endl;
    cout<<"le salaire est "<<salaire<<endl;
}
};
class chef :public Employé{
protected:
string service;
public:
chef(string nm,string Pr,int DN, int slr,string src):Employé(nm,Pr,DN,slr){
service=src;
}
void afficher(){
    cout<<"le nom est "<<nom<<endl;
    cout<<"le prenom est "<<prenom<<endl;
    cout<<"la date de nainssance est "<<Date_naissance<<endl;
    cout<<"le salaire est "<<salaire<<endl;
    cout<<"le service est "<<service<<endl;

}
};

class directeur :public chef{
protected:
string Société;
public:
directeur(string nm,string Pr,int DN,int slr,string service, string sc) :chef ( nm,Pr,DN,slr,sc){
    Société=sc;
};
void afficher(){
    cout<<"le nom est "<<nom<<endl;
    cout<<"le prenom est "<<prenom<<endl;
    cout<<"la date de nainssance est "<<Date_naissance<<endl;
    cout<<"le salaire est "<<salaire<<endl;
    cout<<"le service est "<<service<<endl;
    cout<<"le societe est "<<Société<<endl;
}
};
int main(){
    Personne A("aya","bousaid",2001);
    A.afficher();
    cout<<endl;
    Employé B("sanae","ouafa",1997,7000);
    B.afficher();
    cout<<endl;
    chef C("douae","bpd",1995,4000,"C-c");
    C.afficher();
    
}