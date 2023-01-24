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

str additiveEnc(str s1, int k)
{
    vi plain;
    for (auto i : s1)
    {
        plain.pb(int(i) - 97);
    }
    vi cipher;
    vi cipherWithoutMod;
    for (auto i : plain)
    {
        cipherWithoutMod.pb(i + k);
        cipher.pb((i + k) % 26);
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
    cout << "Key:              ";
    for (auto i : plain)
    {
        cout << k << " ";
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

str additiveDec(str s1, int k)
{
    vi cipher;
    for (auto i : s1)
    {
        cipher.pb(int(i) - 97);
    }
    vi plain;
    vi plainWithoutMod;
    for (auto i : cipher)
    {
        plainWithoutMod.pb(i - k);
        if (i - k < 0)
        {
            plain.pb((i - k) + 26);
            cnt;
        }
        plain.pb(i - k);
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
    cout << "Key:              ";
    for (auto i : cipher)
    {
        cout << k << " ";
    }
    outl("");
    cout << "plainWithoutMod:  ";
    for (auto i : plainWithoutMod)
    {
        cout << i << " ";
    }
    outl("");
    cout << "Decrypted:       ";
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

str additiveDecWithoutPrint(str s1, int k)
{
    vi plain;
    for (auto i : s1)
    {
        plain.pb(int(i) - 97);
    }
    vi cipher;
    vi cipherWithoutMod;
    for (auto i : plain)
    {
        cipherWithoutMod.pb(i - k);
        if (i - k < 0)
        {
            cipher.pb((i - k) + 26);
            cnt;
        }
        cipher.pb(i - k);
    }
    str cipherStr = "";
    for (auto i : cipher)
    {
        cipherStr += char(i + 97);
    }
    rtn cipherStr;
}

void cryptAnalysisAdditive(str s1)
{
    forr(i, 26)
    {
        cout << "Key: " << i << endl;
        additiveDec(s1, i);
        outl("");
    }
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;
    additiveEnc("computer", 8);
    outl("");
    additiveDec("kwuxcbmz", 8);
    outl("");
    cryptAnalysisAdditive("kwuxcbmz");
    rtn 0;
}

/*
Plain Text:       c o m p u t e r
Mapping:          2 14 12 15 20 19 4 17
Key:              8 8 8 8 8 8 8 8
cipherWithoutMod: 10 22 20 23 28 27 12 25
Encrypted:        10 22 20 23 2 1 12 25
Encrypted String: k w u x c b m z

Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              8 8 8 8 8 8 8 8
PlainWithoutMod:  2 14 12 15 -6 -7 4 17
Deccrypted:       2 14 12 15 20 19 4 17
Decrypted String: c o m p u t e r

Key: 0
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              0 0 0 0 0 0 0 0
PlainWithoutMod:  10 22 20 23 2 1 12 25
Deccrypted:       10 22 20 23 2 1 12 25
Decrypted String: k w u x c b m z

Key: 1
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              1 1 1 1 1 1 1 1
PlainWithoutMod:  9 21 19 22 1 0 11 24
Deccrypted:       9 21 19 22 1 0 11 24
Decrypted String: j v t w b a l y

Key: 2
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              2 2 2 2 2 2 2 2
PlainWithoutMod:  8 20 18 21 0 -1 10 23
Deccrypted:       8 20 18 21 0 25 10 23
Decrypted String: i u s v a z k x

Key: 3
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              3 3 3 3 3 3 3 3
PlainWithoutMod:  7 19 17 20 -1 -2 9 22
Deccrypted:       7 19 17 20 25 24 9 22
Decrypted String: h t r u z y j w

Key: 4
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              4 4 4 4 4 4 4 4
PlainWithoutMod:  6 18 16 19 -2 -3 8 21
Deccrypted:       6 18 16 19 24 23 8 21
Decrypted String: g s q t y x i v

Key: 5
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              5 5 5 5 5 5 5 5
PlainWithoutMod:  5 17 15 18 -3 -4 7 20
Deccrypted:       5 17 15 18 23 22 7 20
Decrypted String: f r p s x w h u

Key: 6
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              6 6 6 6 6 6 6 6
PlainWithoutMod:  4 16 14 17 -4 -5 6 19
Deccrypted:       4 16 14 17 22 21 6 19
Decrypted String: e q o r w v g t

Key: 7
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              7 7 7 7 7 7 7 7
PlainWithoutMod:  3 15 13 16 -5 -6 5 18
Deccrypted:       3 15 13 16 21 20 5 18
Decrypted String: d p n q v u f s

Key: 8
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              8 8 8 8 8 8 8 8
PlainWithoutMod:  2 14 12 15 -6 -7 4 17
Deccrypted:       2 14 12 15 20 19 4 17
Decrypted String: c o m p u t e r

Key: 9
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              9 9 9 9 9 9 9 9
PlainWithoutMod:  1 13 11 14 -7 -8 3 16
Deccrypted:       1 13 11 14 19 18 3 16
Decrypted String: b n l o t s d q

Key: 10
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              10 10 10 10 10 10 10 10
PlainWithoutMod:  0 12 10 13 -8 -9 2 15
Deccrypted:       0 12 10 13 18 17 2 15
Decrypted String: a m k n s r c p

Key: 11
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              11 11 11 11 11 11 11 11
PlainWithoutMod:  -1 11 9 12 -9 -10 1 14
Deccrypted:       25 11 9 12 17 16 1 14
Decrypted String: z l j m r q b o

Key: 12
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              12 12 12 12 12 12 12 12
PlainWithoutMod:  -2 10 8 11 -10 -11 0 13
Deccrypted:       24 10 8 11 16 15 0 13
Decrypted String: y k i l q p a n

Key: 13
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              13 13 13 13 13 13 13 13
PlainWithoutMod:  -3 9 7 10 -11 -12 -1 12
Deccrypted:       23 9 7 10 15 14 25 12
Decrypted String: x j h k p o z m

Key: 14
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              14 14 14 14 14 14 14 14
PlainWithoutMod:  -4 8 6 9 -12 -13 -2 11
Deccrypted:       22 8 6 9 14 13 24 11
Decrypted String: w i g j o n y l

Key: 15
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              15 15 15 15 15 15 15 15
PlainWithoutMod:  -5 7 5 8 -13 -14 -3 10
Deccrypted:       21 7 5 8 13 12 23 10
Decrypted String: v h f i n m x k

Key: 16
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              16 16 16 16 16 16 16 16
PlainWithoutMod:  -6 6 4 7 -14 -15 -4 9
Deccrypted:       20 6 4 7 12 11 22 9
Decrypted String: u g e h m l w j

Key: 17
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              17 17 17 17 17 17 17 17
PlainWithoutMod:  -7 5 3 6 -15 -16 -5 8
Deccrypted:       19 5 3 6 11 10 21 8
Decrypted String: t f d g l k v i

Key: 18
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              18 18 18 18 18 18 18 18
PlainWithoutMod:  -8 4 2 5 -16 -17 -6 7
Deccrypted:       18 4 2 5 10 9 20 7
Decrypted String: s e c f k j u h

Key: 19
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              19 19 19 19 19 19 19 19
PlainWithoutMod:  -9 3 1 4 -17 -18 -7 6
Deccrypted:       17 3 1 4 9 8 19 6
Decrypted String: r d b e j i t g

Key: 20
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              20 20 20 20 20 20 20 20
PlainWithoutMod:  -10 2 0 3 -18 -19 -8 5
Deccrypted:       16 2 0 3 8 7 18 5
Decrypted String: q c a d i h s f

Key: 21
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              21 21 21 21 21 21 21 21
PlainWithoutMod:  -11 1 -1 2 -19 -20 -9 4
Deccrypted:       15 1 25 2 7 6 17 4
Decrypted String: p b z c h g r e

Key: 22
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              22 22 22 22 22 22 22 22
PlainWithoutMod:  -12 0 -2 1 -20 -21 -10 3
Deccrypted:       14 0 24 1 6 5 16 3
Decrypted String: o a y b g f q d

Key: 23
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              23 23 23 23 23 23 23 23
PlainWithoutMod:  -13 -1 -3 0 -21 -22 -11 2
Deccrypted:       13 25 23 0 5 4 15 2
Decrypted String: n z x a f e p c

Key: 24
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              24 24 24 24 24 24 24 24
PlainWithoutMod:  -14 -2 -4 -1 -22 -23 -12 1
Deccrypted:       12 24 22 25 4 3 14 1
Decrypted String: m y w z e d o b

Key: 25
Cipher Text:      k w u x c b m z
Mapping:          10 22 20 23 2 1 12 25
Key:              25 25 25 25 25 25 25 25
PlainWithoutMod:  -15 -3 -5 -2 -23 -24 -13 0
Deccrypted:       11 23 21 24 3 2 13 0
Decrypted String: l x v y d c n a
*/
