<details> <summary> VECTOR </summary>
 
 <br/>
 
 ```c++
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
    rend() is a built-in function in C++ STL which returns a reverse iterator pointing to the theoretical element right before the first element in the
    array  container.*/
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
    erase(): Deletes a single element or a range of elements. Its time complexity is O(N + M) where N is the number of the elements erased and M is the number of 
    the elements moved.*/
    auto it = a.begin();
    a.erase(it);

    auto it1 = a.begin();
    auto it2 = a.end();
    it2--;
    a.erase(it1, it2);

    /* ----------------------------------------------------------------
    insert(): Inserts new elements into the vector at a particular position. ts time complexity is O(N + M) where N is the number of elements inserted and M is 
    the number of the elements moved .*/
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
    resize(): Resizes the vector to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is the size of 
    the resized vector.*/
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

 ---
 
 <details> <summary> STRING </summary>
   
  <br/>
  
  ```c++
   bool Pred (int a, int b) {
       return (a == b);
   }

   int main(){
       string s0;                            // s0 = “”
       string s1("Hello ");                   // s1 = “Hello”
       string s2 (s1);                       // s2 = “Hello”
       string s3 (s1, 1, 2);                 // s3 = “el”
       string s4 ("Hello World", 5);         // s4 = “Hello”
       string s5 (5, '*');                   // s5 = “*****”
       string s6 (s1.begin(), s1.begin()+3); // s6 = “Hel”

       /*----------------------------------------------------------------
       append(): Inserts additional characters at the end 
       of the string. Its time complexity is O(N).
       (can also be done using ‘+’ or ‘+=’ operator).
       */

       s0.append(s1); // s0 = “Hello”
       s0.append(s1, 0, 3); // s0 = “Hello Hel”
       s0.append("Geeks"); // s0 = “Hello Hel Geeks”
       s0.append("Geeks", 2); // s0 = “Hello Hel Geeks Ge”
       s0.append(2, '$'); // s0 = “Hello Hel Geeks Ge $$”
       s0.append(s1.begin() + 2, s1.end()); // s0 = “Hello Hel Geeks Ge $$ llo”


       /*----------------------------------------------------------------
       assign(): Assigns new string by replacing the previous value
        (can also be done using ‘=’ operator).*/

        s0.assign(s1);  // s0 = “Hello”
        s0.assign(s1, 1, 4); // s0 = “ello”
        s0.assign("Hello"); // s0 = “Hello”
        s0.assign("Hello", 2); // s0 = “He”
        s0.assign(5, 'x'); // s0 = “xxxxx”
        s0.assign(s1.begin()+1, s1.end()-2); //ell (..,l,o,null)


        /*----------------------------------------------------------------
        at(): Returns the character at a particular position 
        (can also be done using ‘[ ]’ operator). Its time 
        complexity is O(1).*/

        s1.at(2); // s0 = “l”
  

        /* ----------------------------------------------------------------
        begin(): Returns an iterator pointing to the first character. Its time complexity is O(1).*/
        /*end(): Returns an iterator pointing to a position which is next to the last 
        character. Its time complexity is O(1).*/

        string::iterator it;

        it = s1.begin();
        cout<<*it<<"\n";

        for(it = s1.begin(); it != s1.end(); ++it)
        cout<<*it<<"\n";
  

       /* ----------------------------------------------------------------
       rbegin()	This function returns a reverse iterator pointing at the end of the string.*/
       /*rend()	This function returns a reverse iterator pointing at beginning of the string.*/
       string::reverse_iterator it1;
       for (it1 = s1.rbegin(); it1 != s1.rend(); it++)
       cout << *it1<<"\n";
  

       /* ----------------------------------------------------------------
       clear(): Erases all the contents of the string and assign an empty string (“”) of length zero. 
       Its time complexity is O(1).*/
       s0.clear();
  

       /* ----------------------------------------------------------------
       compare(): Compares the value of the string with the string passed 
       in the parameter and returns an integer accordingly. Its time complexity is O(N + M) where N is 
       the size of the first string and M is the size of the second string.*/

       if((s1.compare(s2)) < 0)
           cout << s1 << " is smaller than " << s2 << endl;

       if((s1.compare(s1)) == 0)
           cout << s1 << " is equal to " << s1 << endl;

       //s2->(3 index to start length 5)
       if((s2.compare(3, 5, s1)) == 0)
           cout << "Here, "<< s1 << " are " << s2; //s1("Geeks"); s2("forGeeks");

       //s1->( 0 index to start length 5) == s2->(2 index to start length 5)
       if((s1.compare(0, 5, s2, 3, 5)) == 0) 
           cout << "Welcome to " << s1 << s2 << " World"; //s1("Geeks"); s2("forGeeks"); 

       //Also we can comapre bellow way
       if (s1 != s2){
           cout << s1 << " is not equal to " << s2 << endl;
           if (s1 > s2) cout << s1 << " is greater than " << s2 << endl;
           else cout << s2 << " is greater than " << s1 << endl;
       }
  

       /* ----------------------------------------------------------------
       copy(): Copies the substring of the string in the string passed as parameter 
       and returns the number of characters copied. Its time complexity is O(N) where
        N is the size of the copied string.*/

        s1.copy("Hello",5);

        char ch[20]; 
        s1.copy(ch,sizeof ch);

        char str1[13];
        s1.copy(str1,8,5);

        int a[5]={1,2,3,4,5};
        vector<int> v(5);
        copy(a,a+5,v.begin());
  

       /* ----------------------------------------------------------------
       c_str(): Convert the string into C-style string (null terminated string) 
       and returns the pointer to the C-style string. Its time complexity is O(1).*/
       // c_str returns null terminated char array version of string
       const char* charstr = s1.c_str();
       printf("%s\n", charstr);
  

       /* ----------------------------------------------------------------
       empty(): Returns a boolean value, true if the string is empty and false 
       if the string is not empty. Its time complexity is O(1).*/

       if(s1.empty()) cout << "string is empty";
  

       /* ----------------------------------------------------------------
       erase(): Deletes a substring of the string. Its time complexity is O(N) where N 
       is the size of the new string.*/

       // Deletes all characters
       s0.erase();
       // Deletes all characters except first one
       s0.erase(1);
       // Deletes character at position 4
       s0.erase(s0.begin() + 4);
       // Deletes 4 characters from index number 1
       s0.erase(1, 4);
       // Deletes all characters between 0th index and
       // str.end() - 6
       s0.erase(s0.begin() + 0, s0.end() - 6);

       s0.erase(remove(s0.begin(), s0.end(), 'A'), s0.end()); //remove A from string


       /* ----------------------------------------------------------------
       find(): Searches the string and returns the first occurrence of the parameter in the string. 
       Its time complexity is O(N) where N is the size of the string.*/

       if (s1.find(s0) != string::npos)
           cout <<"str0 found in str1 at " << s1.find(s0)<< " pos" << endl;

       it = find (s1.begin(), s1.end(), 30);
       if (it != s1.end()){
           cout << "Element " << 30 <<" found at position : " ;
           cout << it - s1.begin() << " (counting from zero) \n" ;
       }

       it = find_end(s0.begin(), s0.end(), s1.begin(),s1.end());
       cout << (it - s0.begin()) << "\n";

       it = find_end(s0.begin(), s0.end(), s1.begin(), s1.end(), Pred);
       cout << (it - s0.begin()) <<"\n";         

  
       /* ----------------------------------------------------------------
       insert(): Inserts additional characters into the string at a particular position.
       Its time complexity is O(N) where N is the size of the new string.*/

       //Inserts s0 in s1 starting; from 6th index of s1
       s0.insert(6, s1); //s0[0-5] + s1[6..s1.end()] + s0 [6..s0.end()]

       //Inserts s0 in 6 postion from s1 of 8 postion of s1 6 characters 
       s0.insert(6, s1, 8, 6); 

       // Inserts 10 characters from " are here " at 5th index of s0
       s0.insert(5, " are here ", 10);

       // Inserts at 5th index, 5 occurrences of '$' 
       s0.insert(5, 5, '$'); //*****$$$$$*****
       s0.insert(s0.begin() + 5, 5, '$');

       // Inserts s1.begin() + 5 ,  s1.end() - 6 at position s0.begin() + 6
       s0.insert(s0.begin() + 6, s1.begin() + 5 ,  s1.end() - 6);

  
       /* ----------------------------------------------------------------
       length(): Returns the length of the string. Its time complexity is O(1).*/

       int len = s1.length(); 

  
       /* ----------------------------------------------------------------
       replace(): Replaces the particular portion of the string. Its time complexity 
       is O(N) where N is size of the new string.*/

       //replace(a, b, str)  replaces b characters from a index by str
       s0.replace(2, 7, "ese are test");

       replace(s0.begin(), s0.end(), "a", "b"); // old_val = 'a' , new_val = 'b'

       replace_if(s0.begin(), s0.end(), "a", "b");

  
       /* ----------------------------------------------------------------
       resize(): Resize the string to the new length which can be less than or greater
       than the current length. Its time complexity is O(N) where N is 
       the size of the new string.*/

       // Resizes s0 to a string with 5 initial characters only 
       s0.resize(5);
       // Resizes str to character length of 15 and fill the space with '$'
       s0.resize(15, '$'); //GeeksforGeeks$$

       /* ----------------------------------------------------------------
       size(): Returns the length of the string. Its time complexity is O(1).*/
       int size = s0.size();

       /* ----------------------------------------------------------------
       substr(): Returns a string which is the copy of the substring. Its time
       complexity is O(N) where N is the size of the substring.*/

       string r = s0.substr(1, 3);

       int pos = s0.find(":"); //"dog:cat"
       //Copy substring after pos
       string sub = s0.substr(pos + 1); //cat
       string sub = s0.substr(0 , pos); //dog

       /* ----------------------------------------------------------------
       front() and back() */
       char ch_f = s1.front();  // ch_f = str1[0]
       char ch_b = s1.back();   // ch_b = str1[str1.length() - 1]

       /* ----------------------------------------------------------------
       push_back()	This function is used to input a character at the end of the string.*/
       s0.push_back(s0[0]);

       /* ----------------------------------------------------------------
       pop_back()	Introduced from C++11(for strings), this function is used to delete the last character from the string.*/
       // Deleting a character
       s0.pop_back();

       /* ----------------------------------------------------------------
       getline()	This function is used to store a stream of characters as entered by the user in the object memory.*/
       // Taking string input using getline()
       getline(cin, s0);

       /*----------------------------------------------------------------
       swap() This function swaps one string with other.*/
       s1.swap(s2);

       /*----------------------------------------------------------------
       std::count() returns number of occurrences of an element in a given range.*/
       count(s0.begin(), s0.end(), 'e');


       /*----------------------------------------------------------------
       reverse() is a predefined function in header file algorithm. It is defined as a template
       in the above mentioned header file. It reverses the order of the elements in the 
       range [first, last) of any container. The time complexity is O(n).*/
       reverse(s0.begin(), s0.end());
       string rev = string(s0.rbegin(),s0.rend());
       reverse(s0.begin() + 5, s0.begin() + 8);

   }

   ```
  
</details>
 
 ---
  
<details> <summary> SET & MULTISET </summary>

 <br/>
 
 ```
 * Sets store objects and automatically keep them sorted and quick to find. In a set, there is only one copy of each objects.
 * Multisets are declared and used the same as sets but allow duplicate elements.
 
 Header : #include <set>
 
 SET BST (Non-Linear) - Red_black_tree
 insert, erase, find --> log(n)
 ```
 ```c++
 int main() {
 
  /*---------------------------------------------------------------- 
  Make an empty set O(1) */

  set< type, compare > s;
  set<int> s;

  /*---------------------------------------------------------------- 
  Make a set and copy the values from begin to end. O(n log n) */

  set< type, compare > s(begin, end);
  set<int> second(s.begin(),s.end());
  set<int> third{10, 20, 30, 40, 50};

  /* compare should be a binary predicate for ordering the set. It's optional 
  and will default to a function that uses operator<. */
  
  /*---------------------------------------------------------------- 
  Return an iterator pointing to an occurrence of key in s, or s.end() 
  if key is not in s.  O(log n) */

  s.find(key)

  auto it = s.find(25);
  s.erase(it);
  s.erase(s.find(5));
  if(s.find(25)!=s.end()){
    //...found
  }
  
  /*---------------------------------------------------------------- 
  Return an iterator pointing to the first occurrence of an item in s not less than key, 
  or s.end() if no such item is found. O(log n) */

  s.lower_bound(key)

  auto itlower = s.lower_bound(25);
  auto itupper = s.upper_bound(50);
  s.erase(itlower, itupper);

  /*---------------------------------------------------------------- 
  Return an iterator pointing to the first occurrence of an item greater than key in s, 
  or s.end() if no such item is found. O(log n) */

  s.upper_bound(key)

  auto itlower = s.lower_bound(25);
  auto itupper = s.upper_bound(50);
  s.erase(itlower, itupper);

  /*---------------------------------------------------------------- 
  Return a pair containing the lower and upper bounds for key. This may be more efficient 
  than calling those functions separately. O(log n) */
  
  s.equal_range(key)

  //finding bound range of 20
  pair<set<int>::iterator, set<int>::iterator> sit;
  sit = s.equal_range(20);

  cout<<"\nThe lower bound point is: "<<*pit.first<<"\n";
  cout<<"The upper bound point is: "<<*pit.second<<"\n";
  
  s.erase(sit.first, sit.second);

  /*---------------------------------------------------------------- 
  Returns the number of items equal to key in s. O(log n) */
  s.count(key)

  if(s.count(5)) cout<<"5 is not an element of "<<"\n";
  
  /*---------------------------------------------------------------- 
  Deletes either a single element or range of elements from a set. O(log n) */
  s.erase()

  // 1 - Delete element at position = 2
  auto it = s.begin();
  it++;
  s.erase(it);

  // 2 - Delete val from the set
  s.erase(40);

  // 3 - Delete a range of elements in [first, last)

  // the start position at third element of the set
  auto it = s.begin();
  it++;
  it++;

  // the stop position at end of the set
  s.erase (it, s.end());

  /*---------------------------------------------------------------- 
  Insert elements in the set. O(log n) */
  
  // 1 - single element
  s.insert(key)

  s.insert(55);

  auto it = s.begin();
  s.insert(++it, 15);

  // 2 - insert a range
  s.insert(iterator, key)

  auto it = s1.begin();
  s2.insert(it, it + 3);

  /*---------------------------------------------------------------- 
  Return current number of elements. O(1) */

  s.size();

  /*---------------------------------------------------------------- 
  Return true if set is empty. O(1) */

  s.empty();

  /*---------------------------------------------------------------- 
  Return an iterator pointing to the first element. O(1) */

  s.begin()

  /*---------------------------------------------------------------- 
  Return an iterator pointing one past the last element. O(1) */

  s.end()

}
 ```
 
</details>

  ---
  
<details> <summary>  PAIR & TUPLE </summary>

 <br/>
 
 ```c++
   pair<int,string> pair;
   pair = make_pair(1, "Studytonight")
 
   pair.first = "shoes";       
   pair.second = 39.90;
 
   cout<< pair.first << endl;  // prints 1
   cout<< pair.second << endl; // prints Studytonight
 
   int a, b;
   tie(a, b) = pair;
   cout << a << " " << b << "\n";

   pair<int, pair<int, char> > pair = { 3, { 4, 'a' } };
   int x, y;
   char z;
 
   x = pair.first;
   tie(y, z) = pair.second;
   cout << x << " " << y << " " << z << "\n";
 
   vector<pair<int, int>> v(n);
   for (int i = 0; i < n; ++i) {
      cin >> v[i].second;
      v[i].first = v[i].second % 2;
   }
 ```
 ```c++
   tuple<int, string, string> tuple;
   tuple = make_pair(1,"Studytonight", "Loves You");

   int id;
   string first_name, last_name;

   tie(id,first_name,last_name) = tuple;

   cout << id <<" "<< first_name <<" "<< last_name;
 ```
 
</details>
  
  ---
  
<details> <summary> MAP & MULTIMAP </summary>
 
</details>

  ---
  
<details> <summary> LIST & FORWARD_LIST </summary>
 
 <br/>
 
 ```c++
      int main()
      {
          list <int> LI;
          list<int> LI(5, 100);
          list<int> LI1 = { 10, 20, 30, 40, 50 };

          /*
          begin( ): It returns an iterator pointing to the first element in list.Its time complexity is O(1).
          end( ): It returns an iterator referring to the theoretical element(doesn’t point to an element) which follows the last element.Its time complexity is O(1).*/
          for (auto it = LI.begin(); it != LI.end(); ++it) cout<< *it;


          /*rbegin() is an inbuilt function in C++ STL that returns a reverse iterator which points to the last element of the list.*/
          /*rend() is an inbuilt function in C++ STL that returns a reverse iterator which points to the position before the beginning of the list.*/
          *LI.crbegin();
          *LI.crend();
          for (auto it = LI.rbegin(); it != LI.rend(); ++it) cout << *it;


          /*
          empty( ): It returns whether the list is empty or not.It returns 1 if the list is empty otherwise returns 0.Its time complexity is O(1).*/
          LI.empty();


          /*
          assign( ): It assigns new elements to the list by replacing its current elements and change its size accordingly.It time complexity is O(N).*/
           LI.assign(5, 100);
           LI.assign(LI.begin(),LI.end());


          /*
          back( ): It returns reference to the last element in the list.Its time complexity is O(1).*/
          LI.back();


          /*
          front( ): It returns reference to the first element in the list.Its time complexity is O(1).*/
          LI.front();


          /*
          erase( ): It removes a single element or the range of element from the list.Its time complexity is O(N).*/
          list<int>::iterator it = LI.begin();
          // deleting the first element
          LI.erase(it);

          list<int>::iterator itr1, itr2;
          itr1 = LI.begin();
          itr2 = LI.begin();
          // Incrementing itr2 by 3 positions
          advance(itr2, 3);
          // deleting range of elements from index [0, 3)
          LI.erase(itr1, itr2);


          /*
          push_back( ): It adds a new element at the end of the list, after its current last element. Its time complexity is O(1).*/
          LI.push_back(2);


          /*
          push_front( ): It adds a new element at the beginning of the list, before its current first element. Its time complexity is O(1).*/
          LI.push_front(3);


          /*
          remove( ): It removes all the elements from the list, which are equal to given element. Its time complexity is O(N).*/
          // delete all elements with value 20
          LI.remove(20);

          list<int> LI{ 1, 2, 2, 2, 5, 6, 7 };
          //LI.remove_if(even); // bool even(const int& value) { return (value % 2) == 0; }


          /*
          pop_back( ): It removes the last element of the list, thus reducing its size by 1. Its time complexity is O(1).*/
          LI.pop_back();


          /*
          pop_front( ): It removes the first element of the list, thus reducing its size by 1. Its time complexity is O(1).*/
          LI.pop_front();


          /*
          insert( ): It insert new elements in the list before the element on the specified position. Its time complexity is O(N).*/
          list<int>::iterator it = LI.begin();
          // iterator to point to 3rd position
          advance(it, 2);
          // using insert to insert 1 element at the 3rd position
          // inserts 5 at 3rd position
          LI.insert(it, 5);

          // inserts 2 occurrences of 7 at 3th position
          LI.insert(it, 2, 7);


          /*
          reverse ( ): It reverses the order of elements in the list. Its time complexity is O(N).*/
          LI.reverse();


          /*
          size( ): It returns the number of elements in the list. Its time complexity is O(1).*/
          LI.size();


          /*sort() function is used to sort the elements of the container by changing their positions.*/
          LI.sort();


          /*unique() is an inbuilt function in C++ STL which removes all duplicate consecutive elements from the list. 
          It works only on sorted list.*/
          LI.sort();
          LI.unique();


          /*
          emplace_front() This function is used to insert a new element into the list container, the new element is added to the beginning of the list.*/
          LI.emplace_front(6);


          /*
          emplace_back() This function is used to insert a new element into the list container, the new element is added to the end of the list.*/
          LI.emplace_back(6);


          /*
          splice() is a built-in function in C++ STL which is used to transfer elements from one list to another.*/
          // transfer all the elements of LI1
          LI.splice(LI.begin(), LI1);

          // Iterator pointing to 4
          auto it = LI1.begin();
          // transfer 4 at the end of LI
          LI.splice(LI.end(), LI1, it);


          it = LI1.begin();
          // advance the iterator by 2 positions
          advance(it, 2);
          // transfer at the beginning of LI
          LI.splice(LI.begin(), LI1, it, LI1.end());


          /*
          merge() is an inbuilt function in C++ STL which merges two sorted lists into one. */
          LI.merge(LI1);

          //LI.merge(LI1, comparator); //bool comparator(int first, int second){return first < second;}


          /*
          emplace() is a built-in function in C++ STL which extends list by inserting new element at a given position.*/
          auto it = LI.emplace(LI.begin(), 2);
          LI.emplace(it, 1);

          list<pair<int, char> > lis;
          // inserts at the beginning of the list
          auto it = lis.emplace(lis.begin(), 4, 'a');
          // inserts at the beginning of the list
          LI.emplace(it, 3, 'b');
     }
 ```
 
 Forward List in C++ : https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/
 
</details>

 ---
 
<details> <summary> STACK  </summary>
 
</details>

 ---
 
<details> <summary> QUEUE </summary>
 
</details>

---
 
<details> <summary> PRIORITY_QUEUE </summary>
 
</details>

---
 
<details> <summary> DEQUE </summary>
 
</details>

 ---
 
 <details> <summary>   BITSET </summary>
 
 </details>

 ---
 
<details> <summary>  UNORDERED SET & UNORDERED MULTISET </summary>
 
</details>

 ---
 
<details> <summary>  UNORDERED MAP & UNORDERED MULTIMAP </summary>
 
</details>

 ---
  
<details> <summary>  NON MUTATING & MUTATING </summary>
 
 <br/>
 
 ```
 Find in Cpp STL,Lower Bound/Upper Bound in C++STL,is_permutation() in C++ STL and much more
 sort(): The thief problem,make_heap() in C++ STL,merge() in C++ STL and much more
 ```
 
</details>

 ---
 
<details>
<summary>PROBLEMS</summary>
<br/>
<ul>
    <li><a href="https://hackerrank.com/domains/cpp/stl">Hackerrank STL</a></li>
    <li><a href="https://www.hackerrank.com/domains/cpp?filters%5Bsubdomains%5D%5B%5D=stl">Hello world vector</a></li>
    <li><a href="https://www.hackerrank.com/challenges/cpp-sets/problem">Hello world set</a></li>
    <li><a href="https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/">Hackerearth - Monk and his Friends</a></li>
    <li><a href="https://codeforces.com/contest/4/problem/C">CF 4 C</a></li>
    <li><a href="https://codeforces.com/contest/525/problem/A">CF 525 A</a></li>
    <li><a href="https://codeforces.com/contest/1520/problem/D">CF 1520 D</a></li>
    <li><a href="https://codeforces.com/problemset/problem/782/A">CF 782 A</a></li>
</ul>
</details>
 
