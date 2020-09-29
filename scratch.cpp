#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long double
#define str string
#define pll pair<long, long>
#define M 1000000007
#define MAX 2147483649
#define vl vector<ll>
#define vvl vector<vl>
#define vpll vector<pair<ll, ll>>
#define vvpll vector<vpll>
#define pq priority_queue
#define mpll map<ll, ll>
#define mp make_pair
#define pb push_back
#define fr(i, s, n, next) for (ll i = s; i < n; i += next)
#define flushIn fflush(stdin)
#define flushOut fflush(stdout)
using namespace std;

//template global variables
vl prime;
//int visited[1000000];

//solution global variables;
ll n, m;

//template functions

ll solve()
{
    cin >> n;
    string s;
    fflush(stdin);
    cin >> s;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && (s[i] - '0') % 2 != 0)
        {
            odd++;
        }
        if (i % 2 != 0 && (s[i] - '0') % 2 == 0)
        {
            even++;
        }
    }

    if (n % 2 == 0)
    {
        if (even > 0)
            cout << "2" << endl;
        else
            cout << "1" << endl;
    }
    else
    {
        if (odd > 0)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve();

    return 0;
}
