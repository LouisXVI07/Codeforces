#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int l=s.length();
    if(l<=10){
        cout<<s<<'\n';
        return;
    }
    cout<<s[0]<<l-2<<s[l-1]<<'\n';
}
int main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}