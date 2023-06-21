#!/usr/bin/python3

def repeat(string):
    dup = []
    for word in string.split(' '):
        if word not in dup:
            dup.append(word)
        else:
            return False
    return True
    
input_str = input();

if repeat(input_str):
    print("yes")
else:
    print("no")
