```
A prime is an integer greater than 1 that is only divisible by 1 and itself. The integers 2, 3, 5, 7, 11 are prime integers.
There are several other methods used to determine whether a number is prime or composite. The Sieve of Eratosthenes is an ancient 
method of finding prime numbers up to a specified integer.

- Every integer greater than one has a prime divisor.
    [ a < n  and a must have a prime divisor which will also be a divisor of n ]
    [ If  n  is a composite integer, then n has a prime factor not exceeding  √n ]
    [ n is composite, then n = ab, where a and b are integers with 1<a≤b<n ]
    [ Every composite integer must have aprime factor less than or equal to √n ]
```
```
Find all the prime numbers less than or equal to a given integer n( when n = 50) by the Eratosthene’s method.
```
```
We create a list of all numbers from 2 to 50.
```
![image](https://user-images.githubusercontent.com/59710234/175768169-3d205df2-1cc0-4f6a-9f0f-1bf784dc629c.png)
```
According to the algorithm we will mark all the numbers which are divisible by 2 and are greater than or equal to the square of it.
```
![image](https://user-images.githubusercontent.com/59710234/175768186-f3c0fe4b-ba16-4ef0-b740-77f48c9b80d5.png)
```
Now we move to our next unmarked number 3 and mark all the numbers which are multiples of 3 and are greater than or equal to the
square of it. 
```
![image](https://user-images.githubusercontent.com/59710234/175768206-43584577-3473-4e06-a9c4-49b3ac1ea2a9.png)

```
We move to our next unmarked number 5 and mark all multiples of 5 and are greater than or equal to the square of it.
```
![image](https://user-images.githubusercontent.com/59710234/175768267-924681d6-b4aa-4c13-bd86-bdc33fa89be0.png)

```
We continue this process and our final table will look like below: This process continues until p ≤ √n where pp is a prime number​
```
![image](https://user-images.githubusercontent.com/59710234/175768283-7e224811-b795-468f-ac37-cb04149fcb36.png)

```
So the prime numbers are the unmarked ones: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47.
```
[Implementation Processes](https://d18l82el6cdm1i.cloudfront.net/uploads/Agb5mPVOVZ-sieve_of_eratosthenes_animation.gif)

### The Algorithm of the Sieve of Eratosthene
```
- Create list = 2,3,4,5,6,7,8,9,10,11,12,13,14,15
- num = 2
- traverse from 2 to √15.
- num = 2. Remove all multiples of 2 then list = [ 2,3,0,5,0,7,0,9,0,11,0,13,0,15 ]
- num = 3, immediate non zero number.
- Mark all multiples of 3 then list= [ 2,3,0,5,0,7,0,0,0,11,0,13,0,0 ]
- num = 5, which is the next prime, but num is not <=√15.

Now we have generated all the prime numbers less than 15. Prime numbers less than 15 are 2, 3, 5, 7, 11, 13.
``` 
### BruteForce
 ```c++
 isPrime( n )
   for i = 2 to n / 2
     if (n % i == 0) 
       return true
   End
   return false;
  
 Prime( T )
   for i = 2 to T
    if isPrime(i) 
       print(i)
   End
```

### COMPLEXITY ANALYSIS
```
Now let’s assume our current prime number is 2. In the first iteration, we’ll mark N/2 elements. Like this, when our current prime
number is 3, we assign 0 to N/3 composite numbers. The total number times we runs the loop would be equal to : 
```
![image](https://user-images.githubusercontent.com/59710234/175771612-cfa1bb8b-2492-4df0-93d9-ace471ac22c2.png)
```
Taking the harmonic progression of prime numbers will be
```
![image](https://user-images.githubusercontent.com/59710234/175771639-faf7511a-91d9-4df5-9132-abf051f2b313.png)
```
Let’s solve this equation: O(n*log(log(n))) 
```
![image](https://user-images.githubusercontent.com/59710234/175771633-2a3bca26-bebb-4b60-8034-4cc09a053dfe.png)