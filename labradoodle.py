def cargarNum (n, m):
    data = list(input().split(' '))
    n = data[0]
    m = data[1]
    return n, m

def cargarPalabras (dic, pala, n, m):
    i = 0
    while (i < n):
        dic.append(input())
        i = i + 1
    i = 0
    while (i < m):
        pala.append(input())
        i = i + 1

def buscarPalabras (dicc, pala):
    s = 0
    p = 0
    prefa = pala[0: 3]
    sufa = pala[len(pala) - 3: len(pala)]
    palabraPref = ''
    palabraSuf = ''
    
    
    for dic in dicc:
        prefb = dic[0: 3]
        sufb = dic[len(dic) - 3: len(dic)]
        
        
        
        if (prefa == prefb):
            p = p + 1
            palabraPref = dic
        
        if (sufa == sufb):
            s = s + 1
            palabraSuf = dic

    if (s == 1 and p == 1):
        print(f"{palabraPref} {palabraSuf}")
    else:
        if (s > 1 or p > 1):
            print("ambiguous")
        else:
            print("none")
    
    #print(f"s = {s}\np = {p}\npalapref = {palabraPref}\n palasuf = {palabraSuf}")


n = 0
m = 0
diccionario = []
palabras = []

i = 0
n, m = cargarNum (n, m)
n = int(n)
m = int(m)
cargarPalabras (diccionario, palabras, n, m)

for pala in palabras:
    buscarPalabras(diccionario, pala)