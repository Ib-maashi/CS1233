# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
class Dot():
    def __init__(self,alive,line1,line2,line3):
        self.line1=None
        self.line2=None
        self.line3=None
        self.alive=True
    
    def state(self):
        if( line1!=None and line2!=None and line3!=None):
            self.alive=False


def main():
    start_dots=int(input("How many dots to start with:"))
    alive_dots=[]
    dead_dots=[]
    for i in range(start_dots):
        alive_dots.append(Dot(True,None,None,None))
    runs=1
    while True:
        if alive_dots[0].line1==None:
            alive_dots[0].line1=alive_dots[1]
        elif alive_dots[0].line2==None:
            alive_dots[0].line2=alive_dots[1]
        elif alive_dots[0].line3==None:
            alive_dots[0].line3=alive_dots[1]
            alive_dots[0].alive=False
            dead_dots.append(alive_dots.pop(alive_dots[0]))
        
        if alive_dots[1].line1==None:
            alive_dots[1].line1=alive_dots[0]
        elif alive_dots[1].line2==None:
            alive_dots[1].line2=alive_dots[0]
        elif alive_dots[1].line3==None:
            alive_dots[1].line3=alive_dots[0]
            alive_dots[1].alive=False
            dead_dots.append(alive_dots.pop(alive_dots[1]))
        alive_dots.append(Dot(True,alive_dots[0],alive_dots[1],None))
        if len(alive_dots)==1:
            break
        runs+=1
    print(runs)

        
        
main()