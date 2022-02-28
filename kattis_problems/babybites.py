def check( sequence):
    for actual, number in enumerate(sequence.split(" ")):
        if( str(actual + 1) != number and number != "mumble"):
            return 'something is fishy'
    return 'makes sense'

def main():
    count = int(input())
    sequence = input()
    print(check(sequence))
    
if __name__ == '__main__':
    main()