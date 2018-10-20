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
    int n,q,m,tc=1;
    while(scanf("%d%d",&n,&q) && (n && q)){
        vector<int> a;
        for(int c=0;c<n;c++){
            scanf("%d",&m);
            a.push_back(m);
        }
        sort(a.begin(),a.end());
        printf("CASE# %d:\n",tc++);
        for(int c=1;c<=q;c++){
            scanf("%d",&m);
            int index=lower_bound(a.begin(),a.end(),m)-a.begin();
            if(a[index]==m)
            printf("%d found at %d\n",m,(index+1));
            else printf("%d not found\n",m);
        }
    }

return 0;
}