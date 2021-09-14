def div(x, y):
    return x / y

print("Select operation.")
print("1.Divide")

a=float(input("enter 1st no"))
b=float(input("enter 2st no"))
choice = input("Enter choice:")

if choice=='1':
    print(a,"/",b,"=", div(a,b))
else:
        print("Invalid Input")
   