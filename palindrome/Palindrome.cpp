//
// Created by Arturo Bernal on 26/5/22.
//

#include "Palindrome.h"


int main(int argc, char **argv) {

    Palindrome palindrome;

     //std::string strPal = "A man, a plan, a canal: Panama";
    // std::string strPal = ".,";
    //std::string strPal = "0P";

    assert(palindrome.isPalindrome( "A man, a plan, a canal: Panama"));
    assert(palindrome.isPalindrome(  ".,"));
    assert(!palindrome.isPalindrome( "0P"));

    return 0;
}

bool Palindrome::isPalindrome(std::string s) {

    int len = s.length() - 1;
    int y = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    while (y < len) {
        if (!isalpha(s[y]) && !isdigit(s[y])) {
            y++;
            continue;
        } else if (!isalpha(s[len]) && !isdigit(s[len])) {
            len--;
            continue;
        } else if (s[len] != s[y]) {
            return false;
        } else {
            len--;
            y++;
        }
    }

    return true;
}