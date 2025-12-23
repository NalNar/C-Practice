// Determining the Size of Variable Types on Your Computer

#include <iostream>

int main(){
    using std:: cout;

    cout<< "The size of an int is:\t\t\t"
    << sizeof(int) << "bytes.\n";

    cout<< "The size of short int is: \t\t"
    << sizeof(short)<< "bytes.\n";

    cout<< "The size of long int is: \t\t"
    << sizeof(long)<<"bytes.\n";
    
    cout<<"The size of char is: \t\t\t"
    <<sizeof(char)<<"bytes.\n";
    
    cout<<"The size of float is: \t\t\t"
    <<sizeof(float)<<"bytes.\n";
    
    cout<< "The size of a double is: \t\t"
    <<sizeof(double)<<"bytes.\n";
    
    cout<< "The size of a boolean is: \t\t"
    <<sizeof(bool)<<"bytes.\n";




}

