a=[1,2,3,4,5,6,7,8,9,10]
b=list(filter(lambda x:x%2==0,a))
c=list(map(lambda x:x**3,b))
print("Cube of first 5 even no. is ",c)

