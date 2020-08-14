# -*- coding: utf-8 -*-
"""
Created on Sat Aug 15 04:28:06 2020

@author: Azeemushan
"""

import math
def prime_range(num_range):
    primes = [True]*(num_range + 1)
    primes[0] = primes[1] = False
    for num in range(2,int(math.sqrt(num_range))+1):
        if primes[num] == True:
            for i in range(num*num,num_range+1,num):
                primes[i] = False
    for i in range(len(primes)):
        if primes[i] == True:
            print(i,end = " ")



n = int(input("Enter the number - "))
prime_range(n)
