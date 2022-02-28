import math

def main():
    test_cases = input()
    
    for test in range(0 , int(test_cases)):
        v_0, theta, x, h_1, h_2 = input().split(" ")
        
        theta = math.radians(float(theta))
        
        h_0 = float(x) * math.tan(theta) - 0.5 * 9.81 * (float(x) / (float(v_0) * math.cos(theta))) **2
        
        if( float(h_1) + 1 <= h_0 and float(h_2) - 1 >= h_0  ):
            print('Safe')
        else:
            print('Not Safe')

if __name__ == '__main__':
    main()