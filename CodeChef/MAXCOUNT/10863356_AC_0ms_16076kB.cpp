#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[10001]={0}, num, maximum = 0, pos = 0;
        for(int i = 0; i < n; i++){
            cin >> num;
            arr[num]++;
            if(arr[num] > maximum){
                maximum = arr[num];
                pos = num;
            }
            if(arr[num] == maximum && num < pos){
                maximum = arr[num];
                pos = num;
            }
        }
        cout << pos << " " << maximum << endl;
    }
    return 0;
}