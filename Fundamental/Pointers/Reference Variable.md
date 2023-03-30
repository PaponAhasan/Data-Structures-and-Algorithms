
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
