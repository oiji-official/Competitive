//using dp
//https://iq.opengenus.org/longest-palindromic-substring-dp/#:~:text=Algorithms%20Dynamic%20Programming%20(DP)&text=Whereas%20palindrome%20is%20a%20word,is%20also%20a%20valid%20answer.

#include<bits/stdc++.h>
using namespace std;

/* 
Case 1:i==j
Every single character of a string is a palindrome. 
Therefore dp[i][j] is true.

Case 2:j-i=1
We're checking two characters at a time, if s[i]==s[j], 
then dp[i][j] is true.

Case 3:j-i>=2
Consider "aba" s[0]=s[2], therefore dp[i][j] will be true. 
If s[i]==s[j], but j-i>=2, dp[i][j] = dp[i+1][j-1]. 
Now the i+1,j-1 coordinates are literally eliminating 
the first and last character, since they are already the same, 
we want to know if the string without them is still a palindrome or no? 
This result will in turn be any of the above cases or this case, 
nevertheless, the result has already been calculated.
*/

int main(){
    int t; cin>>t; 
    while(t--){
       string s; cin>>s;
       int n = s.size();
       bool dp[n][n];
       memset(dp, false, sizeof(dp));
       int x, y, max=INT_MIN;
       
       for(int i=n-1; i>=0; i--){
           for(int j=i; j<=n-1; j++){
               if(j==i){
                   dp[i][j] = true;
               }
               else if (s[i]==s[j]){
                  if(j-i==1){
                      dp[i][j] = true;
                  }else{
                      dp[i][j] = dp[i+1][j-1];
                  }
               }
               //why did I start i from behind because if no palindrome string
               //then I want to display first letter
               //therefore since iteration would stop at beginning of string
               //also j-i>'=' max not j-i>max because 
               //in case no palin => single char => we want latest single char
               // latest because here latest is first char
               if (dp[i][j] && j-i>=max){
                   max= j-i;
                   x=i; y=j;
               }
           }
       }
       cout<<s.substr(x, y-x+1)<<endl;
       //del [][]dp;
    }
}