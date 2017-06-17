# Recursion

## Problem 1:

You will be given an array of integers, write a recursive solution to print it in reverse order. <br />


Input: <br />
5 <br />
69 87 45 21 47 <br />
Output: <br />
47 21 45 87 69 <br />

## Problem 2: <br />

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

Write a recursive program to determine whether a given integer is [prime](http://www.sanfoundry.com/c-program-prime-number-using-recursion/) or not.

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

![alt text](https://cmabdullah.github.io/Recursion/Images/lcd.svg "")

## Problem 14:

Find [Product](http://www.sanfoundry.com/c-program-product-numbers-recursion/) of 2 Numbers using Recursion (panding)




Input: <br />
4 4 <br />
Output:<br />
16  <br />




## Problem 15:

Write a recursive solution to find the second maximum number from a given set of integers.


Input: <br />
5<br />
5 8 7 9 3<br />
Output:<br />
8<br />

## Problem 16:

Implement linear search recursively, i.e. given an array of integers, find a specific value from it.
Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.


Input:<br />
5<br />
2 9 4 7 6<br />
2<br />
5 9<br />
Output:<br />
not found<br />
1<br />





## Problem 20:

Suppose you are given an array of integers in an arbitrary order. Write a recursive solution to find the maximum element from the array.


Input: <br />
6 <br />
5 7 4 9 6 2 <br />
Output: <br />
9 <br />







* Problem 16:

Implement binary search recursively, i.e. given an array of sorted integers, find a query integer from it.
Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.


Input:
5
1 2 3 4 5
2
3 -5
Output:
2
not found

* Problem 17:

Write a recursive solution to get the reverse of a given integer. Function must return an int


Input:
123405
Output:
504321

* Problem 18:

Read a string from keyboard and print it in reversed order. You must not use any array to store the characters. Write a recursive solutions to solve this problem.


Input:
helloo
Output:
oolleh

* Problem 19:

Write a recursive program that determines whether a given sentence is palindromic or not just considering the alpha-numeric characters ('a'-'z'), ('A'-'Z'), ('0'-'9').


Input:
madam, i'm adam
hulala
Output:
palindromic
not palindromic

* Problem 20:

Implement strcat(), stracpy(), strcmp() and strlen() recursively.


Input:
test on your own
Output:
test on your own

* Problem 21:

If you already solved the problem for finding the nth fibonacci number, then you must have a clear vision on how the program flow works. So now, in this problem, print the values of your fibonacci function in pre-order, in-order and post-order traversal. For example, when n = 5, your program calls 3 and 4 from it, from the call of 3, your program calls 1 and 2 again....... here is the picture:


Input:
5
Output:
Inorder: 1 3 2 5 2 4 1 3 2
Preorder: 5 3 1 2 4 2 3 1 2
Postorder: 1 2 3 2 1 2 3 4 5

* Problem 22:

All of you have seen the tower of Hanoi. You have 3 pillars 'a', 'b' and 'c', and you need transfer all disks from one pillar to another. Conditions are, only one disk at a time is movable, and you can never place a larger disk over a smaller one. Write a recursive solution to print the moves that simulates the task, a -> b means move the topmost of tower a to tower b.


Input:
3
Output:
a -> c
a -> b
c -> b
a -> c
b -> a
b -> c
a -> c



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