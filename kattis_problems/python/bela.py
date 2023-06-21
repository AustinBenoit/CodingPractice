def points(num, s, ds):
    if num == 'A':
        return 11
    elif num == 'K':
        return 4
    elif num == 'Q':
        return 3
    elif num == "J":
        if s == ds:
            return 20
        else:
            return 2
    elif num == 'T':
        return 10
    elif num == '9':
        if s == ds:
            return 14
        else: 
            return 0
    else:
        return 0;
        
def main():
    hands, dom_suit = input().split(' ');
    total_points = 0
        
    for x in range(0, 4 * int(hands)):
        card = input()
        suit = card[1]
        value = card[0]
        total_points += points(value, suit, dom_suit)
        
    print(total_points)
        
        
if __name__ == "__main__":
    main()