//KMP Algorithm :: O(n+m)

//https://www.youtube.com/watch?v=4jY57Ehc14Y
int strstr(string s, string x){
    int n= s.size();
    int m= x.size();
    int lps[m];
    //findlps O(m)
    int len=0;
    int i=1;
    lps[0]=0;
    while(i<m){
        if(x[i] == x[len]){
            lps[i] = len+1;
            len++; i++;
        }else{
            if(len == 0){
                lps[i] = 0;
                i++;
            }else{
                len = lps[len - 1];
            }
        }
    }
    
    //O(n)
    i=0;
    int j=0; int result = -1;
    while(i<n){
        if(s[i]==x[j]){
            i++; j++;
        }else{
            if(j!=0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
        if(j==m){
            result = i-j;
            break;
            //comment out break and uncomment below to find all occurences
            //j=lps[j-1];
        }
    }
    return result;
}