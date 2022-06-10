//
// Created by Arturo Bernal on 10/6/22.
//

#include "CountStrictlySmallerGreaterE.h"


int main (){

    std::vector<int> vector = {-3,3,3,90};
    CountStrictlySmallerGreaterE countStrictlySmallerGreaterE;

    countStrictlySmallerGreaterE.countElements(vector);


    return 0;
}
int CountStrictlySmallerGreaterE::countElements(std::vector<int> &nums) {
    int max = *std::max_element(nums.begin(), nums.end());
    int min = *std::min_element(nums.begin(), nums.end());

    int count =0;
    for (int num : nums) {
        if(num<max && num>min) {
            count++;
        }
    }

    return count;

}
