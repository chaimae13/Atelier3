#include <iostream>
#include <cmath>
using namespace std;
class vecteur3d{
    public:
float x;
float y;
float z;
vecteur3d(float a=0, float b=0,float c=0):x(a), y(b), z(c){
}
vecteur3d(const vecteur3d &vect){
x=vect.x;
y=vect.y;
z=vect.z;
}
void afficher(vecteur3d){
cout<<"sont ("<<x<<","<<y<<","<<z<<')'<<endl;
}
void somme(const vecteur3d &vect){//somme de 2vecteur
cout<<"l'addition dU deux vecteurs est ("<<x+vect.x<<","<<y+vect.y<<","<<z+vect.z<<')'<<endl;
}
void produit(const vecteur3d &vect){//produit scalaire de 2 vecteurs
cout<<"le produit scalaire de deux vecteurs est"<<x*vect.x+y*vect.y+z*vect.z<<endl;
}
int coincide(const vecteur3d &vect){//verifier si les 2 vecteur on les meme composantes
    if (x==vect.x && y==vect.y && z==vect.z){
    cout<<"les 2 vecteur ont les meme composantes"<<endl;}
else {
    cout<<"les 2 vecteur n'ont pas les meme composantes"<<endl;
}
}
int norme(){//fonction renvoie la norme du vecteur
    float nrm= sqrt(x*x+y*y+z*z);
    return nrm;
}
vecteur3d normax(vecteur3d vect){//Retourner le vecteur a la plus grande norme par valeur
    if (this->norme()> vect.norme())
	return *this;
	else
    return vect;
}
vecteur3d * normax(vecteur3d *vect){//Retourner le vecteur a la plus grande norme par adresse
    if (this->norme()> vect->norme())
	return this;
	else
    return vect;
}
vecteur3d &normaxr(vecteur3d &vect){//Retourner le vecteur a la plus grande norme par reference
    if (this->norme()> vect.norme())
	return *this;
	else
    return vect;
}

};
int main() {
	vecteur3d v1=vecteur3d(1,5,2);
	cout << "1re vecteur v1";
	v1.afficher(v1);
	vecteur3d v2=vecteur3d(2,1,4);
	cout << "2eme vecteur v2";
	v2.afficher(v2);
	v1.somme(v2);
	v1.produit(v2);
	v1.coincide(v2);
	cout << " norme du 1ere vecteur est : ";
	v1.norme();
	cout<<endl; 
	cout << " norme du 2eme vecteur est : ";
	v2.norme();
    cout<<endl;
	cout << " vecteur avec la plus grande norme est : "<<endl;
	v1.normax(v2);
	cout << " vecteur avec la plus grande norme est   (par adresse): "<<endl;
	v1.normax(&v2);
	cout << " vecteur avec la plus grande norme est  (par reference) :"<<endl;
	v1.normaxr(v2);
}