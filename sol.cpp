#include <bits/stdc++.h>
#define ll long long
#define vi(v) vector<int>v
#define deck(d) deque<int>d;
#define li list<int>l;
#define fli forward_list<int>fl;
#define stck stack<int>st;
#define print(v) copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
#define input(v) copy(v.begin(),v.end(),istream_iterator<int>(cin));
#define copy1(v1,v2) copy(v1.begin(),v1.end(),back_inserter(v2));
#define limit ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
void sonic() {
    ll l,r,m,res=1;
    cin>>l>>r>>m;
    for(ll i=l;i<=r;i++){
        res=(res%m)*(i%m)%m;
    }
    cout<<res;
}
int main() {
    limit
    sonic();
}
