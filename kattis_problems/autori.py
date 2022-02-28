#!/usr/bin/python

import string

str = input()

names = str.split("-")
number_of_names = len(names)
outputstr = ""
for name in names:
   outputstr = outputstr + name[0]
   
print (outputstr)