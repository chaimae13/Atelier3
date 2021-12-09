#include <iostream>
using namespace std;
class complex{
    public:
    int Réel1;
    int Img1;
    int Réel2;
    int Img2;
    
void opération(char n ,int Réel1 ,int Img1 ,int Réel2,int Img2 ){
    switch (n){
    case '+' : cout<<"la somme est "<<Réel1+Réel2<<"+ ("<<Img1+Img2<<"i)"<<endl;
        break;
    case '-' :cout<<"la soustraction est " <<Réel1-Réel2<< "+("<<Img1-Img2<<"i)"<<endl;
        break;
    case '*' :
    cout<<"la multiplication est "<<Réel2*Réel1-Img1*Img2<<"+ ("<<Réel1*Img2+Réel2*Img1<<"i)"<<endl;
        break;
    default: cout<< "entrer une de ces signes '-' , '+' , '*' "<<endl;
        break;
    }
}
};

int main(){
    int Img1; 
    int Réel1;
    int Img2 ;
    int Réel2;
    char sign;
    cout<<"entrer partie reel puis partie imaginaire du 1ere nombre complex "<<endl;
    cin>> Réel1 >> Img1;
    cout<<"entrer partie reel puis partie imaginaire du 2eme nombre complex "<<endl;
    cin>> Réel2 >> Img2;
    cout<<"entrer sign '+' pour addition '*' pour multiplication '-' pour soustraction "<<endl;
    cin>> sign;
    complex A;
    A.opération(sign,Réel1,Img1,Réel2,Img2);
}

// methode 2
// #include <iostream>
// using namespace std;
// class complex{
//     public:
//     int Img1;
//     int Réel1;
//     int Img2;
//     int Réel2;
// void addition(int Img1,int Réel1,int Img2,int Réel2){
//     cout<<"la somme est "<<Réel1+Réel2<<"+("<<Img1+Img2<<"i)"<<endl;
// }
// void soustraction(int Img1,int Réel1,int Img2,int Réel2){
//     cout<<"la soustraction est "<<Réel1-Réel2<<"+ ("<<Img1-Img2<<"i)"<<endl;
// }
// void Multiplication(int Img1,int Réel1,int Img2,int Réel2){
//     cout<<"la soustraction est "<<Réel2*Réel1-Img1*Img2<<"+ ("<<Réel1*Img2-Réel2*Img1<<"i)"<<endl;
    
// }}; 

// int main(){
//     complex A;
//     int Img1; 
//     int Réel1;
//     int Img2 ;
//     int Réel2;
//     char sign;
//     cout<<"entrer partie reel puis partie imaginaire du 1ere nombre complex "<<endl;
//     cin>> Réel1>> Img1;
//     cout<<"entrer partie reel puis partie imaginaire du 2eme nombre complex "<<endl;
//     cin>> Réel2>> Img2;
//     cout<<"entrer sign '+' pour addition '*' pour multiplication '-' pour soustraction  "<<endl;
//     cin>> sign;
// if (sign=='+'){
//     A.addition(Img1,Réel1,Img2,Réel2);
// }
// else if (sign=='-'){
//     A.soustraction(Img1,Réel1,Img2,Réel2);
// }
// else if (sign=='*'){
//     A.Multiplication(Img1,Réel1,Img2,Réel2);
// }
// else {cout<< "entrer une de ces signes '-' , '+' , '*' "<<endl;
// }
// }