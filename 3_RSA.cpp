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

lli euclidiun(lli a, lli b, bool isPrint, bool isGCD)
{
    lli r1 = a, r2 = b, r, q, t1 = 0, t2 = 1, s1 = 1, s2 = 0, s, t;
    vector<vector<lli>> ans;
    while (r2 != 0)
    {
        r = r1 % r2;
        q = r1 / r2;
        t = t1 - q * t2;
        s = s1 - q * s2;
        ans.pb({q, r1, r2, r, s1, s2, s, t1, t2, t});
        r1 = r2;
        r2 = r;
        t1 = t2;
        t2 = t;
        s1 = s2;
        s2 = s;
    }
    if (isPrint)
    {
        cout << "Number:  " << b << endl;
        outl("  q  r1  r2   r  s1  s2   s  t1  t2   t");
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << setfill(' ') << setw(3) << j << " ";
            }
            outl("");
        }
        cout << "Inverse: ";
        if (t1 < 0)
        {
            cout << t1 + a << endl;
        }
        else
        {
            cout << t1 << endl;
        }
    }
    if (r1 != 1)
    {
        return -1;
    }
    else
    {
        if (isGCD)
        {
            rtn r1;
        }
        if (t1 < 0)
        {
            rtn t1 + a;
        }
        else
        {
            rtn t1;
        }
    }
}

long exponentiation(lli base, lli exp, lli n)
{
    lli t = 1L;
    while (exp > 0)
    {
        if (exp % 2 != 0)
            t = (t * base) % n;

        base = (base * base) % n;
        exp /= 2;
    }
    return t % n;
}

vector<lli> RSA_KEY_GENERATION()
{
    lli p = 21059, q = 21493;
    lli n = p * q;
    lli phi = (p - 1) * (q - 1);
    lli e = -1;
    forl(i, 2, phi - 1)
    {
        if (euclidiun(phi, i, false, true) != -1)
        {
            e = i;
            brk;
        }
    }
    lli d = euclidiun(phi, e, false, false);
    vector<lli> v = {e, d, n};
    rtn v;
}

vector<lli> RSA_ENC(vector<lli> plain, lli e, lli n)
{
    vector<lli> cipher;
    vector<lli> cipherWithoutMod;
    for (auto i : plain)
    {
        cipher.pb(exponentiation(i, e, n));
    }
    rtn cipher;
}

vector<lli> RSA_DEC(vector<lli> cipher, lli d, lli n)
{
    vector<lli> plain;
    vector<lli> plainWithoutMod;
    for (auto i : cipher)
    {
        plain.pb(exponentiation(i, d, n));
    }
    rtn plain;
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;
    // solveT;
    vector<lli> v = RSA_KEY_GENERATION();
    vector<lli> plain = {10, 43, 45, 41, 25, 34, 55};
    vector<lli> enc = RSA_ENC(plain, v[0], v[2]);
    vector<lli> dec = RSA_DEC(enc, v[1], v[2]);
    outl("");
    outl("Keys: ");
    printv(v);
    outl("");
    outl("Encrypted Array: ");
    printv(enc);
    outl("");
    outl("Decrypted Array: ");
    printv(dec);
    rtn 0;
}

//~ Output:

// Keys:
// 5 362062829 452621087

// Encrypted Array:
// 100000 147008443 184528125 115856201 9765625 45435424 50663288

// Decrypted Array:
// 10 43 45 41 25 34 55