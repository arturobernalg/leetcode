//
// Created by Arturo Bernal on 29/5/22.
//


#include "PlusOne.h"


int main() {
    PlusOne plusOne;
    std::vector<int> vector = {6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3};
    //std::vector<int> vector = {9,9};
    //std::vector<int> vector = {1,2,3};
    //std::vector<int> vector = {8,9,9,9};
    //std::vector<int> vector = {9};
    std::vector<int> out = plusOne.plusOne(vector);

    for (int i: out)
        std::cout << i << ' ';

}


std::vector<int> PlusOne::plusOne(std::vector<int> &digits) {

    int rest = 0;
    int size = digits.size();
    for (int i = size-1; i >= 0 ; i--) {
        int needSum = 0;    
        if (i == size-1)
        {
            needSum = 1;
        }else{
            needSum = 0;
        }
        
        if (digits[i] + rest + needSum > 9){
            digits[i] = 0;
            rest = 1;
        }else {
            digits[i] = digits[i] + 1;
            rest = 0;
            break;
        }

    }
    if (rest > 0) {
        digits.resize(size+1);
        digits[0]=1;
    }

    return digits;
}
