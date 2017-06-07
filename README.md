# Recursion

* Problem 1:

You will be given an array of integers, write a recursive solution to print it in reverse order.


Input:
5
69 87 45 21 47
Output:
47 21 45 87 69

* Problem 2:

Write a recursive function to print an array in the following order.
[0] [n-1]
[1] [n-2]
.........
.........
[(n-1)/2] [n/2]


Input:
5
1 5 7 8 9
Output:
1 9
5 8
7 7

* Problem 3:

Write a recursive program to remove all odd integers from an array. You must not use any extra array or print anything in the function. Just read input, call the recursive function, then print the array in main().


Input:
6
1 54 88 6 55 7
Output:
54 88 6

* Problem 4:

Write a recursive solution to print the polynomial series for any input n:
1 + x + x2 + ................. + xn-1


Input:
5
Output:
1 + x + x^2 + x^3 + x^4

* Problem 5:

Write a recursive solution to evaluate the previous polynomial for any given x and n.
Like, when x=2 and n=5, we have 1 + x + x2 + ................. + xn-1 = 31


Input:
2 5
Output:
31

* Problem 6:

Write a recursive program to compute n!


Input:
5
Output:
120

* Problem 7:

Write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci numbers are 1, 1.

Input:
6
Output:
8

* Problem 8:

Write a recursive program to determine whether a given integer is prime or not.


Input:
49
999983
1
Output:
not prime
prime
not prime

* Problem 9:

Write a recursive function that finds the gcd of two non-negative integers.


Input:
25 8895
Output:
5

* Problem 10:

Write a recursive solution to compute lcm of two integers. You must not use the formula lcm(a,b) = (a x b) / gcd(a,b); find lcm from scratch...


Input:
23 488
Output:
11224

* Problem 11:

Suppose you are given an array of integers in an arbitrary order. Write a recursive solution to find the maximum element from the array.


Input:
5
7 4 9 6 2
Output:
9

* Problem 12:

Write a recursive solution to find the second maximum number from a given set of integers.


Input:
5
5 8 7 9 3
Output:
8

* Problem 13:

Implement linear search recursively, i.e. given an array of integers, find a specific value from it.
Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.


Input:
5
2 9 4 7 6
2
5 9
Output:
not found
1

* Problem 14:

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

* Problem 15:

Write a recursive solution to get the reverse of a given integer. Function must return an int


Input:
123405
Output:
504321

* Problem 16:

Read a string from keyboard and print it in reversed order. You must not use any array to store the characters. Write a recursive solutions to solve this problem.


Input:
helloo
Output:
oolleh

* Problem 17:

Write a recursive program that determines whether a given sentence is palindromic or not just considering the alpha-numeric characters ('a'-'z'), ('A'-'Z'), ('0'-'9').


Input:
madam, i'm adam
hulala
Output:
palindromic
not palindromic

* Problem 18:

Implement strcat(), stracpy(), strcmp() and strlen() recursively.


Input:
test on your own
Output:
test on your own

* Problem 19:

If you already solved the problem for finding the nth fibonacci number, then you must have a clear vision on how the program flow works. So now, in this problem, print the values of your fibonacci function in pre-order, in-order and post-order traversal. For example, when n = 5, your program calls 3 and 4 from it, from the call of 3, your program calls 1 and 2 again....... here is the picture:


Input:
5
Output:
Inorder: 1 3 2 5 2 4 1 3 2
Preorder: 5 3 1 2 4 2 3 1 2
Postorder: 1 2 3 2 1 2 3 4 5

* Problem 20:

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



###ref·er·ence
 * [Recursion](http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html) :D

 * [More Problem](http://www.sanfoundry.com/c-programming-examples-recursion/) :D