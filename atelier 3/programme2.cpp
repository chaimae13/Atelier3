#include <iostream>
using namespace std;
class shape{
    public:
    int lgr;
    int htr;
    
    shape(){//constructeur pour definir ls valeur du largeur et hauteur
        lgr=2;
        htr=3;
}
};
class rectangle: public shape {//sous-classe du classe shape
    public:
int area(){//fonction pour calculer surface du rectangle 
    cout<<"l'aire du reectangle est " <<lgr*htr<<endl;
}
};
class triangle: public shape {//sous-classe du classe shape
    public:
    int area(){//fonction pour calculer surface du triangle
    cout<<"l'aire du triangle est " <<((lgr*htr)/2)<<endl;
}
};
int main(){
    rectangle rectangle;
    triangle triangle;
    rectangle.area();
    triangle.area();
    return 0;
};



