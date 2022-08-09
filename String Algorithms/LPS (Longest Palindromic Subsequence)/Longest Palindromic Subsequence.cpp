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
    for(int i=1; i<s.size(); i++){
        H[i] = ((H[i-1] * BASE) + s[i]) % MOD;
    }
    return H;
}

// must must H reference nite hove na hole TLE hove. O(1) , O(n)
// hoie jabe. Because na hole H ta akta copy create korbe
long long getRangeHash(int L, int R, vector<long long> &H, vector<long long> &pw){
    if(L == 0) return H[R];
    return (H[R] - (H[L-1] * pw[R - L + 1] % MOD) + MOD) % MOD;
}

int main() {
	string rs,s;
	cin>>s;
	int N = s.size();
	rs = s;
	reverse(rs.begin(),rs.end());
	auto sH = generatePrefixHash(s);
	auto rsH = generatePrefixHash(rs);
	auto pw = generateExponents(s.size());
	
	while(1){
	    int L, R;
	    cin >> L >> R;
	    
	    /*
    	    sH = abcbefg = 7
    	    L = 1, R = 3 (bcd)
            
            rsH = gfebcba
            L = 7 - 1 - 3 = 3
            R = 7 - 1 - 1 = 5
            (bcb)
        */
        
	    if(getRangeHash(L, R, sH, pw) == getRangeHash(N-1-R, N-1-L, rsH, pw)){
	         printf("Palindrome\n");   
	    }else{
	        printf("Not Palindrome\n");   
	    }
	    
	    break;
	}
	
	return 0;
}
