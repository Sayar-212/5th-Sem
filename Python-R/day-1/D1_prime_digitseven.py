import math
def isPrime(num):
            for i in range (2,int (math.sqrt(num))+1):
                       if ((num%i) == 0):
                                    return "Not Prime"
            return "Prime"
def digitsum_even(num):
            s=0
            while(num>0):
                        d=num%10
                        s+=d
                        num//=10
            if ((s%2) == 0):
                        return "Even Sum of Digits"
            return "Not even Sum of Digits"
for i in range (100,201):
            p= isPrime(i)
            e= digitsum_even(i)
            if p == "Prime" and e == "Even Sum of Digits":
                        print(i , end=" ")
       
