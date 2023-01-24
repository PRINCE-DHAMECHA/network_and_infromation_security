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
typedef map<char, char> mpcc;
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

map<char, pair<int, int>> generateMatrix(str k)
{
    vi key;
    for (auto i : k)
    {
        key.pb(int(i) - 97);
    }
    vb checks(25, false);
    int i = 0, j = 0;
    map<char, pair<int, int>> mat;
    for (auto k : key)
    {
        if (k == 8 || k == 9)
        {
            mat[char(8 + 65)] = {i, j};
            mat[char(9 + 65)] = {i, j};
            checks[8] = true;
            checks[9] = true;
        }
        else
        {
            mat[char(k + 65)] = {i, j};
            checks[k] = true;
        }
        if (j == 4)
        {
            i++;
            j = 0;
        }
        else
        {
            j++;
        }
    }
    forr(m, 26)
    {
        if (checks[m])
        {
            cnt;
        }
        if (m == 8 || m == 9)
        {
            mat[char(8 + 65)] = {i, j};
            mat[char(9 + 65)] = {i, j};
            checks[8] = true;
            checks[9] = true;
        }
        else
        {
            mat[char(m + 65)] = {i, j};
            checks[m] = true;
        }
        if (j == 4)
        {
            i++;
            j = 0;
        }
        else
        {
            j++;
        }
    }
    rtn mat;
}

map<pair<int, int>, char> reverseMatrix(map<char, pair<int, int>> mat)
{
    map<pair<int, int>, char> matRev;
    for (auto i : mat)
    {
        matRev[i.ss] = i.ff;
    }
    rtn matRev;
}

str playfairEnc(str plainStr, map<char, pair<int, int>> mat, map<pair<int, int>, char> matRev)
{
    str newPlain = "";
    for (int i = 0; i < plainStr.sz;)
    {
        if (i == plainStr.sz - 1)
        {
            newPlain += plainStr[i];
            newPlain += 'x';
            i++;
        }
        else if (plainStr[i] == plainStr[i + 1])
        {
            newPlain += plainStr[i];
            newPlain += 'x';
            i++;
        }
        else
        {
            newPlain += plainStr[i];
            newPlain += plainStr[i + 1];
            i += 2;
        }
    }
    cout << "New Plantext After Adding 'x' if necessary : " << newPlain << endl;
    vi plain;
    for (auto i : newPlain)
    {
        plain.pb(int(i) - 97);
    }
    str cipher;
    for (int i = 0; i < plain.sz; i += 2)
    {
        pii p1 = mat[char(plain[i] + 65)];
        pii p2 = mat[char(plain[i + 1] + 65)];
        if (p1.ff == p2.ff)
        {
            cipher += matRev[{(p1.ff), (p1.ss + 1) % 5}];
            cipher += matRev[{(p2.ff), (p2.ss + 1) % 5}];
        }
        else if (p1.ss == p2.ss)
        {
            cipher += matRev[{(p1.ff + 1) % 5, (p1.ss)}];
            cipher += matRev[{(p2.ff + 1) % 5, (p2.ss)}];
        }
        else
        {
            cipher += matRev[{(p1.ff), (p2.ss)}];
            cipher += matRev[{(p2.ff), (p1.ss)}];
        }
    }
    rtn cipher;
}

str playfairDec(str plainStr, map<char, pair<int, int>> mat, map<pair<int, int>, char> matRev)
{
    vi plain;
    for (auto i : plainStr)
    {
        plain.pb(int(i) - 97);
    }
    str cipher = "";
    for (int i = 0; i < plain.sz; i += 2)
    {
        pii p1 = mat[char(plain[i] + 65)];
        pii p2 = mat[char(plain[i + 1] + 65)];
        if (p1.ff == p2.ff)
        {
            bool flag1 = true, flag2 = true;
            if (p1.ss <= 0)
            {
                flag1 = false;
            }
            else if (p2.ss <= 0)
            {
                flag2 = false;
            }
            if (flag1)
                cipher += matRev[{(p1.ff), (p1.ss - 1)}];
            else
                cipher += matRev[{(p1.ff), (p1.ss + 4)}];
            if (flag2)
                cipher += matRev[{(p2.ff), (p2.ss - 1)}];
            else if (flag1)
                cipher += matRev[{(p2.ff), (p2.ss + 4)}];
        }
        else if (p1.ss == p2.ss)
        {
            bool flag1 = true, flag2 = true;
            if (p1.ff <= 0)
            {
                flag1 = false;
            }
            if (p2.ff <= 0)
            {
                flag2 = false;
            }
            if (flag1)
                cipher += matRev[{(p1.ff - 1), (p1.ss)}];
            else
                cipher += matRev[{(p1.ff + 4), (p1.ss)}];
            if (flag1)
                cipher += matRev[{(p2.ff - 1), (p2.ss)}];
            else
                cipher += matRev[{(p2.ff + 4), (p2.ss)}];
        }
        else
        {
            cipher += matRev[{(p1.ff), (p2.ss)}];
            cipher += matRev[{(p2.ff), (p1.ss)}];
        }
    }
    rtn cipher;
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;
    map<char, pair<int, int>> mat = generateMatrix("network");
    map<pair<int, int>, char> matRev = reverseMatrix(mat);
    int i = 0;
    outl("");
    outl("Matrix: ");
    outl("");
    cout << "  0 1 2 3 4";
    for (auto j : matRev)
    {
        if (i % 5 == 0)
        {
            outl("");
            cout << i / 5 << " ";
        }
        i++;
        cout << j.ss << " ";
    }
    outl("");
    outl("");
    str encrypt = playfairEnc("prince", mat, matRev);
    cout << "encryption: " << encrypt << endl;
    transform(encrypt.begin(), encrypt.end(), encrypt.begin(), ::tolower);
    str decrypt = playfairDec(encrypt, mat, matRev);
    cout << "Decryption: " << decrypt << endl;
    outl("");
    encrypt = playfairEnc("hello", mat, matRev);
    cout << "encryption: " << encrypt << endl;
    transform(encrypt.begin(), encrypt.end(), encrypt.begin(), ::tolower);
    decrypt = playfairDec(encrypt, mat, matRev);
    cout << "Decryption: " << decrypt << endl;
    rtn 0;
}

//~ Output:

// Matrix:
//
//   0 1 2 3 4
// 0 N E T W O
// 1 R K A B C
// 2 D F G H J
// 3 L M P Q S
// 4 U V X Y Z

// New Plantext After Adding 'x' if necessary : prince
// encryption: LADOKO
// Decryption: PRJNCE

// New Plantext After Adding 'x' if necessary : helxlo
// encryption: FWPUSN
// Decryption: HELXLO