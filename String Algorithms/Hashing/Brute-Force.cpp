#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1 = "aabcxabbxyzccbabc";
	string s2 = "abc";
	
	for(int i=0;i+s2.size()<=s1.size();i++){
	    if(s1.substr(i,s2.size())==s2){
	        printf("%d\n",i);
	    }
	}
	return 0;
}
