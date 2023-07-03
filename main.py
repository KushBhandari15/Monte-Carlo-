# -*- coding: utf-8 -*-
"""
Created on Sun Dec  4 19:30:24 2022

@author: Kush Bhandari
"""

import matplotlib.pyplot as plt
import numpy as np
from random import random

temp1 = np.arange(1, 1001)
temp2 = np.arange(1,1001)

for i in temp1:
    bin = np.zeros(i)

    for b in range(i):
        bin[int(i * random())] += 1

    n=0
    for a in bin:
        if(a!=0):
            n=n+1

    temp2[i-1] = n

plt.plot(temp1, temp2)
plt.show()

from sklearn.linear_model import LinearRegression

linear = LinearRegression()
linear.fit(temp1.reshape(-1, 1),temp2.reshape(-1, 1))
incpt_y = linear.intercept_

print("Scipy Linear Regression Solution\n")

print("rvalue: ", linear.score(temp1.reshape(-1,1), temp2.reshape(-1,1)))
print("slope: ", linear.coef_)
print("intercept: ", incpt_y)
