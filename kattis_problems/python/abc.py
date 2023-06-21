#!/usr/bin/env python3

def get_order( given_list, order):
    given_list.sort()
    ordered_list = []
    
    for letter in order:
        if letter  == 'A':
            ordered_list.append(given_list[0])
            
        if letter  == 'B':
            ordered_list.append(given_list[1])
            
        if letter  == 'C':
            ordered_list.append(given_list[2])
    
    return ordered_list

def print_order(given_list):
    print("{} {} {}".format(given_list[0], given_list[1], given_list[2]))
    return

def main():
    # take in the inputs
    input_list = [int(x) for x in input().split()]
    order = input()
    # sort then print the input
    ordered_list = get_order( input_list, order)
    print_order(ordered_list)
    return

if __name__ == "__main__":
    main()