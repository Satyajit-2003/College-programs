total = int(input(("Enter total classes: ")))
abs = int(input("Enter number of absent: "))
temp = abs

perc = (abs/total) *100

while perc <= 25:
    abs = abs +1
    total = total +1
    perc = (abs/total) *100

print("You can be absent in", abs-temp,'more classes')

