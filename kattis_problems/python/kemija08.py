#!/usr/bin/python

def main():
    in_str = input();
    in_str = in_str.replace("apa", "a")
    in_str = in_str.replace("epe", "e")
    in_str = in_str.replace("ipi", "i")
    in_str = in_str.replace("opo", "o")
    in_str = in_str.replace("upu", "u")
    
    print(in_str)

if __name__ == "__main__":
    main()
