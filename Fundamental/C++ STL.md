<details> <summary> Vector </summary>
 
 <br/>
 
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

 <details> <summary> String </summary>
   
  <br/>
  
  ```c++
   #include <bits/stdc++.h>
   using namespace std;

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
