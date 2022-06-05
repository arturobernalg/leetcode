//
// Created by Arturo Bernal on 5/6/22.
//
#include "AddDigits.h"

int main (){

    AddDigits digits;
    int num = 38;
    digits.addDigits(num);
    return 0;
}

int AddDigits::addDigits(int &num) {
    int aux = 0;
    do {
        while (num > 0)
        {
            int digit = num%10;
            num /= 10;
            aux = aux + digit;
        }
        if (aux>9){
            num = aux;
            aux = 0;
        }

    } while (num>9);

    return aux;

}
