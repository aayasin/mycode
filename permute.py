# Author: Ahmad Yasin
# Nov 2024

def permute(l, debug=0):
    end = len(l)
    def prn():
        x = ''.join(l)
        prn.result += [x]
        if not debug: return
        prn.count += 1
        print(prn.count, x)
    prn.result = []
    prn.count = 0
    def swap(i,j):
        x=l[i]
        l[i]=l[j]
        l[j]=x
    def f(start):
        if start == end-2:
            prn()
            swap(start, start+1)
            prn()
            swap(start, start+1)
            return
        for i in range(start, end):
            if debug: print('>', start, end, i)
            f(start+1)
            if i+1 < end: swap(0, i+1)
    f(0)
    return prn.result

from sys import argv
if __name__ == "__main__":
  assert len(argv) > 1
  input = argv[1]
  input = [c for c in input]
  r = permute(input)
  print('\n'.join(r))
