[ https://www.spoj.com/problems/LPS/cstart=20 ]

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int BASE = 127;

vector<long long> generateExponents(int N){
    vector<long long> pw(N + 1, 1);
    for(int i = 1; i <= N; i++){
        pw[i] = (pw[i - 1] * BASE) % MOD;
    }
    return pw;
}

vector<long long> generatePrefixHash(string &s){
    vector<long long> H(s.size(), 0);
    H[0] = s[0];
    for(int i = 1; i < s.size(); i++){
        H[i] = ((H[i-1] * BASE) + s[i]) % MOD;
    }
    return H;
}

long long getRangeHash(int L, int R, vector<long long> &H, vector<long long> &pw){
    if(L == 0) return H[R];
    return (H[R] - (H[L-1] * pw[R - L + 1] % MOD) + MOD) % MOD;
}

bool existsPalindrome(int len, vector<long long> &sH, vector<long long> &rsH, vector<long long> &pw){
    int N = sH.size();
    for(int i = 0; i + len <= sH.size(); i++){
        int L1 = i, R1 = i + len - 1;
        int L2 = N-1-R1, R2 = N-1-L1;
        if(getRangeHash(L1, R1, sH, pw) == getRangeHash(L2, R2, rsH, pw)){
            return true;
        }
    }
    return false;
}

int findLPS(int L, int R, bool isOdd, vector<long long> &sH, vector<long long> &rsH, vector<long long> &pw){
   while(L < R){
       int mid = L + (R - L + 1) / 2;
       if(existsPalindrome(mid + mid + isOdd, sH, rsH, pw)){
           L = mid; 
       }else{
           R = mid - 1;
       }
   }
   
   return R + R + isOdd;
}

int main() {
    int N;
    cin >> N;
    string rs,s;
    cin>>s;
    rs = s;
    reverse(rs.begin(),rs.end());
    auto sH = generatePrefixHash(s);
    auto rsH = generatePrefixHash(rs);
    auto pw = generateExponents(s.size());
	
    // ODD
    int L = 0, R = N - (N % 2 == 0), LPS = 1;
    R = R / 2;
    LPS = max(LPS, findLPS(L, R, true, sH, rsH, pw));

    // EVEN
    L = 0, R = N - (N % 2 == 1);
    R = R / 2;
    LPS = max(LPS, findLPS(L, R, false, sH, rsH, pw));
    printf("%d\n", LPS);
	
    return 0;
}
