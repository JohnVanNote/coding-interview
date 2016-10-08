// soultion.cpp
//
// John Van Note
// 2016-10-02
//
// Determines how many characters (total) need to be removed from two strings to make them anagrams 
//
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

// takes two strings and returns the number of characters that need to be removed from both string so they will be anagrams
// @param one is one of the strings
// @param two is the other string
// @return the number (int) that need to be removed from both strings
int number_needed(string one, string two) {
    sort(one.begin(), one.end());
    sort(two.begin(), two.end());
    int count = 0;
    
    while((one != "") && (two != "")){
        char o0 = one[0];
        char t0 = two[0];
        string one_rm = one.substr(1, one.size()-1);
        string two_rm = two.substr(1, two.size()-1);
        if(o0 < t0) {
            one = one_rm;
            count++;
        }
        else if(o0 > t0) {
            two = two_rm;
            count++;
        }
        else {
            one = one.substr(1, one.size()-1);
            two = two.substr(1, two.size()-1);
        }
    }
    return count + one.size() + two.size();
}

// main
int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

