# Monte-Carlo-
Monte Carlo simulation for an analysis of a balls and bins problem

For this lab you will run a Monte Carlo simulation for an analysis of a balls and bins problem. For this problem we are interested in knowing the number of non-empty bins when N balls are thrown at random into N bins. For this assignment you are to write code to run a simulation for each N from 1 to 1000, and plot the results using the matplotlib plot function.  When you do this you should see a striking linear relationship in the output. We would like to know the slope of this linear relationship. Write code to run a linear regression to find the best fit line for your dataset. Your output should be similar to the following:

SciPy Linear Regression Solution 
 slope:  0.6325801874018306
 intercept: -0.02602000798390236        
 rvalue: 0.997749733854947

Notice that the rvalue is very close to 1, and the slope is very close to the number 1- 1/e = 0.6325801874018306. We leave this as an optional exercise to show why that is so.

