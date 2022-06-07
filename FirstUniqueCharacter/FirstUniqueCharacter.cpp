//
// Created by Arturo Bernal on 6/6/22.
//


#include "FirstUniqueCharacter.h"


int main (){
    FirstUniqueCharacter firstUniqueCharacter;
    std::string  s  ="loveleetcode";
    firstUniqueCharacter.firstUniqChar(s);
    return 0;

}

int FirstUniqueCharacter::firstUniqChar(std::string &s) {

    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < s.size(); ++j) {
            if (s[i] == s[j]){
                count++;
            }
            if (count>1){
                break;
            }
        }
        if (count <= 1){
            return i;
        } else {
            count=0;
        }
    }

    return -1;
}
