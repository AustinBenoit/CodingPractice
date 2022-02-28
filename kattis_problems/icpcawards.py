def main():
    number_teams = int(input())
   
    
    output_names = []
    university = []
    
    for x in range(number_teams):
        uni, team = input().split(" ")
        
        if uni not in university :
            
            university.append(uni)
            
            output_names.append(uni + " " + team)
        
        
    for x in range(12):
        print(output_names[x])
    
    return
    

if __name__ == "__main__":
    main()