#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<int> x(n);
        vector<int> y(m);
        
        vector<int> fx(1001, 0);
        vector<int> fy(1001, 0);
        
        for(int i=0; i<n; i++){
            cin>>x[i];
            fx[x[i]]++;
        }
        for(int i=0; i<m; i++){
            cin>>y[i];
            fy[y[i]]++;
        }
        
        long long int count =0, total = 0;
        
        //handle (smaller no, bigger no) scenario which holds valid for (2... , 5....)
        for(int i=2; i<1001; i++){
            count = 0;
            if (fx[i] > 0){
                for(int j =5; j<1001; j++){
                    if(fy[j]>0){
                        if (j>i){
                            count+= fy[j];
                        }
                    }
                }
                total += count*fx[i];
            }
        }
        
        //handle exception of (2,3), (2,4), (4,2)
        //hence go from (2...4, 2...4) and manually check (pow scenario) for this range
        for(int i=2; i<=4; i++){
            if (fx[i] > 0){
                count =0;
                for(int j=2; j<=4; j++){
                    if(fy[j]>0){
                        if ((int)pow(i,j) > (int)pow(j,i)){
                            count+= fy[j];
                        }
                    }
                }
                total+= count*fx[i];
            }
        }
        
        //Now, ( ,1) works
        // (1, ) doesn't. Therfore iterate through all elements of x except 1001
        count = 0;
        for(int i=2; i<1001; i++){
            if(fx[i]>0){
                count+= fx[i];
            }
        }
        total += count* fy[1];
        cout<<total<<endl;
        
    }
    return 0;
}
