//
// Created by Arturo Bernal on 9/5/22.
//

#include <vector>
#include "LengthOfLastWord.h"

int main() {
    LengthOfLastWord lengthOfLastWord;

    string s = "Hello World";
    lengthOfLastWord.lengthOfLastWord(s);
}


int LengthOfLastWord::lengthOfLastWord(string &s){



    char char_array_haystack[s.length() + 1];
    strcpy(char_array_haystack, s.c_str());

    vector<string> myVector;

    for (int i = 0; i < strlen(char_array_haystack); ++i) {
        // first position blank
        if (isblank(char_array_haystack[i]) && i ==0){
            continue;
        }else{
            if (isblank(char_array_haystack[i])){
                int j =i+1;
                string concat;
                while (!isblank(char_array_haystack[j])){
                    j++;
                    concat+= char_array_haystack[j];
                }

                myVector.push_back(concat);

            }
        }


    }

    return 0;
}