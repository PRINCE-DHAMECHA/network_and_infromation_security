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

int euclidiun(int a, int b, bool isPrint, bool isGCD)
{
    int r1 = a, r2 = b, r, q, t1 = 0, t2 = 1, s1 = 1, s2 = 0, s, t;
    vii ans;
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

int power(ll a, ll n, ll p)
{
    int res = 1;
    a = a % p;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (res * a) % p;
        }
        n = n >> 1;
        a = (a * a) % p;
    }
    return res;
}

vll keyGeneration(int p)
{
    vi zStar;
    forr(i, p - 1)
    {
        zStar.pb(i + 1);
    }
    vvll mat(p, vll(p, 0));
    vi iVector(p, 0);
    for (auto i : zStar)
    {
        bool flag = true;
        forl(j, 1, p - 1)
        {
            mat[i][j] = power(i, j, p);
            mat[i][j] = mat[i][j] % p;
            if (mat[i][j] == 1 && flag)
            {
                flag = false;
                iVector[i] = j;
            }
        }
    }
    outl("Matrix: ");
    cout << "    ";
    for (auto i : zStar)
    {
        cout << setfill(' ') << setw(2) << i << " ";
    }
    outl("");
    forl(i, 1, mat.sz - 1)
    {
        cout << setfill(' ') << setw(2) << i << ": ";
        forl(j, 1, mat[0].sz - 1)
        {
            cout << setfill(' ') << setw(2) << mat[i][j] << " ";
        }
        outl("");
    }
    cout << endl
         << "i values:" << endl;
    forl(i, 1, iVector.sz - 1)
    {
        cout << setfill(' ') << setw(2) << i << " : " << setfill(' ') << setw(2) << iVector[i] << endl;
    }
    vi primitiveRoots;
    forr(i, p)
    {
        if (iVector[i] == p - 1)
        {
            primitiveRoots.pb(i);
        }
    }
    outl("\nPrimitive Roots : ");
    printv(primitiveRoots);

    int e1 = primitiveRoots[0], d = (rand() % (p - 2)) + 1;
    lli e2 = power(e1, d, p);
    e2 = e2 % p;
    outl("\nPublic Key: ");
    cout << "e1: " << e1 << " "
         << "e2: " << e2 << " p: "
         << " " << p << endl;
    outl("Private Key: ");
    cout << "d: " << d << endl;
    return {e1, e2, d, p};
}

pii elgamalEnc(int m, int e1, int e2, int p)
{
    srand(time(NULL));
    lli random = (rand() % (p - 1)) + 1;
    lli c1 = power(e1, random, p);
    lli c2 = power(e2, random, p);
    c2 *= m;
    c2 = c2 % p;
    rtn{c1, c2};
}

int elgamalDec(int c1, int c2, int d, int p)
{
    lli m = c2;
    c1 = power(c1, d, p);
    c1 = euclidiun(p, c1, false, false);
    if (c1 < 0)
    {
        c1 += p;
    }
    m = c2 * c1;
    m = m % p;
    rtn m;
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;

    cout << "Enter Prime Number: " << endl;
    ni(p);
    cout << "Enter Number: " << endl;
    ni(m);
    vll keys = keyGeneration(p);
    lli e1 = keys[0], e2 = keys[1], d = keys[2];
    cout << "\nM: " << m << endl;
    pair<int, int> pi = elgamalEnc(m, e1, e2, p);
    outl("\nEncryption: ");
    cout << "c1"
         << ": " << pi.ff << " "
         << "c2"
         << ": " << pi.ss << endl;
    outl("\nDecryption: ");
    int M = elgamalDec(pi.ff, pi.ss, d, p);
    cout << "M: " << M << endl;

    rtn 0;
}
