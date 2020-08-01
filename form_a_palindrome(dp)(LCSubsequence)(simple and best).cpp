//question does not mention where insertion can take place
//DP : LONGEST COMMON SUBSEQUENCE
/*
the longest palindromic subsequence is the longest sequence of characters 
in a string that spells the same forwards and backward.
A subsequence differs from a substring since characters 
in a subsequence are not required to be at 
consecutive positions in the original string.
*/
//https://www.youtube.com/watch?v=TLaGwTnd3HY
/* Now as we can insert characters 
anywhere to make it a palindrome, therefore we need LPsubsequence.
Therfore same implementation as link but modified.
we have implemented LCSubsequence. 
we used str and revstr to do LPsubsequence
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    string opp =s;
	    reverse(opp.begin(), opp.end());
	    int n = s.length();
	    int dp[n+1][n+1];
	    for(int i=0; i<=n; i++){
	        for(int j=0; j<=n; j++){
	            dp[i][j] = 0;
	        }
	    }
	    for(int i=1; i<=n; i++){
	        for(int j=1; j<=n; j++){
	            if(s[i-1] == opp[j-1])
	               dp[i][j] = 1 + dp[i-1][j-1];
	            else
	               dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	        }
	    }
	    cout<<n-dp[n][n]<<endl;
	}
	return 0;
}

/* helppreanadkada
length = 15
Longest palindrome subsequence -> a_a_ka_a or a_ad_a_a. lets assume former
lenght = 5
ans = 15-5 = 10
that is helpprea(d)nadk(d)a(n)da(erppleh)
*/