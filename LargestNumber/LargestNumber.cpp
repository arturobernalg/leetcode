//
// Created by Arturo Bernal on 10/6/22.
//

#include "LargestNumber.h"


int main() {

    LargestNumber largestNumber;
    std::vector<int> vector = {3, 6, 1, 0};

    largestNumber.dominantIndex(vector);

    return 0;
}

int LargestNumber::dominantIndex(std::vector<int> &nums) {

    // Declaring new vector
    std::vector<int> vect2;
    for (int num: nums) {
        vect2.push_back(num);
    }

    int max = *std::max_element(nums.begin(), nums.end());
    sort(nums.begin(), nums.end());

    int max2 = nums[nums.size() - 2];

    if (max2 * 2 <= max) {
        auto it = find(vect2.begin(), vect2.end(), max);
        return it - vect2.begin();
    } else {
        return -1;
    }

}
