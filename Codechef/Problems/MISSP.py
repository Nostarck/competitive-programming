cases = int(input())#cases
while cases != 0:
    nDolls = int(input()) #arraylen
    dolls = []
    i = 0
    while(i < nDolls):
        element = int(input())#element
        dolls += [element]
        i += 1
    while(len(dolls)!= 0):
        count = 0
        dolls.sort()
        for doll in dolls:
            if doll == dolls[0]:
                count += 1
                
        if count%2 != 0:
            print(dolls[0])
            break
        else:
            dolls = dolls[count:]

    cases -= 1