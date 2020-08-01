built-int::  x.find(s)
//DP : O(M*N) 
int strstr(string s, string x){
    int n = s.size();
    int m = x.size();
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i]==x[j]){
                //if both are same then pass the baton down to next 
                //chars of s and x
                dp[i+1][j+1] = 1 + dp[i][j];
            }
            //if number of batons passed are equal to m-1
            //then this implies dp[i][j] ke previous predecessors
            //match
            //dp[i+1][j+1] will be checked kyunki abhi update hua
            //and has latest info regarding its purvaj
            if(dp[i+1][j+1] == m){
                return (i+1)-m;
            }
        }
    }
    return -1;
}
/*
0 1 2 3 4    0 1 2            [2]==[0]   dp[3][1] = 0+1
x y a b c    a b c            [3]==[1]   dp[4][2] = 0+1+1
                              [4]==[2]   dp[5][3] = 0+1+1+1 == m(which is 3)
                              hence original i batao
                              i.e (i+1)-m == 5 - 3 = 2
*/