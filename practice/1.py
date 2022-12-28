
# val=input("Enter a value: ")
# floor_val=float(val)
# int_val=int(floor_val)
# print("Floor value of the input is= ",int_val)
# print("Ceil value of the intput is= ",int_val+1)

# def my_funtion(a,b,c):
#     if a<0:
#         print(a*(-1))
#     else:
#         print(a)
#     if b<0:
#         print(b*(-1))
#     else:
#         print(b)
#     if c<0:
#         print(c*(-1))
#     else:
#         print(c)
    
# a=int(input("Enter the value of'a':"))
# b=int(input("Enter the value of 'b':"))
# c=int(input("Enter the value of 'c':"))
# my_funtion(a,b,c)

player1=input("Enter the choice of player 1:")
player2=input("Enter the choice of player 2:")
if player1=="rock" and player2=="siser" or player1=="siser" and player2=="rock":
    if player1=="rock":
        print("Player 1 is the winner")
    else:
        print("Player 2 is the winner")
elif player1=="rock" and player2=="paper" or player1=="paper" and player2=="rock":
    if player1=="rock":
        print("Player 2 is the winner")
    else:
        print("Player 1 is the winner")
elif player1=="siser" and player2=="paper" or player1=="paper" and player2=="siser":
    if player1=="siser":
        print("Player 1 is ther winner")
    else:
        print("Player 2 is the winner")
else:
    print("Draw")