### What is pointer
```
Pointers are called as addrass variables. They store the addrass of data. They are usefull for indirectly accessing in the data.
For Example : Heap Memory access

[N.T : Every Integer taka a two bytes ]
```
### Pointer Arithmetic
```c++
main(){

    int A[5] = {5,8,9,6,10};
    
    int *p, *q;
   
    p = &A[0] // 100
    q = &A[3] // 106
    
    printf("%d",*++p) // 8 ( move pointer to next element and read data)
    
    printf("%d",++*p) // 6 (take data and increment data)
    
    printf("%d",*p++) // print 5, then increment ( read data then move p to next)
    
    (*p)++ // read the data and increment the data
    
    p++; 
}
```
#### Step 01: 
```c++
int A[5] = {5,8,9,6,10};
```
| Index   | 0 | 1 | 2 | 3 | 4 |
| ------- | - | - | - | - | - |
| A       | 5 | 8 | 9 |6  |10 |
| Address |100|102|104|106|108|

####  Step 02: 
```c++
int *p
int *q
```
| p |
| - |
|   | 

| q |
| - |
|   |


####  Step 03: 
```c++
p = &A[0] ;  
q = &A[3] ;
```
| p |
| - |
|100| 

| q |
| - |
|106|

####  Step 04: 

```c++
printf("%d",*++p)
```
| p |
| - |
|102| 

```
in unary operator , we should move right to left
first ++ (address increment) then * (print data)

print 8
```
####  Step 05: 

```c++
printf("%d",++*p) // ++(*p) same
```
| p |
| - |
|100| 

```
in unary operator , we should move right to left
first *(take data) then ++(data increment)

print 6
```

####  Step 06: 

```c++
printf("%d",*p++) // (*p)++ are not same
```
| p |
| - |
|100| 

```
in unary operator , we should move right to left
first ++(increment but after) then *(data print)

print 5 then increment
```
| p |
| - |
|102|

####  Step 07: 
```c++
p++;
```
| p |
| - |
|102| 

### 1D Array Using Pointer
```c++
printf("%u",A);  // 100

printf("%u",&A);  // 100

printf("%d",A[2]); // 9

printf("%d",2[A]); // 9

printf("%u",A+2);  // 104

printf("%d",*(A+2); // 9

printf("%u",p);  // 100

printf("%u",&p);  // 500 [ address of pointe , assume 500]

printf("%d",p[2]);  // 9

printf("%d",2[p]); // 9

printf("%u",p+2);  // 104

printf("%d",*(A+2);  // 9
```
![image](https://user-images.githubusercontent.com/59710234/174280796-39bb663e-9cdb-4282-9bcb-b1a2318afe5f.png)

### 2D Array Using Pointer
```c++
printf("%u",p);  // 500

printf("%u",&p); // 700 [ address of pointe , assume 700]

printf("%u",*p); // 550

printf("%u",p+1); // 502

printf("%u",*(p+1)); // 600

printf("%u",*(p+1)+2); // 604

printf("%u",*(*(p+1)+2)); // 25

printf("%d",*(*(p+i)+j)); // 18 [ i = 1,j = 3]
      p[i][j] are same
      
printf("%u",**p); // 10      
```
![image](https://user-images.githubusercontent.com/59710234/174282133-a118ab3a-6b09-47a5-a5b0-80e60cf9393c.png)

### Program in Memory
```
If we have program and we went to run it, the program is loadded in the main memory of code section.
Three parts of the main memory.
  1. The code
  2. The Stack and 
  3. The Heap
```
### Stack VS Heap
```
  Stack Memory : Stack Memory directly access of the program and size of the stack memory is static(size is pre decided
     because number of variable in the program).
     When program is loadded , the memory allocate this program variable from stack.
     
  Heap Memory : Heap memory indirectly access of the program and size of the stack memory is dynamic(size is depend on -
     menmory[ malloc, new & pointer] ).
      Pointer help access the memory from heap. if we need to the memory from heap, we need to take a pointer.
```
![image](https://user-images.githubusercontent.com/59710234/174209936-cf657073-a8af-4702-b1f7-460b08bf93e6.png)

### USES OF POINTER

```
- Accessing Heap Memory
- Call By Reference
- Accessing Files
- Accessing any Peripheral
```

### Data Types and Sizes

| Type Name     | 32–bit Size   | 64–bit Size   |
| ------------- | ------------- | ------------- |
| char          |    1 bytes    |    1 bytes    |
| short         |    2 bytes    |    2 bytes    |
| int           |    4 bytes    |    4 bytes    |
| long          |    4 bytes    |    8 bytes    |
| long long     |    8 bytes    |    8 bytes    | 
| float         |    4 bytes    |    4  bytes   |
| double        |    8 bytes    |    8  bytes   |
| long double   |    16 bytes   |    16 bytes   |

- [AbdulBari](https://www.youtube.com/playlist?list=PLDN4rrl48XKp1ubbVUHVrOMkO4rTsjXrg)
- [mycodeschool](https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_)
