casos = int(input())

while casos > 0:
    
    signos = input()
    maximo = 1
    largo = len(signos)
    i = 0
    while i < largo:
        
        if signos[i] != "=":
            necesito = 0
            j = i
            while j < largo:
                if signos[i] != signos[j] and signos[j] != "=":
                    break
                elif signos[i] == signos[j]:
                    necesito += 1
                j += 1
            
            necesito += 1
            if necesito > maximo:
                maximo = necesito
            i += j-i
        else:
            i += 1
    
    print(maximo)
    casos -= 1