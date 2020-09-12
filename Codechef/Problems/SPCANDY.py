cases = int(input())

while cases != 0:
    candies,students = map(int,input().split())
    if students == 0:
        print(0,candies)
    else:
        Response1 = candies // students
        Response2 = candies - (Response1 * students)
        print(Response1,Response2)
    cases -= 1