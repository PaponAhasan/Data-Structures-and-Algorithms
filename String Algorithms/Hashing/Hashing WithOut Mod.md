```c++
#include <bits/stdc++.h>
using namespace std;
#define BASE 10
#define MAX_S 100000

long long h[MAX_S + 5], pw[MAX_S + 5];
void generatePrefixHash(string &s){
    h[0] = s[0]-'a'+1;
    for(int i=1;i<s.size();i++){
        h[i] = h[i - 1] * BASE + (s[i] - 'a' + 1);
    }
    // abc
    // 1
    // 1*10 + 2 = 12
    // 12*10 + 3 = 123
    
    // for(int i=0;i<s.size();i++){
    //     printf("%d\n",h[i]);
    // }
    
    //1     = 10^0
    //1*10  = 10^1
    //10*10 = 10^2
    pw[0] = 1;
    for(int i = 1;i<=s.size();i++){
        pw[i] = pw[i - 1] * BASE;
    }
}

long long generateHash(string &s){
    long long H = 0;
    for(auto &c:s){
        H = H * BASE + (c - 'a' + 1);
    }
    return H;
}

long long getHash(int L, int R){
    
    // abcde
    // L = 1,R = 3
    // bcd
    
    // abcd
    // a
    
    // 1234
    // 1

    if(L == 0) return h[R];
    return (h[R] - (h[L - 1] * pw[R - L + 1]));

}

int main() {
    string s1 = "abcde";
    string s2 = "bcd"
    generatePrefixHash(s1);
    // int L = 1,R = 3;
    // cout<<getHash(L,R);
    for(int i=0;i<s1.size();i++){
       // 2 to 2+3-1 = 4
       if(getHash(i, i + s2.size() - 1) == generateHash(s2)){
          printf("%d\n",i);
       }
    }
    return 0;
}
```
