//-----------------------//
//----PRINCE-DHAMECHA----//
//-----------------------//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef float flt;
typedef string str;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<lli, lli> plli;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vii;
typedef vector<vll> vvll;
typedef vector<vb> vvb;
typedef set<int> seti;
typedef set<ll> setl;
typedef set<pii> setpii;
typedef set<pll> setpll;
typedef vector<seti> vseti;
typedef vector<setl> vsetl;
typedef map<int, int> mpii;
typedef map<ll, ll> mpll;
typedef map<str, int> masi;
typedef map<int, str> mais;
typedef stack<int> stki;
typedef stack<str> stks;
typedef stack<char> stkc;
typedef stack<ll> stkll;
typedef queue<int> qint;
typedef queue<str> qstr;
typedef queue<ll> qll;
const double pi = 3.1415926535897932384626433832795;
#define gcd(a, b) __gcd(a, b)
#define all(element) element.begin(), element.end()
#define sortv(v) sort(all(v))
#define rsortv(v) sort(all(v), greater<int>())
#define pp pop_back
#define pb push_back
#define emb emplace_back
#define frt front()
#define emp empty()
#define ff first
#define ss second
#define rz resize
#define sz size()
#define cnt continue
#define brk break
#define rtn return
#define newl "\n"
#define solvef void solve
#define sq(a) (a) * (a)
#define solveT   \
    ll T;        \
    cin >> T;    \
    while (T--)  \
    {            \
        solve(); \
    }
#define ni(x) \
    int x;    \
    cin >> x;
#define nii(x, y) \
    int x, y;     \
    cin >> x >> y;
#define niii(x, y, z) \
    int x, y, z;      \
    cin >> x >> y >> z;
#define niiii(w, x, y, z) \
    int w, x, y, z;       \
    cin >> w >> x >> y >> z;
#define nl(x) \
    ll x;     \
    cin >> x;
#define nll(x, y) \
    ll x, y;      \
    cin >> x >> y;
#define nlll(x, y, z) \
    ll x, y, z;       \
    cin >> x >> y >> z;
#define nllll(w, x, y, z) \
    ll w, x, y, z;        \
    cin >> w >> x >> y >> z;
#define ns(x) \
    str x;    \
    cin >> x;
#define nss(x, y) \
    str x, y;     \
    cin >> x >> y;
#define nsss(x, y, z) \
    str x, y, z;      \
    cin >> x >> y >> z;
#define nssss(x, y, z, w) \
    str x, y, z, w;       \
    cin >> x >> y >> z >> w;
#define nc(x) \
    char x;   \
    cin >> x;
#define ncc(x, y) \
    char x, y;    \
    cin >> x >> y;
#define nccc(x, y, z) \
    char x, y, z;     \
    cin >> x >> y >> z;
#define ncccc(x, y, z, w) \
    char x, y, z, w;      \
    cin >> x >> y >> z >> w;
#define cout1(x) cout << x
#define cout2(x, y) cout << x << " " << y
#define cout3(x, y, z) cout << x << " " << y << " " << z
#define cout4(x, w, y, z) cout << x << " " \
                               << " " << w << " " << y << " " << z
#define in(e) cin >> e
#define outl(e) cout << e << newl
#define forr(i, n) for (ll i = 0; i < n; i++)
#define forl(i, b, n) for (ll i = b; i <= n; i++)
#define getvecti(v, n) \
    vi v(n);           \
    forr(i, n) in(v[i]);
#define printv(v)         \
    for (auto i : v)      \
    {                     \
        cout << i << " "; \
    }                     \
    cout << newl;
#define printmp(v)                           \
    for (auto i : v)                         \
    {                                        \
        cout << i.ff << " " << i.ss << newl; \
    }
#define imax(a, b) max(a, b)
#define imaxx(a, b, c) max({a, b, c})
#define imaxxx(a, b, c, d) max({a, b, c, d})
#define imin(a, b) min(a, b)
#define iminn(a, b, c) min({a, b, c})
#define iminnn(a, b, c, d) min({a, b, c, d})
#define __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$ \
    ios::sync_with_stdio(0);                              \
    cin.tie(0)

bool compFloat(double x, double y)
{
    if (abs(x - y) < 1e-9)
        rtn true;
    rtn false;
}
int apSum(int start, int end, int diff)
{
    rtn((end - start) / diff + 1) * (start + end) / 2;
}
int gpSum(int start, int end, int ratio)
{
    rtn end *ratio - start / ratio - 1;
}
int binetFibb(int n)
{
    rtn(pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5));
}

str monoAlpha(map<char, char> mp, str s1)
{
    str cipher = "";
    for (auto i : s1)
    {
        cipher += mp[i];
    }
    rtn cipher;
}

str monoAlphaDec(map<char, char> mp, str s1)
{
    map<char, char> mpInverse;
    for (auto i : mp)
    {
        mpInverse[i.ss] = i.ff;
    }
    str plain = "";
    for (auto i : s1)
    {
        plain += mpInverse[i];
    }
    rtn plain;
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;
    map<char, char> mp;
    vi v;
    forr(i, 26)
    {
        v.pb(i);
    }
    srand(time(NULL));
    forr(i, 50000)
    {
        int rand1 = rand() % 26;
        int rand2 = rand() % 26;
        int temp = v[rand1];
        v[rand1] = v[rand2];
        v[rand2] = temp;
    }
    forr(i, 26)
    {
        mp[char(i + 97)] = char(v[i] + 97);
    }
    // for (auto i : mp)
    // {
    //     cout << i.ff << " " << i.ss << endl;
    // }
    str plain = "computer";
    str cipher = monoAlpha(mp, plain);
    str plainFromDec = monoAlphaDec(mp, cipher);
    cout << "Plain Text:     " << plain << endl;
    cout << "Cipher Text:    " << cipher << endl;
    cout << "Decrypted Text: " << plainFromDec << endl;
}

//~ Output:

// Plain Text:     computer
// Cipher Text:    zamrunly
// Decrypted Text: computer