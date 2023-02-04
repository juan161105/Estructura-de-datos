#Juan Pablo Andrade
#8978239
#03/02/2023
#punto 1
matriz=[[11, 23, 76, 34, 11],
        [14, 30, 92, 30, 101],
        [12, 45, 58, 92, 22],
        [74, 56, 49, 56, 100],
        [99, 5, 28, 47, 99]]

def verificarDiagonales(matriz):
    x=len(matriz)
    for j in range(x):
        if matriz[j][j]!=matriz[j][x-j-1]:
            return False
    return True
coinciden=verificarDiagonales(matriz)
print(coinciden)


#punto 2
def escapicua(lista):
    lista2=[]
    x=False
    for j in lista:
        lista2.insert (0, j)
    if lista==lista2:
        x=True
    print (x)
escapicua([42,12,90,90,12,42])


#punto 3A
def diferenciaListas(listaA, listaB):
    listac=[]
    for j in listaA:
        if listaA.count(j)>listaB.count(j) and j not in listac:
            for i in range(listaA.count(j)-listaB.count(j)):
                listac.append(j)
    return listac

listaA=[40, 10, 22, 12, 33, 33, 33]
listaB=[41, 22, 31, 15, 13, 12, 33, 19]
listac=diferenciaListas(listaA, listaB)

print(listac)


#punto 3B
def comparacionListas():
    inicio=int(input())
    for i in range(inicio):
        lista1=[int(j) for j in input().split()]
        lista2=[int(j) for j in input().split()]
        diferencia=diferenciaListas(lista1, lista2)
        print(diferencia)

comparacionListas()


#punto 4
def mostrarPrimos(num):
    print("Números primos entre 1 y", num, ":")
    primos=[]
    suma=[]
    for i in range(2, num + 1):
        if esPrimo(i):
            primos.append(i)
            if esPrimo(sumaPrimos(i)):
                suma.append(i)
    for i in range (len(primos)):
        if i == len(primos) -1:
            print("--> {}".format(i))
        else:
            print("--> {},".format(i))

    print("Números entre 1 y", num, "con suma de dígitos con valor primo:")
    print(suma)

def esPrimo(i):
    if i<2:
        return False
    for j in range(2, int(i**0.5) + 1):
        if i%j == 0:
            return False
    return True

def sumaPrimos(i):
    suma=0
    while i>0:
        suma += i%10
        i= i//10
    return suma
mostrarPrimos(100)


#unto 5
def sumarValoresMatrizR(mat, par, j):
    if j == len(par):
        return 0
    a, b=par[j]
    suma=0
    if a in mat:
        for x, y in mat[a]:
            if b == x:
                suma =+ y
    return suma + sumarValoresMatrizR(mat, par, j + 1)

def sumarValoresMatriz(mat, par):
    return sumarValoresMatrizR(mat, par, 0)
    
dispersa={0 : [(0, 1), (5, 4), (7, 5)],
        1 : [(6, 4), (7, 7)],
        2 : [(0, 2), (1, 2), (4, 9), (6, 1)],
        4 : [(2, 8), (3, 1), (5, 7)],
        6 : [(0, 3), (5, 6), (7, 2)],
        7 : [(0, 4), (1, 4), (2, 7)],
        8 : [(1, 9), (3, 8), (5, 7), (7, 6)]}

print(sumarValoresMatriz(dispersa, [(0, 0), (8, 3), (3, 5), (7, 2), (4, 3), (4,6)]))

