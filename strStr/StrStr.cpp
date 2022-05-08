//
// Created by Arturo Bernal on 8/5/22.
//

#include "StrStr.h"

int main() {

    StrStr strStr;

    // assigning value to string s
    //string haystack = "mississippi";
    //string needle = "issipi";

    string haystack = "abc";
    string needle = "c";

    strStr.strStr(haystack, needle);

}


int StrStr::strStr(string &haystack, string &needle) {

    if (needle.empty()) {
        return -1;
    }

    // declaring character array
    char char_array_haystack[haystack.length() + 1];

    char char_array_needle[needle.length() + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array_haystack, haystack.c_str());
    strcpy(char_array_needle, needle.c_str());

    if (needle.length() > haystack.length()) {
        return -1;
    }
    bool areEquals = true;
    for (int i = 0; i < strlen(char_array_haystack); i++) {
        if (strlen(char_array_haystack) - i < strlen(char_array_needle)) {
            return -1;
        }
        if (char_array_haystack[i] == char_array_needle[0]) {
            for (int x = 0; x < strlen(char_array_needle); x++) {
                if (char_array_needle[x] != char_array_haystack[i + x]) {
                    areEquals = false;
                    break;
                } else {
                    areEquals = true;

                }
            }

            if (areEquals) {
                return i;
            }
        }
    }
    return -1;
}
