#include <bits/stdc++.h>
using namespace std;
int main(){
    int member,mc,mem=0,ac;
    cin>>member;
    string a[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };
    string m[member];
    for(mc=0;mc<member;mc++){
        cin>>m[mc];

    }

    if(member<=16){
        for(ac=0;ac<16;ac++,mem++){
            cout<<m[mem]<<": "<<a[ac]<<endl;
            if(mem==(member-1)) mem=-1;
        }
    }


    else if(member>16){


        if(member%16>0) mc=(member/16)+1;
        else mc=member/16;

        for(ac=0;ac<16*mc;ac++,mem++){

            if(ac>15) cout<<m[mem]<<": "<<a[ac-16]<<endl;
            else cout<<m[mem]<<": "<<a[ac]<<endl;
            if(mem==(member-1)) mem=-1;

        }
    }

    return 0;
}