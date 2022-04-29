```c++
int fun1(int x, int y)
{
    if (x == 0)
        return y;
    else
        return fun1(x - 1, x + y);
}
```
```
 if x is 5 and y is 2
 x = 5, y = 2
 x = 4, y = 5 + 2 = 7
 x = 3, y =  7 + 4 = 11
 x = 2, y = 3 + 11 = 14
 x = 1, y = 2 + 14 = 16
 x = 0, y = 1 + 16 = 17
 return 17
```
