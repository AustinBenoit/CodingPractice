class Cities:
    
    def __init__(self):
        self.cities_list = []
    
    def add_cities(self, city):
        if city not in self.cities_list:
            self.cities_list.append(city)
        
    def number_cities(self):
        return len(self.cities_list)


def main():
    test_case = int(input())
    
    for i in range(test_case):
        visited = Cities()
        
        input_cities = int(input())
        
        for j in range(input_cities):
            visited.add_cities(input())
        print(visited.number_cities())

    return
    

if __name__ == "__main__":
    main()