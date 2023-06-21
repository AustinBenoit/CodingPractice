from sys import stdin

def sum_digits(num):
    while num >= 1:
        return int(num % 10) + sum_digits(num/10)
    return 0;
    
def min_digits(num):
    # the value cannot be bigger than 100
    for i in range(11, 101):
        sum = sum_digits(num)
        if  sum == sum_digits(num * i):
            return i
    return 100
    
def main():
    for number in stdin:
        if int(number) != 0:
            
            print(min_digits(int(number)))
        

if __name__ == '__main__':
    main()