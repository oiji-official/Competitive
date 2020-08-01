//DP : LONGEST PALINDROME SUBSEQUENCE
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
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    int n = s.length();
	    int dp[n][n];
	    //char covered is 1, lps where char covered is 1 is 1.
	    //i.e if i==j this means char covered is 1
	    // therefore this means diagonal should be filled with 1
	    for(int i=0; i<n; i++){
	            dp[i][i] = 1;
	        
	    }
	    for(int char_covered=2; char_covered<=n; char_covered++){
	        for(int i=0; i< n-char_covered+1; i++){
	            int j = i+char_covered-1;
	            if(s[i]==s[j] && char_covered == 2){
	                dp[i][j] = 2;
	            }
	            else if(s[i]==s[j]){
	                dp[i][j] = dp[i+1][j-1] + 2;
	            }
	            else{
	                dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
	            }
	        }
	    }
	    cout<<n-dp[0][n-1]<<endl;
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