### What is pointer
```
Pointers are called as addrass variables. They store the addrass of data. They are usefull for indirectly accessing in the data.
For Example : Heap Memory access
```
```c++
main(){

    int A[5] = {5,8,9,6,10};
    
    int *p, *q;
   
    p = &A[0]
    q = &A[3]
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

![image](https://user-images.githubusercontent.com/59710234/174203517-6680b0d5-198f-4d74-b5c4-585ddc329de2.png)

```
USES OF POINTER

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

[mycodeschool](https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_)

