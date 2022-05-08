//
// Created by Arturo Bernal on 8/5/22.
//

#include "Solution.h"
#include "vector"


int main(){

    Solution solution;
    vector<int> test = {3,3};
    int target = 6;


    solution.twoSum(test, target);


}

vector<int> Solution::twoSum(vector<int> &nums, int &target) {

    vector<int> returnVector;

    for(int x=0;x<nums.size();x++){
        for(int y=1;y<nums.size();y++){
            if(x != y) {
                if(nums[x] + nums[y] == target){
                    returnVector.clear();
                    returnVector.push_back(x);
                    returnVector.push_back(y);
                    break;
                }
            }

        }

    }

    return returnVector;
}
