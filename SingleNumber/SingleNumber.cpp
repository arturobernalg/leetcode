//
// Created by Arturo Bernal on 1/6/22.
//

#include "SingleNumber.h"


int main (){
    SingleNumber singleNumber;
    //std::vector<int> vector = {-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,354};
    std::vector<int> vector = {1,3,3,1,2};
    singleNumber.singleNumber(vector);
}


int SingleNumber::singleNumber(std::vector<int> &nums) {

    std::map<int, int> map;

    for (int & num : nums) {
        if (map.find(num) == map.end()){
            map.insert ( std::pair<int,int>(num,1) );
        }else{
            map.find(num)->second = 2;
        }
    }
    for (std::pair<int, int> element : map) {
        if(element.second == 1){
            return element.first;
        }
    }
    return 0;
}

