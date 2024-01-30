#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> div(1000006);
    for(int i=1; i<1000005; i++)
    {
        for(int j=i; j<1000005; j+=i)
        {
            div[j]++;
        }
    }

    while(n--)
    {
        ll x;
        cin >> x;
        cout << div[x] << endl;
    }

}

