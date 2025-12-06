#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}