def ask():
    height = input("Height: ")
    return height

def mario():
    while True:
        height = ask()
        if height in range(1,9):
            break
        else:
            print("INVALID")
    a_string = " "
    brick = "#"
    x = 1
    while x <= height:
        result = a_string * (height-x) + brick * (x)
        print(result)
        x += 1

mario()