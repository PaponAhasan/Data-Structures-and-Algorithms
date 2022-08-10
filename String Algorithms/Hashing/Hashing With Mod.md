Problem :
- [String Search - AIZU ONLINE JUDGE](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B)
- [Substring-Frequency - LightOJ](https://lightoj.com/problem/substring-frequency)
- [Substring-Frequency(ii) - LightOJ](https://lightoj.com/problem/substring-frequency-ii)

```c++
Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;
#define BASE 129 // 29
#define MOD 1000000007
#define MAX_S 1000005

long long h[MAX_S + 5], pw[MAX_S + 5];
void generatePrefixHash(string &s){
    h[0] = s[0];
    for(int i = 1; i < s.size(); i++){
        h[i] = ((h[i - 1] * BASE) + s[i]) % MOD;
    }
    pw[0] = 1;
    for(int i = 1;i <= s.size(); i++){
        pw[i] = (pw[i - 1] * BASE) % MOD;
    }
}

long long generateHash(string &s){
    long long H = 0;
    for(auto c : s){
        H = ((H * BASE) + c) % MOD;
    }
    return H;
}

long long getHash(int L, int R){
    if(L == 0) return h[R];
    return (h[R] - (h[L - 1] * pw[R - L + 1] % MOD) + MOD) % MOD;
}

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    generatePrefixHash(s1);
    long long hashOfS2 = generateHash(s2);
    for(int i = 0; i + s2.size() <= s1.size(); i++){
        if(getHash(i, i + s2.size() - 1) == hashOfS2){
            printf("%d\n",i);
        }
    }
    return 0;
}
```
```
STEP 01:
-------
h[R] - ( h[L-1] * po[R-L+1] % MOD )

h[R] = 5
h[L-1] * po[R-L+1] % MOD = 8

IF 5 - 8 = NEGATIVE [ NOT WORKING ]


STEP 02: MOD ADD
-------

h[R] - ( h[L-1] * po[R-L+1] % MOD ) + MOD 

h[R] = 8
h[L-1] * po[R-L+1] % MOD = 5
MOD = 4

IF 8 - 5 + 4 = 7 > 3 [ INCORRECT ]


STEP 03: MOD WITH ANOTHER MOD
-------

( h[R] - ( h[L-1] * po[R-L+1] % MOD ) + MOD ) % MOD


1. add mod

h[R] = 5
h[L-1] * po[R-L+1] % MOD = 8
MOD = 4

IF 5 - 8 + 4 = 1 % 4 = 1 < 3 [ SOLVED]

2. mod with another mod

h[R] = 8
h[L-1] * po[R-L+1] % MOD = 5
MOD = 4

IF 8 - 5 + 4 = 7 % 4 = 3 [ SOLVED ]
```

```c++
// Shakib Vahi

#include <bits/stdc++.h>
using namespace std;
#define BASE 129
#define MOD 1000000007
#define MAX_S 1000005

long long h[MAX_S + 5], po[MAX_S + 5];
void generatePrefixHash(string &s)
{
    h[0] = s[0]; // 'c' - 'a' + 1 = 3
    for (int i = 1; i < s.size(); i++)
    {
        h[i] = ((h[i - 1] * BASE) + s[i]) % MOD;
    }
    po[0] = 1; /// po[x] = po[x - 1] * BASE
    for (int i = 1; i <= s.size(); i++)
    {
        po[i] = (po[i - 1] * BASE) % MOD; /// 0 <= po[i - 1] < MOD
    }
}

long long generateHash(string &s)
{
    long long H = 0;
    for (auto c : s)
    {
        H = ((H * BASE) + c) % MOD;
    }
    return H;
}

long long getHash(int L, int R) // hash(s[L...R]) --> s = "aabccd" --> getHash(0, 3)
{
    if (L == 0) return h[R];
    return (h[R] - (h[L - 1] * po[R - L + 1] % MOD) + MOD) % MOD; /// h[R] = 5, h[L - 1] * po[R - L + 1] % MOD = 8
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    generatePrefixHash(s1);
    long long hashOfS2 = generateHash(s2);
    for (int i = 0; i + s2.size() <= s1.size(); i++) /// O(N)
    {
        if (getHash(i, i + s2.size() - 1) == hashOfS2)
        {
            cout << i << "\n";
        }
    }
    return 0;
}
```
