#### Method 1 (Using Arithmetic Operators) 
```c++
int main()
{
    int x = 10, y = 5;
 
    // Code to swap 'x' and 'y'
    x = x + y; // x now becomes 15
    y = x - y; // y becomes 10
    x = x - y; // x becomes 5
    cout << "After Swapping: x =" << x << ", y=" << y;
}
```
```c++
int main()
{//NOTE - for this code to work in a generalised sense, y !- 0 to prevent zero division
    int x = 10, y = 5;
 
    // Code to swap 'x' and 'y'
    x = x * y; // x now becomes 50
    y = x / y; // y becomes 10
    x = x / y; // x becomes 5
    cout << "After Swapping: x =" << x << ", y=" << y;
}
```
#### Method 2 (Using Bitwise XOR)
```c++
int main()
{
    int x = 10, y = 5;
    // Code to swap 'x' (1010) and 'y' (0101)
    x = x ^ y; // x now becomes 15 (1111)
    y = x ^ y; // y becomes 10 (1010)
    x = x ^ y; // x becomes 5 (0101)
    cout << "After Swapping: x =" << x << ", y=" << y;
    return 0;
}
```
```c++
void swap(int* xp, int* yp)
{
    *xp = *xp ^ *yp;
    *yp = *xp ^ *yp;
    *xp = *xp ^ *yp;
}
```
```
1) The multiplication and division based approach doesn’t work if one of the numbers is 0 as the product becomes 0 
   irrespective of the other number.
2) Both Arithmetic solutions may cause an arithmetic overflow. If x and y are too large, addition and multiplication 
   may go out of integer range.
```
