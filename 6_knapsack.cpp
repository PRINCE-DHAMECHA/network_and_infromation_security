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

vi keyGeneration(vi ad)
{
    int m = 0;
    for (auto i : ad)
    {
        m += i;
    }
    int w = -1;
    forl(i, 2, m - 1)
    {
        if (euclidiun(m, i, false, true) == 1)
        {
            w = i;
            break;
        }
    }
    vi a;
    for (auto i : ad)
    {
        a.pb((i * w) % m);
    }
    a.pb(m);
    a.pb(w);
    rtn a;
}

int knapsackEncHelper(vi pk, vi plain)
{
    int s = 0;
    forr(i, plain.sz)
    {
        if (plain[i])
        {
            s += pk[i];
        }
    }
    rtn s;
}

vi subSet(vi v, int s)
{
    vi dec(v.sz, 0);
    for (int i = v.sz - 1; i >= 0; i--)
    {
        if (s >= v[i])
        {
            dec[i] = 1;
            s -= v[i];
        }
    }
    rtn dec;
}

vi knapsackDecHelper(int s, int m, int w, vi ad)
{
    int inverseOfW = euclidiun(m, w, false, false);
    int sum = inverseOfW * s;
    sum = sum % m;
    vi dec = subSet(ad, sum);
    rtn dec;
}

vi decimalToBinary(int N)
{
    vi B_Number;
    while (N != 0)
    {
        int rem = N % 2;
        B_Number.pb(rem);
        N /= 2;
    }
    reverse(all(B_Number));
    return B_Number;
}

int binToDec(vi v)
{
    int tot = 0;
    int base = 1;
    for (int i = v.sz - 1; i >= 0; i--)
    {
        tot += (v[i] * base);
        base *= 2;
    }
    rtn tot;
}

vi knapsackEnc(str s, vi pk)
{
    vi v;
    vi plain;
    for (auto i : s)
    {
        plain.pb(int(i));
    }
    vii binPlain;
    for (auto i : plain)
    {
        binPlain.pb(decimalToBinary(i));
    }
    vi cipher;
    for (auto i : binPlain)
    {
        cipher.pb(knapsackEncHelper(pk, i));
    }
    outl("");
    outl("Ascii Values of Plain Text");
    printv(plain);
    outl("");
    outl("Corresponding Binary Values");
    for (auto i : binPlain)
    {
        printv(i);
    }
    outl("");
    outl("Encryption Of Each Character Of Plain Text");
    printv(cipher);
    outl("");
    rtn cipher;
}

str knapsackDec(vi s, int m, int w, vi ad)
{
    vii ci;
    vi plain;
    for (auto i : s)
    {
        vi temp = knapsackDecHelper(i, m, w, ad);
        ci.pb(temp);
        int temp2 = binToDec(temp);
        plain.pb(temp2);
    }
    str plainStr = "";
    for (auto i : plain)
    {
        plainStr += char(i);
    }
    outl("");
    outl("Cipher Vector:");
    printv(s);
    outl("");
    outl("Ascii Values In Binary After Decryption");
    for (auto i : ci)
    {
        printv(i);
    }
    outl("");
    cout << "Decrypted String: " << plainStr << endl;
    rtn plainStr;
}

int main()
{
    // cout<<"Enter Plain Text:";
    // str s;
    // cin>>s;
    // cout<<"Enter Sequance:"
    // getvecti(ad, 7);
    vi ad = {1, 2, 4, 9, 17, 35, 69};
    vi pk = keyGeneration(ad);
    int w = pk[pk.sz - 1];
    int m = pk[pk.sz - 2];
    pk.pp();
    pk.pp();
    vi plain = {1, 0, 1, 0, 1, 0, 1, 0};
    outl("");
    outl("Private Key:");
    printv(ad);
    cout << "W: " << w << " "
         << "M: " << m << endl;
    outl("");
    outl("Public Key:");
    printv(pk);
    outl("");
    str s = "networkAndInformationSecurity";
    cout << "Plain Text: " << s << endl;
    vi encryption = knapsackEnc(s, pk);
    str decryption = knapsackDec(encryption, m, w, ad);
}

///// Output ////

// Private Key:
// 1 2 4 9 17 35 69
// W: 2 M: 137

// Public Key:
// 2 4 8 18 34 70 1

// Plain Text: networkAndInformationSecurity

// Ascii Values of Plain Text
// 110 101 116 119 111 114 107 65 110 100 73 110 102 111 114 109 97 116 105 111 110 83 101 99 117 114 105 116 121

// Corresponding Binary Values
// 1 1 0 1 1 1 0
// 1 1 0 0 1 0 1
// 1 1 1 0 1 0 0
// 1 1 1 0 1 1 1
// 1 1 0 1 1 1 1
// 1 1 1 0 0 1 0
// 1 1 0 1 0 1 1
// 1 0 0 0 0 0 1
// 1 1 0 1 1 1 0
// 1 1 0 0 1 0 0
// 1 0 0 1 0 0 1
// 1 1 0 1 1 1 0
// 1 1 0 0 1 1 0
// 1 1 0 1 1 1 1
// 1 1 1 0 0 1 0
// 1 1 0 1 1 0 1
// 1 1 0 0 0 0 1
// 1 1 1 0 1 0 0
// 1 1 0 1 0 0 1
// 1 1 0 1 1 1 1
// 1 1 0 1 1 1 0
// 1 0 1 0 0 1 1
// 1 1 0 0 1 0 1
// 1 1 0 0 0 1 1
// 1 1 1 0 1 0 1
// 1 1 1 0 0 1 0
// 1 1 0 1 0 0 1
// 1 1 1 0 1 0 0
// 1 1 1 1 0 0 1

// Encryption Of Each Character Of Plain Text
// 128 41 48 119 129 84 95 3 128 40 21 128 110 129 84 59 7 48 25 129 128 81 41 77 49 84 25 48 33

// Cipher Vector:
// 128 41 48 119 129 84 95 3 128 40 21 128 110 129 84 59 7 48 25 129 128 81 41 77 49 84 25 48 33

// Ascii Values In Binary After Decryption
// 1 1 0 1 1 1 0
// 1 1 0 0 1 0 1
// 1 1 1 0 1 0 0
// 1 1 1 0 1 1 1
// 1 1 0 1 1 1 1
// 1 1 1 0 0 1 0
// 1 1 0 1 0 1 1
// 1 0 0 0 0 0 1
// 1 1 0 1 1 1 0
// 1 1 0 0 1 0 0
// 1 0 0 1 0 0 1
// 1 1 0 1 1 1 0
// 1 1 0 0 1 1 0
// 1 1 0 1 1 1 1
// 1 1 1 0 0 1 0
// 1 1 0 1 1 0 1
// 1 1 0 0 0 0 1
// 1 1 1 0 1 0 0
// 1 1 0 1 0 0 1
// 1 1 0 1 1 1 1
// 1 1 0 1 1 1 0
// 1 0 1 0 0 1 1
// 1 1 0 0 1 0 1
// 1 1 0 0 0 1 1
// 1 1 1 0 1 0 1
// 1 1 1 0 0 1 0
// 1 1 0 1 0 0 1
// 1 1 1 0 1 0 0
// 1 1 1 1 0 0 1

// Decrypted String: networkAndInformationSecurity