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

bool checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
    {
        rtn 1;
    }
    else
    {
        rtn 0;
    }
}

vpii pointsGen(int a, int b, int p)
{
    vpii points;
    forr(i, p)
    {
        int rhs = i * i * i;
        rhs = rhs % p;
        rhs += a * i;
        rhs += b;
        if (rhs % p == 0)
        {
            points.pb({i, 0});
            cnt;
        }
        int isCheck = power(rhs, (p - 1) / 2, p);
        if (isCheck == 1)
        {
            while (!checkperfectsquare(rhs))
            {
                rhs += p;
            }
            points.pb({i, sqrt(rhs)});
            points.pb({i, p - sqrt(rhs)});
        }
    }
    rtn points;
}

pii addPoints(pii p1, pii p2, int p, int a, int b)
{
    int lambda;
    if (p1.ff != p2.ff && p1.ss != p2.ss)
    {
        lambda = (p2.ss - p1.ss);
        int inv = euclidiun(p, abs(p1.ff - p2.ff), false, false);
        lambda *= inv;
        lambda = lambda % p;
        if (p2.ff < p1.ff)
        {
            lambda = p - lambda;
        }
        lambda = lambda % p;
        pii pn;
        pn.ff = ((lambda * lambda) - p1.ff - p2.ff) % p;
        pn.ss = ((lambda * (p1.ff - pn.ff))) % p;
        pn.ss -= p1.ss;
        pn.ss = pn.ss % p;
        if (pn.ss < 0)
        {
            pn.ss *= -1;
            pn.ss = pn.ss % p;
            pn.ss = p - pn.ss;
        }
        rtn pn;
    }
    else if (p1.ff == p2.ff && p1.ss == p2.ss)
    {
        lambda = 3 * (p1.ff * p1.ff) + a;
        int inv = euclidiun(p, (abs(2 * p1.ss)) % p, false, false);
        int sign = 1;
        if (lambda < 0)
        {
            sign = -1;
        }
        lambda = lambda * inv;
        lambda = lambda % p;
        if (sign < 0)
        {
            lambda = p + lambda;
        }
        pii pn;
        pn.ff = ((lambda * lambda) - p1.ff - p2.ff) % p;
        pn.ss = ((lambda * (p1.ff - pn.ff))) % p;
        pn.ss -= p1.ss;
        pn.ss = pn.ss % p;
        if (pn.ss < 0)
        {
            pn.ss *= -1;
            pn.ss = pn.ss % p;
            pn.ss = p - pn.ss;
        }
        rtn pn;
    }
    else if (p1.ff == p2.ff && p1.ss == -1 * p2.ss)
    {
        rtn p1;
    }
}

vpii keyGen(pii e1, int p, int a, int b)
{
    int d = 4;
    pii e2 = addPoints(e1, e1, p, a, b);
    for (int i = 0; i < d - 2; i++)
    {
        e2 = addPoints(e2, e1, p, a, b);
        if (e2.ff < 0)
        {
            e2.ff += p;
        }
        if (e2.ss < 0)
        {
            e2.ss += p;
        }
    }
    vpii v;
    v.push_back({d, 0});
    v.push_back(e1);
    v.push_back(e2);
    rtn v;
}

vpii eccEnc(pii e1, pii e2, pii m, int p, int a, int b)
{
    int r = 1;
    pii c1 = e1;
    for (int i = 0; i < r - 1; i++)
    {
        c1 = addPoints(e1, e1, p, a, b);
        if (c1.ff < 0)
        {
            c1.ff += p;
        }
        if (c1.ss < 0)
        {
            c1.ss += p;
        }
    }
    pii c2 = e2;
    for (int i = 0; i < r - 1; i++)
    {
        c1 = addPoints(e1, e1, p, a, b);
        if (c2.ff < 0)
        {
            c2.ff += p;
        }
        if (c2.ss < 0)
        {
            c2.ss += p;
        }
    }
    c2 = addPoints(m, c2, p, a, b);
    vpii vp;
    vp.push_back(c1);
    vp.push_back(c2);
    rtn vp;
}

pii eccDec(pii c1, pii c2, int d, int p, int a, int b)
{
    pii dec = c1;
    for (int i = 0; i < d - 1; i++)
    {
        dec = addPoints(c1, dec, p, a, b);
        if (dec.ff < 0)
        {
            dec.ff += p;
        }
        if (dec.ss < 0)
        {
            dec.ss += p;
        }
    }
    c1 = dec;
    c1.ss *= -1;
    dec = addPoints(c2, c1, p, a, b);
    rtn dec;
}

int main()
{
    // int a = 1, b = 1, p = 13;
    pii pointForEnc;
    pii encPoint;
    int a, b, p;
    cout << "Enter Curve(a,b,p): " << endl;
    cin >> a >> b >> p;
    cout << "Enter Curve Point: " << endl;
    int i, j;
    cin >> i >> j;
    cout << "Enter Point To Encrypt: " << endl;
    cin >> i >> j;
    encPoint = {i, j};
    vpii points = pointsGen(1, 1, 13);
    cout << "\nGiven Curve: "
         << "y^2=x^3+" << a << "*x+" << b << endl;
    cout << "Found " << points.sz << " Points on the curve" << endl;
    for (auto i : points)
    {
        cout << "X: " << i.ff << " Y: " << i.ss << endl;
    }
    pii pn = addPoints({5, 4}, {5, 4}, p, a, b);
    cout << pn.ff << " " << pn.ss << endl;
    vpii vpp = keyGen(pointForEnc, p, a, b);
    cout << "\nkeys: " << endl;
    cout << "D: " << vpp[0].ff << endl;
    cout << "E1: " << vpp[1].ff << " " << vpp[1].ss << endl;
    cout << "E2: " << vpp[2].ff << " " << vpp[2].ss << endl;
    outl("");
    cout << "\nPlain text point: " << encPoint.ff << " " << encPoint.ss << endl;
    vpii vp = eccEnc(vpp[1], vpp[2], encPoint, p, a, b);
    outl("\nEncryption:");
    cout << "C1: " << vp[0].ff << " " << vp[0].ss << endl;
    cout << "C2: " << vp[1].ff << " " << vp[1].ss << endl;
    outl("");
    pii vdec = eccDec(vp[0], vp[1], 4, p, a, b);
    cout << "Decryption: " << vdec.ff << " " << vdec.ss << endl;
}

// Enter Curve:
// 1 1 13
// Enter Curve Point:
// 11 11
// Enter Point To Encrypt:
// 4 9

// Given Curve: y^2=x^3+1*x+1
// Found 17 Points on the curve
// X: 0 Y: 1
// X: 0 Y: 12
// X: 1 Y: 4
// X: 1 Y: 9
// X: 4 Y: 11
// X: 4 Y: 2
// X: 5 Y: 12
// X: 5 Y: 1
// X: 7 Y: 0
// X: 8 Y: 12
// X: 8 Y: 1
// X: 10 Y: 6
// X: 10 Y: 7
// X: 11 Y: 11
// X: 11 Y: 2
// X: 12 Y: 5
// X: 12 Y: 8
// -1 1

// keys:
// D: 4
// E1: 0 0
// E2: 1 1

// Plain text point: 4 9

// Encryption:
// C1: 0 0
// C2: 5 10

// Decryption: 4 9