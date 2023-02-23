1   
def add(a,b):
    print(a+b)
def sub(a,b):
    print(a-b)
def mul(a,b):
    print(a*b)
def div(a,b):
    print(a/b)
con=input("Do you want to continue :")
while(con=="Yes"):
    inp1=float(input("Enter your 1st number :"))
    inp2=float(input("Enter your 2nd number :"))
    inp=float(input("Enter which operation to perform :\n1)Add\n2)Sub\n3)div\n4)mul :"))
    if(inp==1):
        add(inp1,inp2)
    elif(inp==2):
        sub(inp1, inp2)
    elif(inp==4):
        mul(inp1, inp2)
    elif(inp==3):
        div(inp1, inp2)
    con=input("Do you want to continue :")
    
