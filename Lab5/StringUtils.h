#pragma once

#include <string>

using std::string;

class StringUtils {
  private:
    string s;

  public:
    // Constructors
    StringUtils();  // Default constructor (set s to "")
    StringUtils(string & str);  // Set s equal to the str passed in

    // Return a copy of s with only its first
    // character capitalized
    string capitalize();

    // Return a copy of s where all tab characters
    // are expanded using spaces, i.e., ' '
    // Assume tabs equal 4 spaces.
    string expandtabs();

    // Return true if all characters in s are alphanumeric
    // and there is at least one character in s, false
    // otherwise
    bool isalnum();

    // Return true if all characters in s are alphabetic
    // and there is at least one character in S, false
    // otherwise
    bool isalpha();

    // Return true if all characters in s are digits
    // and there is at least one character in s, false
    // otherwise
    bool isdigit();

    // Return true if all alphabetic characters in s are lowercase
    // and there is at least one alphabetic character in s, false
    // otherwise
    bool islower();

    // Return true if all characters in s are whitespace (spaces,
    // tabs, or newlines) and there is at least one character in
    // s, false otherwise
    bool isspace();

    // Return true if all alphabetic characters in s are uppercase
    // and there is at least one alphabetic character in s, false
    // otherwise
    bool isupper();

    // Return a copy of s converted to lowercase
    string lower();

    // Set the value of s to the string passed in
    void set(string & str);

    // Return a copy of the string s with leading and trailing
    // whitespace removed
    string strip();

    // Return a copy of s coverted to uppercase
    string upper();
};
