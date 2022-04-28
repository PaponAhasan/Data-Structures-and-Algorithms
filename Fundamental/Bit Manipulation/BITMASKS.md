https://codeforces.com/blog/entry/18169

```c++
    int highest_L0_bit(unsigned x) {
        // count the number of leading zero’s
        return x == 0 ? -1 : 31 - __builtin_clz(x);
    }
    int highest_T0_bit(unsigned x) {
        // count the number of trailing zero’s
        return x == 0 ? -1 : 31 - __builtin_ctz(x);
    }
    int highest_T1_bit(unsigned x) {
        // __builtin_popcountl(x) [long]
        // __builtin_popcountll(x) [long long]
        // count the number of 1’s in the binary representation
        return x == 0 ? -1 : 31 - __builtin_popcount(x);
    }
    int highest_EO_bit(unsigned x) {
        //Returns true(1) if the number has odd parity
        //else it returns false(0) for even parity
        return x == 0 ? -1 : 31 - __builtin_parity(x);
    }
    int highest_LS_bit(unsigned x) {
        //Returns  least significant bits of x
        return x == 0 ? -1 : __builtin_ffs(x);
        //100 -> 3
        //011 -> 1
    }
    int highest_HS_bit(unsigned x) {
        //Returns  highest set bits of x
        return x == 0 ? -1 : __lg(x) + 1;
        //100 -> 2 + 1 = 3
        //011 -> 1 + 1 = 2
        //101 -> 2 + 1 =3
    }
```
