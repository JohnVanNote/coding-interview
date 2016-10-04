#!/usr/bin/env python
# solution.py
##
# John Van Note
# 2016-10-02
##
# Solves balanced brackets problem
##
"""Solving the balanced bracket problem"""

# determine when a string consists of matching parenthesis
# @param expression is a string consisting of only bracket chars
# @return True if the brackets are balanced
def is_matched(expression):
    """Determines if a string of only brackets is balanced"""
    length = len(expression)
    if (length % 2) != 0:
        return False
    stack = []
    for i in xrange(length):
        bracket = expression[i]
        match = get_grouping(bracket)
        if not stack:
            stack.append(bracket)
        else:
            prev = stack[len(stack)-1]
            if match == prev:
                stack.pop()
            else:
                stack.append(bracket)
    return stack == []

# simple helper that returns map of grouping values and doesn't clutter the code
# @return the corresponding pair of matching values or None
def get_grouping(bracket):
    """Returns corresponding pait of brackets"""
    groups = {
        '}' : '{',
        ']' : '[',
        ')' : '('
    }
    return groups.get(bracket, None)

# main
def main():
    """Main function"""
    str_num = int(raw_input().strip())
    for num in xrange(str_num):
        expression = raw_input().strip()
        if is_matched(expression):
            print "YES"
        else:
            print "NO"

if __name__ == '__main__':
    main()
