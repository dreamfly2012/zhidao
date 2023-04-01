temperatures = input("请输入7天温度").split()

average = 0
sum = 0
for v in temperatures:
    sum += int(v)

average = sum / 7

print("7天平均温度是:"+str(average))
