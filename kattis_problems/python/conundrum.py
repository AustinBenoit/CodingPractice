def main(): 
    text = input();
    text_len = len(text);
    
    name = "PER"*text_len
    
    days = 0;
    
    for i in range(text_len):
        if name[i] != text[i]:
            days = days + 1
    
    print(days)


if __name__ == "__main__":
    main()