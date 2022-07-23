class marks_not_in_range(Exception):
    pass

marks = []
for i in range(1, 4):
    while(True):
        try:
            print("Enter marks of subject", i, ": ")
            data = int(input())
            if data < 0 or data > 100:
                raise marks_not_in_range
            else:
                marks.append(data)
                break

        except marks_not_in_range:
            print('marks invalid')

perc = sum(marks)/3
print('Percentage of 3 subjects is', round(perc, 2), '%')