a, b = map(int, input().split())

if a > b:
    a, b = b, a

if b % a == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
