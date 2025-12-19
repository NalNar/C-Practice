#include <iostream>

int main(){
    using std:: cout;

    enum weekend  {Sat,Sun};
    weekend today; 
    today = Sat;

    if(today == Sat || today == Sun){
        cout<< "Lets Enjoy!";
    }
}