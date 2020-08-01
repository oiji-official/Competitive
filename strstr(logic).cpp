//MY WAY

int strstr(string s, string x)
{
     for(int i=0; i<s.size()-x.size()+1; i++){
         if(s[i] == x[0]){
             //need to keep track of j after for loop as well
             int j=0;
             for( ; j<x.size(); j++){
                 if(s[i+j] != x[j] ){
                    break;
                 }
             }
             if(j==x.size()){
                     return i;
             }
         }
     }
     return -1;
}