#include<bits/stdc++.h>
using namespace std;

/*int binarySearch(int a[],int hi,int elem){
    int lo=0,mid;
    while(lo<=hi){
        mid=(hi+lo)/2;
        if(a[lo]==elem) return lo;
        if(a[mid]==elem) return mid;

        if(a[hi]==elem) return hi;
        else if(elem<a[mid]){
            hi=mid-1;
        }
        else if(elem>a[mid]){
            lo=mid+1;
        }
    }
    return -1;
}*/

int main(){

string s;


while(getline(cin,s) && s!="DONE"){
        vector<char> v1;
vector<char> v2;
    //tolower(s);
    for(int c=0;c<s.size();c++){
        if(islower(s[c])){
            v1.push_back(s[c]);
        v2.push_back(s[c]);
        }
        else if(isupper(s[c])){
            //cout<<s[c]<<endl;
            s[c]=tolower(s[c]);
        //cout<<s[c]<<endl;
            v1.push_back(s[c]);
            v2.push_back(s[c]);
        }
        //cout<<v1[v1.size()-1]<<endl;
    }
    //bool chk=true;
    reverse(v2.begin(),v2.end());
     if(v1==v2) printf("You won't be eaten!\n");
     else  printf("Uh oh..\n");
}
return 0;
}

