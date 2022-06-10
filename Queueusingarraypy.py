class queuearray:
    def __init__(self, x):
        self.qu = []
        self.a = self.z = 0
        self.m = x

    def enq(self, n):
        if (self.m == self.z):
            print("\nFull")
        else:
            self.qu.append(n)
            self.z += 1

    def deq(self):
        if (self.a == self.z):
            print("\nEmpty")
        else:
            i = self.qu.pop(0)
            self.z -= 1

    def quprint(self):
        if (self.a == self.z):
            print("\nEmpty")
        for p in self.qu:
            print(p, "<--", end='')

    def qufr(self):
        if (self.a == self.z):
            print("\nEmpty")

        print("\nFront element of the Queue is:",
              self.qu[self.a])

if __name__ == '__main__':
    ob = queuearray(6)
    ob.quprint()
    ob.enq(10)
    ob.enq(20)
    ob.enq(30)
    ob.enq(40)
    ob.enq(50)
    ob.enq(60)
    ob.quprint()

    ob.enq(70)
    ob.quprint()

    ob.deq()
    print("\n\nQueue after deleting one node:\n")
    ob.quprint()
    ob.qufr()

