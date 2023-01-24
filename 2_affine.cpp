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

str affine_cipher_encryption(str plainStr, int k, int k2)
{
    vi plain;
    for (auto i : plainStr)
    {
        plain.pb(int(i) - 97);
    }
    vi cipher;
    vi cipherWithoutMod;
    for (auto i : plain)
    {
        cipherWithoutMod.pb((i * k) + k2);
        cipher.pb(((i * k) + k2) % 26);
    }
    str cipherStr = "";
    for (auto i : cipher)
    {
        cipherStr += char(i + 65);
    }
    cout << "Plain Text:       ";
    for (auto i : plainStr)
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
    cout << "Mul. Key:         ";
    for (auto i : plain)
    {
        cout << k << " ";
    }
    outl("");
    cout << "Add. Key:         ";
    for (auto i : plain)
    {
        cout << k2 << " ";
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
    outl("");
    rtn cipherStr;
}

str affine_cipher_decryption(str cipherStr, int k, int k2)
{
    vi cipher;
    for (auto i : cipherStr)
    {
        cipher.pb(int(i) - 65);
    }
    vi plain;
    vi plainWithoutMod;
    int tempKey = k;
    k = euclidiun(26, k, 0, 0);
    for (auto i : cipher)
    {
        int temp = i - k2;
        if (temp < 0)
        {
            temp += 26;
        }
        plainWithoutMod.pb(temp * k);
        plain.pb((temp * k) % 26);
    }
    str plainStr = "";
    for (auto i : plain)
    {
        plainStr += char(i + 97);
    }
    cout << "Cipher Text:      ";
    for (auto i : cipherStr)
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
    cout << "Mul. Key:         ";
    for (auto i : cipher)
    {
        cout << tempKey << " ";
    }
    outl("");
    cout << "Add. Key:         ";
    for (auto i : cipher)
    {
        cout << k2 << " ";
    }
    outl("");
    cout << "Inverse:          ";
    for (auto i : cipher)
    {
        cout << k << " ";
    }
    outl("");
    cout << "PlainWithoutMod:  ";
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
    outl("");
    rtn plainStr;
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;
    // solveT;
    vi k_array;
    forr(i, 26)
    {
        int ans = euclidiun(26, i, 0, 0);
        if (ans != -1)
        {
            k_array.pb(i);
        }
    }
    outl("");
    outl("Z* :");
    printv(k_array);
    outl("");
    srand(time(NULL));
    int random = rand() % 12;
    int addRand = rand() % 26;
    outl("Affine Algo: ");
    str cipher = affine_cipher_encryption("hello", k_array[random], addRand);
    str plain = affine_cipher_decryption(cipher, k_array[random], addRand);
    rtn 0;
}

//~ Output:

// Z* :
// 1 3 5 7 9 11 15 17 19 21 23 25

// Affine Algo:
// Plain Text:       h e l l o
// Mapping:          7 4 11 11 14
// Mul. Key:         9 9 9 9 9
// Add. Key:         16 16 16 16 16
// cipherWithoutMod: 79 52 115 115 142
// Encrypted:        1 0 11 11 12
// Encrypted String: B A L L M

// Cipher Text:      B A L L M
// Mapping:          1 0 11 11 12
// Mul. Key:         9 9 9 9 9
// Add. Key:         16 16 16 16 16
// Inverse:          3 3 3 3 3
// PlainWithoutMod:  33 30 63 63 66
// Decrypted:        7 4 11 11 14
// Decrypted String: h e l l o