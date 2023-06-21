import calendar

def main():
    day_num, month = input().split(' ')
    month = int(month)
    day_num = int(day_num)
    
    day = calendar.weekday(2009, month, day_num)
    print(calendar.day_name[day])
    return

if __name__ == "__main__":
    main()