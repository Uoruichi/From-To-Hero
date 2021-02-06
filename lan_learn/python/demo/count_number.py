'''
### 任务：
1-自动生成100个[1,10]之间的整数
2-统计100个整数中1～10的个数为多少
'''

import random

lst = []
for i in range(100):
    n=random.randint(1,10)
    lst.append(n)
print(lst)  

d={}    
for n in lst:
    if n in d:
        d[n] += 1
    else:
        d[n] = 1
print(d)

