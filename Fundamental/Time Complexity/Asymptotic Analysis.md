```
The efficiency of an algorithm depends on the amount of time, storage and other resources required to execute the algorithm. The 
efficiency is measured with the help of asymptotic notations.
```
```
Asymptotic notations are the mathematical notations used to describe the running time of an algorithm when the input tends towards 
a particular value or a limiting value.

There are mainly three asymptotic notations :

  1. Big-O notation
  2. Omega notation
  3. Theta notation

```
```
Big-O Notation (O-notation) : Big-O notation represents the upper bound of the running time of an algorithm. 
         Thus, it gives the worst-case complexity of an algorithm.

Omega Notation (Ω-notation) : Omega notation represents the lower bound of the running time of an algorithm.
         Thus, it provides the best case complexity of an algorithm.

Theta Notation (Θ-notation) : Since it represents the upper and the lower bound of the running time of an algorithm, 
         it is used for analyzing the average-case complexity of an algorithm.

```
```
For example: In bubble sort, when the input array is already sorted, the time taken by the algorithm is linear i.e. the best 
case. Ω(f(n)

But, when the input array is in reverse condition, the algorithm takes the maximum time (quadratic) to sort the elements i.e. 
the worst case. O(f(n)

When the input array is neither sorted nor in reverse order, then it takes average time. Θ(f(n)
```
