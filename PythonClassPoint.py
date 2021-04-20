import math
class point:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def setx(self,val):
        self.x=val
    def sety(self,val):
        self.y=val
    def getx(self):
        return self.x
    def gety(self):
        return self.y
    def move(self,d):
        return d

    def movex(self,a):
        if a>0:
            self.x+=a
            return self.x
        elif a<0:
            a=-a
            self.x-=a
            return self.x
        else:
            return move(self.x)
    def movey(self,b):
        if b>0:
            self.y+=b
            return self.y
        elif b<0:
            b=-b
            self.y-=b
            return self.y
        else:
            return move(self.y)
def dist(p,q):
        a=q.x-p.x
        b=q.y-p.y
        c=math.sqrt((a*a)+(b*b))
        return c

class rect(point):
    def __init__(self,p,q):
        self.x1=p.x
        self.y1=p.y
        self.x2=q.x
        self.y2=q.y
    def setP(self,x,y):
        self.x1=x
        self.y1=y
    def setQ(self,x,y):
        self.x2=x
        self.y2=y
    def getP(self):
        return self.x1,self.y1
    def getQ(self):
        return self.x2,self.y2
    def getWidth(self):
        return self.x2-self.x1
    def getHeight(self):
        return self.y2-self.y1
    def getArea(self):
        return self.getWidth()*self.getHeight()

a=point(3,4)
b=point(6,8)
c=rect(a,b)
print(c.getArea())
