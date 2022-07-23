with open('/home/shady/Documents/CP Practical File/test.txt', 'r') as firstfile, open('/home/shady/Documents/CP Practical File/output.txt', 'a') as secondfile:
    for line in firstfile:
        secondfile.write(line)
