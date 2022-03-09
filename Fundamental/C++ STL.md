<details> <summary> Vector </summary>
 
 ```c++
 #include<bits/stdc++.h>
using namespace std;

int main() {
  
  vector<string>v{ "This", "is", "Geeksforgeeks" };
  vector<int> a;                      // empty vector of ints
  vector<int> b (5, 10);              // five ints with value 10
  vector<int> c (b.begin(),b.end());  // iterating through second
  vector<int> d (c);                  // copy of c
   
  /* ----------------------------------------------------------------
  at(): Returns the reference to the element at a particular position 
  (can also be done using ‘[ ]’ operator). Its time complexity is O(1).*/
  a.at(1);

  /* ----------------------------------------------------------------
  back(): Returns the reference to the last element. Its time complexity is O(1).*/
  a.back();

  /* ----------------------------------------------------------------
  front() function can be used to fetch the first element of a vector container.*/
  a.front();

  /* ----------------------------------------------------------------
  begin(): Returns an iterator pointing to the first element of the vector. Its time complexity is O(1).*/
  /* ----------------------------------------------------------------
  end(): Returns an iterator pointing to a position which is next to the last element of the vector. Its time complexity is O(1).*/
  for (auto it = a.begin();it != a.end(); ++it) cout<< *it;

  /* ----------------------------------------------------------------
  rbegin() is a built-in function in C++ STL which returns a reverse iterator pointing to the last element in the container.*/
  /* ----------------------------------------------------------------
  rend() is a built-in function in C++ STL which returns a reverse iterator pointing to the theoretical element right before the first element in the array container.*/
  for (auto it = v.rbegin(); it != v.rend(); it++) cout << *it;

  /* ----------------------------------------------------------------
  clear(): Deletes all the elements from the vector and assign an empty vector. 
   Its time complexity is O(N) where N is the size of the vector.*/
  a.clear();

  /* ----------------------------------------------------------------
  empty(): Returns a boolean value, true if the vector is empty and false if the
   vector is not empty. Its time complexity is O(1).*/
   a.empty();

  /* ----------------------------------------------------------------
  erase(): Deletes a single element or a range of elements. Its time complexity is O(N + M) where N is the number of the elements erased and M is the number of the elements moved.*/
  auto it = a.begin();
  a.erase(it);

  auto it1 = a.begin();
  auto it2 = a.end();
  it2--;
  a.erase(it1, it2);

  /* ----------------------------------------------------------------
  insert(): Inserts new elements into the vector at a particular position. ts time complexity is O(N + M) where N is the number of elements inserted and M is the number of the elements moved .*/
    auto it = a.insert(a.begin(), 3); // vector_name.insert (position, val)

    a.insert(it, 2); // inserts 2 at front

    it = a.insert(a.begin() + 2, 7);

    int x = 50;
    a.insert(a.begin() + 2, { 30, 40, x, 60 });

     // inserts 3 one time at front
    auto it = a.insert(a.begin(), 1, 3); // vector_name.insert(position, size, val)
  
    // inserts 4 two times at front
    a.insert(it, 2, 4);

    b.insert(b.begin(), a.begin(), a.end());

  /* ----------------------------------------------------------------
  pop_back(): Removes the last element from the vector. Its time complexity is O(1).*/
  a.pop_back();

  /* ----------------------------------------------------------------
  push_back(): Inserts a new element at the end of the vector. Its time complexity is O(1).*/
  a.push_back(1);

  /* ----------------------------------------------------------------
  resize(): Resizes the vector to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is the size of the resized vector.*/
  a.resize(4);
  a.resize(12, 9);

  /* ----------------------------------------------------------------
  size(): Returns the number of elements in the vector. Its time complexity is O(1).*/
  a.size();

  /* ----------------------------------------------------------------
  find(): Searches the value and returns the first occurrence of the parameter in the vector. 
  Its time complexity is O(N) where N is the size of the string.*/
  vector<int>::iterator it;
  it = find(a.begin(),a.end(), 10);
  if (it != a.end()){cout << it - a.begin();}
  //or
  if(find(a.begin(),a.end(),10)!=a.end()){}

 /* ----------------------------------------------------------------
 capacity() function is a built-in function which returns the size of the storage space currently allocated for the vector*/
  a.capacity();

 /* ----------------------------------------------------------------
 emplace_back() used to insert a new element into the vector container, the new element is added to the end of the vector.*/ 
 a.emplace_back(4);

 vector<pair<char, int>> vect;
 vect.emplace_back('a', 24);

 /* ----------------------------------------------------------------
 emplace() is an STL in C++ which extends the container by inserting a new element at the position*/
 auto it = a.emplace(a.begin(), 15);
 auto it = a.emplace(a.end(), 16);
 auto it = a.emplace(a.begin() + 2, 16);

}

 ```
  
</details>

<details> <summary> set </summary>
 
  
</details>

<details> <summary> Map </summary>
 
  
</details>

<details> <summary> List </summary>
 
  
</details>

<details> <summary> Stack  </summary>
 
  
</details>

<details> <summary> Queue </summary>
 
  
</details>

<details> <summary> Priority_Queue </summary>
 
  
</details>

<details> <summary> Deque </summary>
 
  
</details>
