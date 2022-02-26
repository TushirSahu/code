#include<bits/stdc++.h>
using namespace std;

//Maps is associative arrays
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
map<string,int> markmap;
markmap["Rohan"]=78;
markmap["Raghav"]=48;
markmap["Ravi"]=28;
markmap.insert({"Raj",45});
map<string,int>::iterator iter;
for (iter = markmap.begin(); iter != markmap.end(); iter++)
{
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
}

return 0;
}