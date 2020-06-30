def marioLoop(height):
    for x in range(int(height)):
        print(" "*(int(height)-x-1), end=(""))
        print("#"*(x+1), end=(""))
        print(" ", end=(""))
        print("#"*(x+1))

