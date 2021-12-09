#include<iostream>
using namespace std;

class Test {
public:
 int x=0;  // declarer  variable static.
void call()
{
x +=1 ;         
}
void nbr_call(){
    cout<<"la fonction a ete appele "<<x<<" fois"<<endl;
}
};
main() {
Test T;
T.call();
T.call();
T.call();
T.call();
T.call();
T.nbr_call();
return 0;
}
