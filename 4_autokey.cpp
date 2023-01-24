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
    rtn
            end *ratio -
        start / ratio - 1;
}

str autokeyEnc(str s1, int k)
{
    vi plain;
    vi key;
    key.pb(k);
    for (auto i : s1)
    {
        plain.pb(int(i) - 97);
    }
    forl(i, 1, s1.sz - 1)
    {
        key.pb(plain[i - 1]);
    }
    vi cipher;
    vi cipherWithoutMod;
    int j = 0;
    for (auto i : plain)
    {
        cipherWithoutMod.pb(i + key[j]);
        cipher.pb((i + key[j++]) % 26);
    }
    str cipherStr = "";
    for (auto i : cipher)
    {
        cipherStr += char(i + 97);
    }
    cout << "Plain Text:       ";
    for (auto i : s1)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Mapping:          ";
    for (auto i : plain)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Key Stream:       ";
    for (auto i : key)
    {
        cout << i << " ";
    }
    outl("");
    cout << "cipherWithoutMod: ";
    for (auto i : cipherWithoutMod)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Encrypted:        ";
    for (auto i : cipher)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Encrypted String: ";
    for (auto i : cipherStr)
    {
        cout << i << " ";
    }
    outl("");
    rtn cipherStr;
}

str autokeyDec(str s1, int k)
{
    vi cipher;
    for (auto i : s1)
    {
        cipher.pb(int(i) - 97);
    }
    vi key;
    key.pb(k);
    forl(i, 1, s1.sz - 1)
    {
        if (cipher[i - 1] - key[i - 1] < 0)
        {
            key.pb(cipher[i - 1] - key[i - 1] + 26);
        }
        else
        {
            key.pb((cipher[i - 1] - key[i - 1]) % 26);
        }
    }
    vi plain;
    vi plainWithoutMod;
    int j = 0;
    for (auto i : cipher)
    {
        plainWithoutMod.pb(i - key[j]);
        if (i - key[j] < 0)
        {
            plain.pb((i - key[j++]) + 26);
            cnt;
        }
        plain.pb(i - key[j++]);
    }
    str plainStr = "";
    for (auto i : plain)
    {
        plainStr += char(i + 97);
    }
    cout << "cipher Text:      ";
    for (auto i : s1)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Mapping:          ";
    for (auto i : cipher)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Key Stream:       ";
    for (auto i : key)
    {
        cout << i << " ";
    }
    outl("");
    cout << "plainWithoutMod:  ";
    for (auto i : plainWithoutMod)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Decrypted:        ";
    for (auto i : plain)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Decrypted String: ";
    for (auto i : plainStr)
    {
        cout << i << " ";
    }
    outl("");
    rtn plainStr;
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;
    outl("");
    str encrypt = autokeyEnc("information", 13);
    outl("");
    transform(encrypt.begin(), encrypt.end(), encrypt.begin(), ::tolower);
    str decrypt = autokeyDec(encrypt, 13);
    outl("");
    rtn 0;
}

//~ Output:

// Plain Text:       i n f o r m a t i o n
// Mapping:          8 13 5 14 17 12 0 19 8 14 13
// Key Stream:       13 8 13 5 14 17 12 0 19 8 14
// cipherWithoutMod: 21 21 18 19 31 29 12 19 27 22 27
// Encrypted:        21 21 18 19 5 3 12 19 1 22 1
// Encrypted String: v v s t f d m t b w b

// cipher Text:      v v s t f d m t b w b
// Mapping:          21 21 18 19 5 3 12 19 1 22 1
// Key Stream:       13 8 13 5 14 17 12 0 19 8 14
// plainWithoutMod:  8 13 5 14 -9 -14 0 19 -18 14 -13
// Decrypted:        8 13 5 14 17 12 0 19 8 14 13
// Decrypted String: i n f o r m a t i o n