
#include <bits/stdc++.h>
#define rt return
#define LL long long
#define sc scanf
#define pf printf
#define MOD 1000000007
#define PI acos(-1.0)
#define NL printf("\n")
#define gap printf(" ")
#define sz(x) x.size()
#define sqr(x) ((x)*(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
#define Yes printf("Yes\n")
#define No printf("No\n")
#define ek first
#define dui second
#define dist(x1,x2,y1,y3) sqrt(sqr(x1-x2)+sqr(y1-y2))

/** Vector **/
#define pb(x) push_back(x)
#define Maxvec(vector) *max_element(vector.begin(),vector.end())
#define Minvec(vector) *min_element(vector.begin(),vector.end())
#define Cntvec(vector,key) count(vector.begin(),vector.end(),key)
#define Revvec(vector) reverse(vector.begin(),vector.end())
#define CV(vector) vector.clear()
#define EraseV(vector,n) vector.erase(vector.begin(),vector.begin()+n)
#define eraseV(vector,n) vector.erase (vector.begin()+n)
#define Vswap(v1,v2) v1.swap(v2)
/** SET **/
#define setLB(set,n) set.lower_bound(n)
#define setUP(set,n) set.upper_bound(n)
#define setfind(set,n) set.find(n)
#define ins(n) insert(n)
/**String **/
#define Revstr(st) reverse(st.begin(),st.end())
#define line(st) getline(cin,st)
#define Sswap(st1,st2) st1.swap(st2)
#define portxy(st,x,y) st.substr(x,y)/**Portion from a string x to y pos**/
#define portz(st,z) st.substr(z) /**Portion of str from z to last **/
#define sfind(st,key) st.find(key)/** find the pos **/
#define stdlt(st,x,y) st.erase(x,y)/** erase(beg+x)/erase(beg+x,end-y) **/
#define kill(st) st.clear()
/** Array **/
#define Cntkey(arr,n,key) count(arr,arr+n,key)/** arr te kotobar key asee ta chking **/
#define Revarr(arr,n) reverse(arr,arr+n)
#define Maxarr(arr,n) *max_element(arr,arr+n)
#define Minarr(arr,n) *min_element(arr,arr+n);
/** Array must be sorted before use lower and upper bound  **/
#define LB(arr,n,key) *lower_bound(arr,arr+n,key)-1
#define UB(arr,n,key) *upper_bound(arr,arr+n,cnt)-1
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define CLR(a) memset(a,0,sizeof(a))
#define Aswap(a1,a2) a1.swap(a2)/** must a1==a2 **/
#define Sumarr(sum,i,arr,n) lp0(i,n)sum+=arr[i]

#define lp0(i,n) for(i=0;i<n;i++)
#define lp00(i,n) for(i=0;i<=n;i++)
#define lp1(i,n) for(i=1;i<n;i++)
#define lp11(i,n) for(i=1;i<=n;i++)
#define lpab(i,a,b) for(i=a;i<b;i++)
#define lpAB(i,A,B) for(i=A;i<=B;i++)

#define MAX 1000000
#define max3(x,y,z) max(x,max(y,z))
#define min3(x,y,z) min(x,min(y,z))
/**to chk 2 arr equal or not = if(equal(arr1,arr2,arr2+n)) its a bool**/
using namespace std;
//template< class T > inline T gcd(T a,T b) {a=abs(a);b=abs(b); if(!b) return a; return gcd(b,a%b);}
//template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/_gcd(a,b))*b;}
//template<typename T> T POW(T b,T p) {T r=1; while(p){if(p&1)r=(r*b);b=(b*b);p>>=1;}return r;}
//template<typename T> T BigMod(T b,T p,T m) {T r=1; while(p){if(p&1)r=(r*b)%m;b=(b*b)%m;p>>=1;}return r;}
//template<typename T> T ModInverse(T n,T m) { return BigMod(n,m-2,m)};
//bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
//bool isConst(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}

//int toint(string s)  { int sm; stringstream ss(s); ss>>sm; return sm;/** st=123 to int=123 **/ }
//template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}

//int xmove[8]={2, 1, -1, -2, -2, -1,  1,  2};//knight's x's 8move
//int ymove[8]={1, 2,  2,  1, -1, -2, -2, -1};//knight's y's 8move
//int dx[] = {+1,-1,+0,+0};//One step x's 4 way move
//int dy[] = {+0,+0,-1,+1};//One step y's 4 way move
//int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};//One step x's 8 way move
//int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};//One step y's 8 way move
int main()
{
   LL n;
   while(sc("%lld",&n)!=EOF)
   {
    LL bok[n],i,j,k,l;
    lp0(i,n)
    {
      sc("%lld",&bok[i]);
    }
    sort(bok,bok+i);
    LL ase;sc("%lld",&ase);

    LL x,z,y,d=MOD;
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {  //cout<<d<<endl;
          if(bok[i]+bok[j]==ase)
      {   //cout<<d<<endl;
          if(labs(bok[i]-bok[j])<d)
        {
            x=i;y=j;
          z=labs(bok[x]-bok[y]);
          d=min(d,z);//cout<<d<<endl;
        }
      }
      }
    }
    pf("Peter should buy books whose prices are %lld and %lld.\n\n",bok[x],bok[y]);


   }


    rt 0;
}



