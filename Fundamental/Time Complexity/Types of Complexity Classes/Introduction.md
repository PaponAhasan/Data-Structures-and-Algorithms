```
There exist some problems whose solutions are not yet found, the problems are divided into classes known as 
Complexity Classes.

These classes help scientists to groups problems based on how much time and space they require to solve problems and verify the
solutions.

The common resources are time and space, meaning how much time the algorithm takes to solve a problem and the corresponding memory 
usage.
```

```
Types of Complexity Classes:

  - P Class
  - NP Class
  - CoNP Class
  - NP hard
  - NP complete
```
```
                                                         P Class 
                                                      ---------------   
The P class stands for Polynomial Time. It is the collection of decision problems(problems with a “yes” or “no” answer) that can
be solved by a deterministic machine in polynomial time.

- The solution to P problems is easy to find. 

 Natural problems :
  - Calculating the greatest common divisor.
  - Finding a maximum matching.
  - prim's algorithm
  - kruskal algorithm 
```
```
                                                       NP Class
                                                    -----------------
NP class stands for Non-deterministic Polynomial Time. It is the collection of decision problems(problems with a “yes” or “no” 
answer) that can be solved by a non-deterministic machine in polynomial time.

- The solutions of the NP class are hard to find because this solved by a non-deterministic machine.
- But The solutions are easy to verify.

- To check prime number.
- Integer Factorization.
```

```
                                                       NP-hard class
                                                      ---------------
                                                      
An NP-hard problem is at least as hard as the hardest problem in NP.
It is the class of the problems such that every problem in NP reduces to NP-hard.

1. To solve this problem, it do not have to be in NP .
2. It takes a long time to check them.This means if a solution for an NP-hard problem is given then it takes a 
  long time.
3. A problem is in NP-hard if for every problem NP, polynomial-time reduction.
4. Do not have to be a Decision problem.
5. NP-Hard problems can be solved if and only if there is a NP-Complete problem.

- Dijkstra's algorithm
- Floyed warshal algorithm
```
```
                                                     NP-complete class
                                                    -------------------
A problem is NP-complete if it is both NP and NP-hard. NP-complete problems are the hard problems in NP.

1. To solve this problem, it must be both NP and NP-hard problems.
2. Do be a decision problem
3. NP-Complete problems can be solved by a NP problem in polynomial time.
4. NP-Complete if there is an NP problem
5. A problem is NP-Complete if it is a part of both NP and NP-Hard Problem
6. A non-deterministic Turing machine can solve NP-Complete problem in polynomial time

1. If can solve an NP-complete problem in polynomial time, then can also solve any NP problem in polynomial time.
```

- https://www.youtube.com/watch?v=e2cF8a5aAhE&list=PLDN4rrl48XKpZkf03iYFl-O29szjTrs_O&index=72&ab_channel=AbdulBari
- https://www.geeksforgeeks.org/types-of-complexity-classes-p-np-conp-np-hard-and-np-complete/
- http://www.shafaetsplanet.com/?p=1642
- https://www.geeksforgeeks.org/difference-between-np-hard-and-np-complete-problem/
- https://www.google.com/search?q=P%2C+NP%2C+NP+hard%2C+NP+completeness+greeks+for+greeks&rlz=1C1CHBF_enBD917BD917&sxsrf=ALiCzsb-_Cn-dLIdp0kff6TevtJlrYNrnA%3A1660344503851&ei=t9j2YojCM_Cdz7sPh5y4mAw&ved=0ahUKEwjI-eyiscL5AhXwznMBHQcODsMQ4dUDCA8&uact=5&oq=P%2C+NP%2C+NP+hard%2C+NP+completeness+greeks+for+greeks&gs_lcp=Cgdnd3Mtd2l6EANKBAhBGABKBAhGGABQAFgAYIUCaABwAXgAgAF5iAF5kgEDMC4xmAEAoAEBwAEB&sclient=gws-wiz
