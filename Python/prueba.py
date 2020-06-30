from time import sleep

y = range(10)
while True:
    for x in range(10):
        print(" "*x, end = (""))
        print("*"*x)
        print("*"*(int(y)-1))
        sleep(0.1)
