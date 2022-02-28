#!/usr/bin/python3

jon = input()
doctor = input()

jon_a = 0;
doctor_a = 0;

for letter in jon:
    if letter == 'a':
        jon_a += 1;
        
for letter in doctor:
    if letter == 'a':
        doctor_a += 1;

if doctor_a > jon_a:
    print("no")
else:
    print("go")