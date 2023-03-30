
Reference Variable : memory same but different name.

```c++
int j = 5
int &i = j
i++;
cout << j << "\n"; // 6
j++;
cout << i << '\n'; // 7
cout << j << '\n'; // 7
```

```c++
void increment(int &p){
    ++(p);
}

int main(){
    int num = 110;
    increment(num);
    cout << num << endl; // 111
}
```

Pass by Reference / Pass by Value

https://www.scaler.com/topics/images/difference-between-call-by-value-and-call-by-reference-in-C-1.gif

https://www.scaler.com/topics/difference-between-call-by-value-and-call-by-reference/


### Program in Memory

```
If we have program and we went to run it, the program is loadded in the main memory of code section.
Three parts of the main memory.
  1. The code
  2. The Stack and 
  3. The Heap
```
![image](https://user-images.githubusercontent.com/59710234/174428263-55580669-6974-4789-b176-568d772fa761.png)

### Stack VS Heap
```
  Stack Memory : Stack Memory directly access of the program and size of the stack memory is static(size is pre decided
     because number of variable in the program).
     When program is loadded , the memory allocate this program variable from stack.
     
  Heap Memory : Heap memory indirectly access of the program and size of the stack memory is dynamic(size is depend on -
     menmory[ malloc, new & pointer] ).
      Pointer help access the memory from heap. if we need to the memory from heap, we need to take a pointer.
```
![image](https://user-images.githubusercontent.com/59710234/174428350-61c74b75-4892-4b1d-a5da-74e4f7670a3e.png)


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
