#include <iostream>
using namespace std;
class mère{
    public:
    void display(){
        cout << " je suis classe mere " <<endl;
    }
};
class fille : public mère{//classe fille héritée 
    public:
void display(){
        cout << " je suis classe fille " <<endl;
    }
};
int main(){
    fille A;
    A.display();
}