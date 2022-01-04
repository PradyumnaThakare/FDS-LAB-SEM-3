# List of Students as given

student=[1,2,3,4,5,6,7,8,9,10]
a=[]
b=[]
c=[]
d=[]

A=[1,2,6,7] # List of Students who plays Cricket
B=[3,4,6,8] # List of Students who plays Badminton
C=[6,7,8,9] # List of Students who plays Football

for i in range(len(student)):
    
    # List of Students who play both cricket and badminton
    if student [i] in A and student[i] in B:
        a.append(student[i])
    
    # List of Students who play either cricket or badminton but not both 
    if student [i] in A and student [i] not in B or student[i] in B and student[i] not in A :
        b.append(student [i])
        
    # List of Students who play neither cricket nor badminton
    if student [i] not in A and student[i] not in B:
         c.append(student[i])
        
    # List of Students who play cricket and football but not badminton
    if student [i] in A and student [i] in C and student[i] not in B:
        d.append(student[i])
        
n=1
while(n>0):
    print("\n*-*-*-*-*-*-Menu*-*-*-*-*-*-*-*-*-")
    print(" Enter Your Choice From (1--5)")
    print("1] Student who play both cricket and badminton ")
    print("2] Student who play either cricket or badminton but not both ")
    print("3] Student who play neither cricket nor badminton ")
    print("4] Student who play cricket and football but not badminton ")
    print("5] No of student who play cricket and football but not badminton ")

    choice = int(input("\nENTER YOUR CHOICE :  "))

    if (choice == 1):
        print(" Student who play both cricket and badminton :",a)

    
    elif (choice == 2):     
        print(" Student who play either cricket or badminton but not both :",b)

    elif (choice == 3):
      print(" Student who play neither cricket nor badminton :",c)  
        

    elif (choice == 4):
        print(" Student who play cricket and football but not badminton :",d)

    elif (choice == 5):
        print(" No of student who play cricket and football but not badminton :", len(d))

    print("\n")
    x = int(input("Do You Want to Continue ? (0/1)\nPress 1 If You Want to Continue: "))
    print("---------------------------------------------------------------")
    if x == 0:
        break
    else:
        print("\n")

