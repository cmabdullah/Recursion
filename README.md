# Recursion

## Problem 1:

Write a recursive function that prints all the elements of an array of integers in reverse order. ([RecursionPracticeQuestions-UG1, problem 2](https://researchweb.iiit.ac.in/~syed.akhtar/teaching/cpro16/lab8/problem_statements/RecursionPracticeQuestions-UG1.pdf)) <br />


Input: <br />
5 <br />
69 87 45 21 47 <br />
Output: <br />
47 21 45 87 69 <br />

## Problem 2: <br />




Find the sum of the integers from 1 through n. Use recursion.(RecursionPracticeQuestions-UG1, problem 4)


Input:<br />
4 <br /> 
Output:<br />
10 <br /> 



**_Basic Mathematical Operations using Recursion_**

## Problem 3:

Write a recursive program to remove all odd integers from an array. You must not use any extra array. 


Input: <br />
6 <br />
1 54 88 6 55 7 <br />
Output: <br />
54 88 6 <br />



## Problem 4:

Write a recursive program to remove all odd integers from an array. You must not use any extra array or print anything in the function. Just read input, call the recursive function, then print the array in main().


Input: <br />
6 <br />
1 54 88 6 55 7 <br />
Output: <br />
54 88 6 <br />

## Problem 5: <br />

Write a recursive solution to print the polynomial series for any input n:
1 + x + x2 + ................. + xn-1 <br />
![alt text](https://cmabdullah.github.io/Recursion/Images/graph.png "")

Input: <br />
5 <br />
Output: <br />
1 + x + x^2 + x^3 + x^4 <br />

## Problem 6: <br />

Write a recursive solution to evaluate the previous polynomial for any given x and n.
Like, when x=2 and n=5, we have 1 + x + x2 + ................. + xn-1 = 31


Input: <br />
2 5 <br />
Output: <br />
31 <br />

## Problem 7: <br />

Find the [Factorial](http://www.sanfoundry.com/c-program-factorial-using-recursion/) of a Number using Recursion  <br />


Input:  <br />
5 <br />
Output: <br />
120 <br />

## Problem 8: <br />

Write a recursive program to print fibonacci series. 1st and 2nd fibonacci numbers are 1, 1. <br />

Input: <br />
6 <br />
Output: <br />
1 1 2 3 5 8 <br />

## Problem 9: <br />

Write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci numbers are 1, 1. <br />

Input: <br />
6 <br />
Output: <br />
8 <br />





## Problem 10: 

Write a recursive program to determine whether a given integer is prime or not.(6.189 IAP 2011: Optional Recursion Exercises MIT OpenCourseWare problem 6)

Input: <br />
19 <br />

Output: <br />
prime <br />


## Problem 11: 

Find GCD or [HCF](http://www.sanfoundry.com/c-program-hcf-number-recursion/) of two numbers


Input: <br />
68 51 <br />
Output:  <br />
17 <br />
![alt text](https://cmabdullah.github.io/Recursion/Images/gcd.jpeg "")
## Problem 12:

Write a recursive solution to compute lcm of two integers. use this formula lcm(a,b) = (a x b) / gcd(a,b);


Input: <br />
23 488 <br />
Output: <br />
11224 <br />

## Problem 13:

Write a recursive solution to compute lcm of two integers. You must not use the formula lcm(a,b) = (a x b) / gcd(a,b); find lcm from scratch...


Input: <br />
23 488 <br />
Output: <br />
11224 <br />

*A Venn Diagram showing the least common multiples of combinations of 2, 3, 4, 5 and 7 (6 is skipped as it is 2 × 3, both of which are already represented).
For example, a card game which requires its cards to be divided equally among up to 5 players requires at least 60 cards, the number at the intersection of the 2, 3, 4 and 5 sets, but not the 7 set.*

![alt text](https://cmabdullah.github.io/Recursion/Images/lcm.png "")

## Problem 14:

Find [Product](http://www.sanfoundry.com/c-program-product-numbers-recursion/) of 2 Numbers using Recursion (panding) (6.189 IAP 2011: Optional Recursion Exercises)




Input: <br />
4 4 <br />
Output:<br />
16  <br />




## Problem 15:

Write a recursive solution to find the second maximum number from a given set of integers.(panding)[CSC 349: Design and Analyis of Algorithms](http://users.csc.calpoly.edu/~dekhtyar/349-Spring2010/lectures/lec03.349.pdf)


Input: <br />
5<br />
5 8 7 9 3<br />
Output:<br />
8<br />

## Problem 16:

Write a recursive function to print an array in the following order.
[0] [n-1] <br />
[1] [n-2] <br />
......... <br />
......... <br />
[(n-1)/2] [n/2] <br />


Input: <br />
5 <br />
1 5 7 8 9 <br />
Output: <br />
1 9 <br />
5 8 <br />
7 7 <br /> 

## Problem 17:

Count the number of zeros in an array of integers. Use recursion.(RecursionPracticeQuestions-UG1, problem 6)

Input: <br />
2,4,0,6,0 <br />
Output: <br />
2 <br />


## Problem 18:

Write a function using recursion to print numbers from n to 0.(6.189 IAP 2011: Optional Recursion Exercises MIT OpenCourseWare, problem 3)

Input: <br />
5 <br />
Output: <br />
5 4 3 2 1 0  <br />

## Problem 19:

Write a function using recursion to print numbers from 0 to n (you just need to change one line in the program of problem 1).(6.189 IAP 2011: Optional Recursion Exercises MIT OpenCourseWare, problem 4)

Input: <br />
5 <br />
Output: <br />
0 1 2 3 4 5  <br />


## Problem 20:

Write a recursive solution to find the maximum element from the array.


Input: <br />
6 <br />
5 7 4 9 6 2 <br />
Output: <br />
9 <br />

## Problem 21:

Write a recursive solution to find the minimum element from the array.(RecursionPracticeQuestions-UG1 problem 7)


Input: <br />
6 <br />
5 7 4 9 6 2 <br />
Output: <br />
2 <br />





## Problem 22:

Find the recursive solution of binomial coefficients [B(n,k)](http://www.math.tamu.edu/~berko/teaching/preREU2010/example_paper.pdf) defined by formula (1) satisfy (hackerrank)
 <br />
B(n, k) = B(n − 1, k − 1) + B(n − 1, k), 1 ≤ k ≤ n − 1.


Input: <br />
B(n, k) = 10,4 <br />
Output: <br />
210 <br />


## Problem 23:

Write a recursive function to reverse a string. Write a recursive function to reverse
the words in a string, i.e., ”cat is running” becomes ”running is cat”.(RecursionPracticeQuestions-UG1 problem 10)

Input: <br />
cat is running<br />
Output: <br />
running is cat <br />


## Problem 24:

Write a recursive function to reverse a string. Write a recursive function to reverse
the digit in a string.

Input: <br />
running<br />
Output: <br />
gninnur <br />


## Problem 25:

Write a recursive function to reverse a string. (java)

Input: <br />
ASDFG<br />
Output: <br />
SDFGA <br />

## Problem 26

Print All Permutation Of String Recursion
Input: <br />
'a', 'b', 'c'<br />
Output: <br />
abc 1 <br/>
acb 2 <br/>
bca 3 <br/>
bac 4 <br/>
cab 5 <br/>
cba 6 <br/>


![alt text](https://cmabdullah.github.io/Recursion/Images/permutation.jpg "")

## hackerrank
* [find Power of a Number using Recursion](http://www.sanfoundry.com/c-program-power-number-using-recursion/)


* [Pascal's Triangle (Easy)](https://www.hackerrank.com/challenges/pascals-triangle)

* [Functions and Fractals: Sierpinski triangles (Advance)](https://www.hackerrank.com/challenges/functions-and-fractals-sierpinski-triangles)

* [String Mingling (Easy)](https://www.hackerrank.com/challenges/string-mingling)


* [String-o-Permute (Easy)](https://www.hackerrank.com/challenges/string-o-permute)

* [Functions and Fractals - Recursive Trees (Advanced)](https://www.hackerrank.com/challenges/fractal-trees)

* [Convex Hull (Medium)](https://www.hackerrank.com/challenges/convex-hull-fp)

* [String Compression (Easy)](https://www.hackerrank.com/challenges/string-compression)

* [Crosswords-101 (Advanced)](https://www.hackerrank.com/challenges/crosswords-101). [More](https://www.hackerrank.com/domains/fp/fp-recursion/2)




##  [6.189 IAP 2011: Optional Recursion Exercises MIT OpenCourseWare](https://ocw.mit.edu/courses/...and.../MIT6_189IAP11_rec_problems.pdf)

* 2. Write a function that takes in a base and an exp and recursively computes baseexp. You are not allowed to use the ** operator!

* ~~3. Write a function using recursion to print numbers from n to 0.~~

* ~~4. Write a function using recursion to print numbers from 0 to n (you just need to change one line in the program of problem 1).~~

* 5. Write a function using recursion that takes in a string and returns a reversed copy of the string. The only string operation you are allowed to use is string concatenation.

* ~~6. Write a function using recursion to check if a number n is prime (you have to check whether n is divisible by any number below n).~~

* ~~7. Write a recursive function that takes in one argument n and computes Fn, the nth value of the Fibonacci sequence. Recall that the Fibonacci sequence is defined by the relation
Fn = Fn−1 + Fn−2~~



##  [www.cs.cornell.edu](www.cs.cornell.edu/courses/cs2110/2014fa/L07-Recursion/recursion_practice.pdf)

* ~~Q2. Outline, but do not implement, a recursive solution for finding the smallest value in an array.~~

* ~~Q4. Outline, but do not implement, a recursive solution for generating all subsets of the set {1, 2, . . . , n}.~~

* Q5. Write a recursive definition of xn, where n ≥ 0, similar to the recursive definition of the Fibonacci numbers.
Hint: How do you compute xn from xn – 1? How does the recursion terminate?

* ~~Q6. Write a recursive definition of n! = 1 × 2 × . . . × n, similar to the recursive definition of the Fibonacci numbers.~~







[RecursionPracticeQuestions-UG1](https://researchweb.iiit.ac.in/~syed.akhtar/teaching/cpro16/lab8/problem_statements/RecursionPracticeQuestions-UG1.pdf)
* ~~4. Find the sum of the integers from 1 through n. Use recursion.~~
* ~~5. Find the product of the integers from 1 through n (this is called the factorial function). If n is zero, return 1. Use recursion.~~
* ~~6. Count the number of zeros in an array of integers. Use recursion.~~
* ~~7. Find the minimum element in an array of integers. Use recursion.~~
* 8. Write a function for mutliply(a, b), where a and b are both positive integers, but you
can only use the + or − operators.
* ~~9. Find Greatest Common Divisor (GCD) of 2 numbers using recursion.~~
* ~~10. Write a recursive function to reverse a string. Write a recursive function to reverse~~
the words in a string, i.e., ”cat is running” becomes ”running is cat”.
* 11. A word is considered elfish if it contains the letters: e, l, and f in it, in any order. For example, we would say that the following words are elfish: whiteleaf, tasteful, unfriendly, and waffles, because they each contain those letters. Write a function that, given a word, tells us if that word is elfish or not.  Hard  version: Write another function x-ish, that, given two words, returns true if all the letters of the first word are
contained in the second.



[2_113_Programming Exercise 2016-17](gweca.ac.in/files/blog/2_113_Programming%20Exercise%202016-17.pdf)

9.2. C Program to Multiply two Matrices using Recursion
9.3. C Program to calculate sum of numbers 1 to N using
recursion
9.4.   Find Sum of Digits of the Number using Recursive
Function in C Programming
9.5. C Program to print Tower of Hanoi using recursion
9.6. Find Factorial of Number Using Recursion



## recursive For loop:

```cpp
void FOR(int i, int n) {
    if(i==n) return; // terminates
    // do whatever needed
    FOR(i+1, n); // go to next step
}
```



### ref·er·ence
 * [Recursion](http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html) :D

 * [More Problem](http://www.sanfoundry.com/c-programming-examples-recursion/) :D