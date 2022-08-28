def index():

    count=1
    for i in range(10**9):
        count+i
    x=str(input())
    if x[-1]=="r":
        print("er")
    else:
        print("ist")

if __name__=="__main__":
    index()