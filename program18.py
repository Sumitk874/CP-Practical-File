#Input in following format
#add/modify/delete/access(any one of these operations),empId,name,age,experience,salary,gender
#add and modify takes all the parameteres
#access and delete takes only empID

emp = {}

while True:
    print(emp)
    cmd = input("Enter your command: eg(add/modify/delete/access,employeeid,name,age,experience,salary,gender)format  : ")
    cmd = cmd.lower()
    cmd = cmd.split(',')
    if cmd[0] == 'quit':
        break
    elif cmd[0] == 'add':
        emp[cmd[1]] = [cmd[2],cmd[3],cmd[4],cmd[5],cmd[6]]
    elif cmd[0] == 'delete':
        emp.pop(cmd[1])
    elif cmd[0] == 'modify':
        emp[cmd[1]] = [cmd[2],cmd[3],cmd[4],cmd[5],cmd[6]]
    elif cmd[0] == 'access':
        print(emp[cmd[1]])
    else:
        print("Wrong Command! Try again.")

print(emp)


