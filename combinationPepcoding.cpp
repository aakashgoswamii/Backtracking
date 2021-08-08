#include<bits/stdc++.h>
using namespace std;

void combination(int cb,int tb,int ssf,int ts,string asf){
    
    if(cb>tb){
        if(ssf==ts)
            cout<<asf<<endl;
        return;
    }
    combination(cb+1,tb,ssf+1,ts,asf+"i");
    combination(cb+1,tb,ssf,ts,asf+"-");
}

int main()
    {
        int boxes,ritems;
        cin>>boxes>>ritems;
        combination(1,boxes,0,ritems,"");
    }
