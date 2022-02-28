def main():
    num_phrases = int(input())
    for i in range(0, num_phrases):
        
        phrase = input();
        if "Simon says" == phrase[:10]:
            print(phrase[10:])
        
    
if __name__ == '__main__':
    main()