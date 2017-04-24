#!/usr/bin/env python

import re

# main function will read from stdin and print to stdout
def main():
    CORRECT = 'pangram'
    INCORRECT = 'not pangram'
    sentence = raw_input()
    if is_pangram(sentence):
        print CORRECT
        return
    print INCORRECT
    return

# determines if a string is a pangram
# @param the string
# @return boolean value true if pangram, false otherwise
def is_pangram(string):
    string = re.sub("[^a-zA-Z]+", "", string) # remove non-alphabetical characters
    string = string.lower() # make everything lowercase for comparison
    list_string = list(string) # turn string into a list
    set_string = set(list_string) # dedup list
    set_length = len(set_string) # get length of the set
    return set_length == 26

if __name__ == '__main__':
    main()
