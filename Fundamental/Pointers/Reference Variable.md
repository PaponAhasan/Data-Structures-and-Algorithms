
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

https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118785/offering/1381139

### Program in Memory

```
If we have program and we went to run it, the program is loadded in the main memory of code section. 

Three parts of the main memory.
  1. The code
  2. The Stack and 
  3. The Heap
```
![image](https://user-images.githubusercontent.com/59710234/174428263-55580669-6974-4789-b176-568d772fa761.png)

### Example Heap Memory

- [x] 01

```c++
int getSum(int *arr, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

int main() {
    int n;
    cin >> n;
    //variable size array
    int* arr = new int[n];
    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "answer is "<< ans << endl;
    return 0;
}
```

- [x] 02

```c++
int main()
{
	int a = 10; // stored in stack
	int* p = new int(); // allocate memory in heap
	*p = 10;
	delete (p);
	p = new int[4]; // array in heap allocation
	delete[] p;
	p = NULL; // free heap
	return 0;
}
```

- [x] 03

```c++
int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;
    
    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai 

    return 0;
}
```

### Stack VS Heap

```
Stack Memory : Stack Memory directly access of the program and size of the stack memory is static(size is pre decided
because number of variable in the program). When a variable is declared compiler automatically allocates memory for it.
This is known as compile time memory allocation or static memory allocation. When program is loadded , the memory allocate
this program variable from stack.  Stack memory is limited in size, so it's best suited for storing small amounts of data.

int arr[50] ==> 50 * 4 bytes
     
Heap Memory : Heap memory indirectly access of the program and size of the stack memory is dynamic(size is depend on - 
menmory[ malloc, new & pointer] ). Pointer help access the memory from heap. if we need to the memory from heap, we need 
to take a pointer. Heap memory is allocated and deallocated manually by the programmer. Heap memory is 
larger than stack memory and can store more data.

int* arr = new int[50] ==> 8 bytes + 50 * 4 bytes

In general, it's best to use stack memory whenever possible because it is faster and more efficient than heap memory. 
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
