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

int main() {
    int tc,Case = 0;
    cin>>tc;
    while(tc--){
        printf("Case %d: ",++Case);
        string rs,s;
    	cin>>s;
    	rs = s;
    	int N = s.size();
    	reverse(rs.begin(),rs.end());
    	auto sH = generatePrefixHash(s);
    	auto rsH = generatePrefixHash(rs);
    	auto pw = generateExponents(s.size());
    	
    	for(int i = 0; i <= N; i++){
    	    if(getRangeHash(i, N - 1, sH, pw) == getRangeHash(0, N - i - 1, rsH, pw)){
    	         printf("%d\n",N + N - (N - i));  
    	         break;
    	    }
    	}
    }
    return 0;
}
