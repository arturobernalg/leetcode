//
// Created by Arturo Bernal on 9/5/22.
//

#include "LengthOfLastWord.h"

int main() {
    LengthOfLastWord lengthOfLastWord;

    string s = "abc";
    lengthOfLastWord.lengthOfLastWord(s);
}


int LengthOfLastWord::lengthOfLastWord(string &s){


    string delimiter = " ";
    string token = s.substr(0, s.find(delimiter));

    return 0;
}