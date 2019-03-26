from cs50 import get_int
def main():
    #infinite while loop with conditional break statement
    while True:
        userInput = get_int("Enter in an integer: ")
        if userInput >=0 and userInput <=23:
            break;
    #Nested for loops
    for i in range (userInput):
        for j in range (userInput):
            if i+j >= userInput - 1:
                print("#", end="")
            else:
                print(" ", end = "")
        print("")
if __name__ == "__main__":
    main()