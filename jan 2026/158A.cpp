#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; 
    cin>>n>>k;
    vector <int> vi;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;vi.push_back(temp);
    }
    int ct=vi[k-1];
    int cn=0;
    for (int i=0;i<n;i++){
        if (vi[i]>=ct && vi[i]>0)cn++;
        else break;
    }
    cout<<cn;
}
int main(){
    int t=1;
    //cin>>t;
    while (t--){
        solve ();
    }
}