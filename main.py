if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = list(arr)
    
    arr.sort(reverse = True)
    for i in range(1, len(arr)):
        if arr[0] != arr[i]:
            print(arr[i])
            break
    