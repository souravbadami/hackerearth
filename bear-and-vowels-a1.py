#!usr/bin/env python
from __future__ import print_function
from collections import *
from heapq import *
from bisect import *
from math import *
from itertools import *
from random import *
 
def main():
    cases=int(raw_input())
    for i in xrange(cases):
        s=raw_input()
        vow_list=['a','e','i','o','u','y']
        count_vowels=0
        for letter in s:
            if letter in vow_list:
                count_vowels+=1
        if count_vowels < len(s)-count_vowels:
            print("hard")
        else:
            flag=0
            for j in xrange(0,len(s)-2):
                if s[j] not in vow_list:
                    if s[j] not in vow_list and s[j+1] not in vow_list and s[j+2] not in vow_list:
                        flag=1
                        print("hard")
                        break
            if flag==0:
                print("easy")
 
if __name__=='__main__':
	main()
