Problem :
- [String Search - AIZU ONLINE JUDGE](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B)
- [Substring-Frequency - LightOJ](https://lightoj.com/problem/substring-frequency)
- [Substring-Frequency(ii) - LightOJ](https://lightoj.com/problem/substring-frequency-ii)

```c++
#include <bits/stdc++.h>
using namespace std;
#define BASE 129
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
