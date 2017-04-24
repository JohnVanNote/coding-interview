#!/usr/bin/env python
#
# longest-palindrome.py
#
# John Van Note
# 2014-09-21
#

# longestPalindrome
# determines the longest palindrome in a string
# @return the longest palindrome
def longestPalindrome(string):
    str_length = len(string)
    if str_length < 2:
        return string

    half_length = str_length / 2
    pal_length = 0   # length of the longest palindrome (temporarily)
    temp_pal = "" # the temporary longest palindrome
    real_pal = string[0] # the real longest palindrome
    
    for i in range(0 , str_length-1):
        temp_pal = string[i]
        front = i
        back = i
        if i != str_length:
            if string[i] == string[i+1]:
                temp_pal = string[i:i+1]
                back = i+1
        for j in range(1, half_length+1):
            prev = front - j
            post = back + j
            if (prev >= 0) and (post < str_length):
                if string[prev] == string[post]:
                    temp_pal = string[prev:post+1]
                    if len(temp_pal) > len(real_pal):
                        real_pal = temp_pal
                else:
                    break
            else:
                break
    return real_pal

def main():
    string = raw_input("Enter a string: ")
    pal = longestPalindrome(string)
    print "The longest palindrome in " + string + " is " + pal

if __name__ == "__main__":
    main()
