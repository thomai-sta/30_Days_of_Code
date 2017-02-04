ret_date = [int(temp) for temp in input().strip().split(' ')]
date = [int(temp) for temp in input().strip().split(' ')]

if (ret_date[2] > date[2]):
    print("10000")
elif (ret_date[2] == date[2] and ret_date[1] > date[1]):
    print("%d" % (500 * (ret_date[1] - date[1])))
elif (ret_date[2] == date[2] and ret_date[1] == date[1] and
      ret_date[0] > date[0]):
    print("%d" % (15 * (ret_date[0] - date[0])))
else:
    print("0")
