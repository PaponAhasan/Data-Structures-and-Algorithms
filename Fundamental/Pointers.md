### What is pointer
```
Pointers are called as addrass variables. They store the addrass of data. They are usefull for indirectly accessing in the data.
For Example : Heap Memory access
```
```c++
int main(){
   int a,b,c;
   a = 10,
   b = 20;
   c = a+b;
   printf("%d",c);
}
```
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

| Type Name     | 32–bit Size   | 64–bit Size   |
| ------------- | ------------- | ------------- |
| char          |      1        |      1        |
| short         |      2        |      2        |
| int           |      4        |      4        |
| long          |      4        |      8        |
| long long     |      8        |      8        | 
| float         |      4        |      4        |
| double        |      8        |      8        |
| long double   |     16        |      16       |

[mycodeschool](https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_)
