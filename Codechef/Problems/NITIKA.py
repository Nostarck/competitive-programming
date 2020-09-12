cases = int(input())

while cases != 0:
    name = input()
    result = ""
    while True:
        spot = name.find(" ")
        if spot != -1:
            result += name[:spot][0] + ". "
            name = name[spot+1:]
        else:
            result += name
            break
    result = result.title()
    print(result)
    cases -= 1
