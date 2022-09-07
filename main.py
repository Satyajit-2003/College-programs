import math
if __name__ == "__main__":
    s1 = int(input())
    s2 = int(input())
    C = int(math.degrees(math.atan2(s1, s2)))
    print(90-C,chr(176), sep = '')
