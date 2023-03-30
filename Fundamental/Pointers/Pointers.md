### What is pointer
```
Pointers are called as addrass variables. They store the addrass of data. They are usefull for indirectly accessing in the data.
For Example : Heap Memory access

[N.T : Every Integer taka a two bytes ]
```

![image](https://user-images.githubusercontent.com/59710234/228595159-97d82e06-ceaa-4af3-bebf-700884ce1f1e.png)

### Pointer Variable

Any data type pointer size 8 byte. Because a pointer store address.

```c++
   int main() {
   int num = 5; 
   cout << num; // 5
   int *ptr = &num; 
   cout << *ptr; // 5
   int *q = ptr // copy pointer
   int *p = 0; cout << *p;  // segmentation fault
}
```

2 way declare pointer varibale.

```c++
int main() {
    int i = 5;
    
    //1st way
    int *q = &i;
    cout << q << "\n"; 
    cout << *q << "\n";
    
    //2st way
    int *p = 0;
    p = &i;
    cout << p << "\n";
    cout << *p << "\n";
    return 0;
}
```

```c++
main(){

   int num = 5;
   int *p = &num;
   cout << "before : " << num << "\n"; // 5
   (*p)++;
   /* Pointers do not create another copy. In the pointer, 
   the same value is indicated. That's why the change value*/
   cout << "after: " << num << "\n"; // 6
}
```

```c++
int main() {
   int i = 10;
   int * p;
   p = & i;
   cout << "Address of the variable i is " << p << endl;
   cout << "Address of the pointer p is " << & p;
   return 0;
}

Output:
Address of the variable i is 0x7fff32eb4bb4
Address of the pointer p is 0x7fff32eb4bb8
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

![image](https://user-images.githubusercontent.com/59710234/174294861-e14db58a-3875-4932-8dfd-6eae742451c6.png)

```c++
printf("%u",A);  // 100

printf("%u",&A);  // 100

printf("%d",A[2]); // 9

printf("%d",2[A]); // 9

printf("%u",A+2);  // 104

printf("%d",*A + 1; // 6

printf("%d",*(A+2); // 9

printf("%u",p);  // 100

printf("%u",&p);  // 500 [ address of pointe , assume 500]

printf("%d",p[2]);  // 9

printf("%d",2[p]); // 9

printf("%u",p+2);  // 104

printf("%d",*(p+2);  // 9

```
```c++
int temp[10]
cout << sizeof(temp) << "\n"; // 40
cout << sizeof(*temp) << "\n"; // 4
cout << sizeof(&temp) << "\n"; // 8

int *ptr = &temp[0];
cout << sizeof(ptr) << "\n"; // 8
cout << sizeof(*ptr) << "\n"; // 4
cout << sizeof(&ptr) << "\n"; // 8
```
```c++
int a[20] = {1, 2, 3, 5}
cout << &a[0] << "\n"; // 400
cout << &a << "\n"; // 400
cout << a << "\n"; // 400
 
int *p = &a[0]; 
int *q = a;
cout << p << "\n"; // 400
cout << q << "\n"; // 400
cout << *p << "\n"; // 1
cout << &p << "\n"; // 800 pointer address

arr[i] = *(arr + i)
i[arr] = *(i + arr)
```

```c++
int arr[5] = {1,2,3,4,5};
char ch[6] = "abcde";

cout << arr << "\n" // 400 (address)
cout << ch << "\n" // abcde

int *ptr = &arr[0];
cout << ptr << "\n"; // 400 (address)

char *c = &ch[0];
cout << c << "\n"; // abcde

char temp = 'z';
chat *p = &temp;
cout << p << "\n"; // z@@j
```
```c++
char *f = "abcd";
cout << *f << "\n"; //a
cout << f << "\n"; //abcd
cout << &f << "\n"; //0x7ffc03e59ec0
cout << f[0] << "\n"; //a
    
char ch[6] = "abcde";
char *c = &ch[0];
cout << c << "\n"; // abcde
cout << *c << "\n"; // a
cout << *c + 1 << "\n"; // 98
cout << *(c + 1) << "\n"; // b
cout << &c << "\n"; // 0x7fff02c4dfc8
cout << &c[0] << "\n"; // abcde
cout << &c[1] << "\n"; // bcde
```

### 2D Array Using Pointer

![image](https://user-images.githubusercontent.com/59710234/174294861-e14db58a-3875-4932-8dfd-6eae742451c6.png)

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

```c++
printf("%u",A);    500
printf("%u",&A);   500
printf("%u",*A);   500
printf("%u",A+1);  508
printf("%u",*(A+1));      50
printf("%u",*(A+1)+2);    512
printf("%u",*(*(A+1)+2)); 70
printf("%u",*(*(A+i)+j)); / A[i][j]
printf("%u",**A);  10
printf("%u",A[1]); 508
printf("%u",A[1]+2); 50
printf("%u",*(A[1]+2)); 25
```

### Pointers & Functions

#### Pointer in variable

```c++
void print(int *p){
   cout << *p << '\n'; // 5
   *p = *p + 1;
   cout << *p << '\n'; // 6
   
}

int main(){
   int value = 5;
   int *p = &value;
   cout << *p << '\n'; // 5
   print(p);
   cout << *p << '\n'; // 6
}
```

#### Pointer in array

```c++
void getSum(int arr[], int n){
    cout <<  sizeof(arr) << "\n"; // 8 like (int *arr)
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = 0; i < n ; i++){
        sum1 += i[arr]; // 30
        sum2 += (*arr + i); // 15
        sum3 += *(arr + i); // 30
    }
    
    cout << sum1 << " " << sum2 << " " << sum3 << '\n';
    
    arr[1] = 20;
}

void getSumRange(int arry[], int n){
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += i[arry]; // 9 + 10 + 4 = 23
    }
    cout << sum << '\n';
}

int main() {
	int arr[] = {1, 6, 9, 10, 4};
	cout << arr[1] << '\n'; // 6
	getSum(arr, 5);
	cout << arr[1] << "\n"; // 20
	
        int arry[] = {1, 6, 9, 10, 4};
	getSumRange(arry + 2, 3);
	return 0;
}
```

### Double Pointers

![image](https://user-images.githubusercontent.com/59710234/228619068-eb485419-df39-4431-b116-5636f9d4caee.png)

```c++
int main() {
    int x = 10;
    cout << x << "\n"; // 10
    cout << &x << "\n"; // x addres 220
	
    int* px = &x;
    cout << *px << "\n"; // 10
    cout << px << "\n"; // x addres 220
    cout << &px << '\n'; // px addres 320

    int** py = &px;
    cout << **py << "\n"; // 10
    cout << py << '\n'; // px addres 320
    cout << &py << '\n'; // py addres 420
    cout << *py << '\n'; // x addres 220
	
    return 0;
}
```

### Pointers MCQ

01]
```c++
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout  << first << " " << second << endl;
```
- [x] 8 9

02]

```c++
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first  << endl;
```
- [x] 7

03]

```c++
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
```
- [x] 8 9

04]

```c++
    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;
```
- [x] Segmentation fault

05]

```c++
    int first = 8;
    int second = 11;
    int *third = &second; 
    first = *third;
    *third = *third + 2;
    cout  << first << "  " << second << endl;
```
- [x] 11 13

06]

```c++
    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
```
- [x] 21.5 21.5 21.5

07]

```c++
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;
```
- [x] 20 8

08]

```c++
    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;
```
- [x] 11 21

09]

```c++
    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;
```
- [x] 11_address 11_address

10]

```c++
    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;
```
- [x] 21_address

11]

```c++
    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;
```
- [x] 31

12]

```c++
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);
```
- [x] 11 14

13]

```c++
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;
```
- [x] Segmentation fault

14]

```c++
    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;
```
- [x] b

15]

```c++
    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;
```
- [x] abcde

16]

```c++
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;  
```
- [x] bcde

17]

```c++
    char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl; 
```
- [x] b b

18]

```c++
    void update(int *p){
        *p = (*p)  *  2;
    }

    int main(){
        int i = 10;
        update(&i);
        cout << i << endl;
    }
```
- [x] 20

19]

```c++
    void fun(int arr[]) {
        cout << arr[0] << " ";
    }

    int main() {
        int arr[] = {11, 12, 13, 14};
        fun(arr + 1);
        cout << arr[0] << endl;
    }
```
- [x] 12 11

20]

```c++
    void update(int *p){
        int a = 80;
        p = &a;
        *p = (*p) * (*p);
	cout << *p << endl;
    }

    int main(){
        int a = 70;
        update(&a);
        cout << a << endl;
    }
```
- [x] 6400 70

21]

```c++
    int first = 10;
    int *p = &a;
    int **q = &p;
    int second = 20;
    *q = &second; // 20
    (*p)++;
    cout << first << " " << second << endl;
```
- [x] 10 21

22] hard

```c++
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl; 
```
- [x]  111 119

23] hard

```c++
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl; 
```
- [x] 102 101

24] hard

```c++
    void increment(int **p){
        ++(**p);
    }

    int main(){
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;
    }  
```
- [x] 111

25]

```c++
 int main()
    {
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;
    return 0;
    }


    int main()
    { 
        char *p; 
        char str[] = "pqrstuv";
        p = str;
        p += 3;
        cout << p;
        return 0;
    }


    int main()
    {
        char arr[20];
        int i;
        for(i = 0; i < 10; i++) {
            *(arr + i) = 65 + i;
        }
        *(arr + i) = '\0';
        cout << arr;
        return 0;
    }

    int main()
    {
        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
        float *ptr1 = &arr[0];
        float *ptr2 = ptr1 + 3;
        cout<<*ptr2<<" ";
        cout<< ptr2 - ptr1;
        return 0;
    }


    int main() {
        char st[] = "ABCD";
        for(int i = 0; st[i] != ‘\0’; i++) {
            cout << st[i] << *(st)+i << *(i+st) << i[st];
        }
        return 0;
    }

    void Q(int z)
    {
        z += z;
        cout<<z << " ";
    }

    void P(int *y) 
    {
        int x = *y + 2;
        Q(x);
        *y = x - 1; 
        cout<<x << " ";
    }

    int main()
    {
        int x = 5;
        P(&x);
        cout<<x;
        return 0;
    }


    int main()
    {
        int ***r, **q, *p, i=8;
        p = &i;
        (*p)++;
        q = &p;
        (**q)++;
        r = &q;
        cout<<*p << " " <<**q << " "<<***r;
        return 0;
    }


    int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x + y + z;
    }

    int main() {
        int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);
        return 0;
    }
```

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
