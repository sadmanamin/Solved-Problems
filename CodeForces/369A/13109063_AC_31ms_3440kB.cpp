#include<bits/stdc++.h>
using namespace std;
int ar[3];
int main(){
    int n,m,k,nn;
    scanf("%d%d%d",&n,&m,&k);
    for(int c=0;c<n;c++){
        scanf("%d",&nn);
        ar[nn]++;
    }
    //cout<<ar[1]<<" "<<ar[2]<<endl;
    if(ar[1]>=m){
        ar[1]=ar[1]-m;
        m=0;
    }
    
    else{
        m=m-ar[1];
        ar[1]=0;
    }
    //cout<<ar[1]<<" "<<m<<endl;
    if(ar[2]>=k){
        ar[2]-=k;
        k=0;
        if(ar[2]>=m && m>0){
            ar[2]=ar[2]-m;
            m=0;
        }
        else if(m>0){
        	m-=ar[2];
        	ar[2]=0;
        }
    }
    else{
        k-=ar[2];
        ar[2]=0;
    }
    //cout<<ar[2]<<" "<<m<<" "<<k<<endl;
    int ans=ar[1]+ar[2];
    printf("%d\n",ans);
}
