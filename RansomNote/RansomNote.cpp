//
// Created by Arturo Bernal on 5/6/22.
//

#include <map>
#include <unordered_map>
#include "RansomNote.h"


int main() {
    RansomNote perfectSquare;
    std::string ransomNote = "aa";
    std::string magazine = "ab";
    perfectSquare.canConstruct(ransomNote, magazine);
    return 0;
}


bool RansomNote::canConstruct(std::string &ransomNote, std::string &magazine) {
    std::unordered_map<char, int> magazineMap;
    for (char &k: magazine) {
        ++magazineMap[k];
    }

    for (char &i: ransomNote) {
        if (magazineMap.find(i) == magazineMap.end()) {
            return false;
        } else {
            if (--magazineMap[i] < 0) {
                return false;
            }
        }
    }
    return true;

}
