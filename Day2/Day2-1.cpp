// function enables subtraction of two int a and int b

#include <iostream>

int substract(int a, int b){


    return b-a;
}

int main(){
    std::cout<< "Enter Two Number: "<< std::endl;
    int a,b,c;
    std:: cin>> a;
    std:: cin>> b;

    c = substract(a,b);

    std::cout<< c;

}