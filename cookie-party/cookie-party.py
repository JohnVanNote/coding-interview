#!/bin/python
import sys

def main():
    ppl, cookies = raw_input().strip().split(' ')
    ppl, cookies = [int(ppl), int(cookies)]
    
    temp = ppl
    i = 2
    while(cookies > temp):
        temp = ppl * i
        i = i + 1
    print temp - cookies

if __name__ == '__main__':
    main()
