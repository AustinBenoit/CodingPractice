def remove_dups(dup_str):
    new_str = ''
    prev_letter = '';
    
    for letter in dup_str:
        if letter != prev_letter:
            new_str += letter
            prev_letter = letter
    
    return new_str

def main():
    dup_str= input();
    print(remove_dups(dup_str))
    

if __name__ == "__main__":
    main()