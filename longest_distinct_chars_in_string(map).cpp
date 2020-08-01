//https://www.youtube.com/watch?v=SQKHDJ0T37I
//whenever distinct keyword, use map
#include <iostream>
#include <map>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    map<char, int> m;
	    // char and their index found would be mapped
	    string s; cin>>s;
	    int final_max=0; int count=0;
	    
	    for(int i=0; i<s.length(); i++){
	        if(m.find(s[i]) == m.end()){
	            //this means char not present in map
	            m[s[i]] = i;
	            count++;
	        }else{
	            if(final_max < count){
	                final_max = count;
	            }
	            i = m[s[i]];
	            //i will be given the value of the previous index
	            //of the char
	            // see dry run below
	            count =0;
	            m.clear();
	        }
	    }
	    if (final_max < count ){
	        final_max = count;
	    }
	    cout<<final_max<<endl;
	}
	return 0;
}
/*
s= ababcdefga
At, i = 2
map status: a->0 b->1
char is a, already present in map
i value is given the index of the previously stored a  i.e 0, because we want to 
ignore the first encoutered a now(pehle waala a hatta lawde) and want to start the map again from b
i++ in for loop will take care of that
therefore i=0
map cleared
in for loop, i=1 because of i++, that is i points to b
map status: b-> 1
i=2
map status: b-> 1, a->2
i=3
char is b
i becomes 1(prev b waala)
i++ isiliye i=2
next shuru karo with map cleared
*/