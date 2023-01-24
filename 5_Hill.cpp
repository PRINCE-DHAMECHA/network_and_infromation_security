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

str adjustStrToKey(str s, vii &k)
{
    int matrixCol = k.sz;
    while (s.sz % matrixCol != 0)
    {
        s += "z";
    }
    rtn s;
}

vii strToMat(str s, vii k)
{
    int matrixCol = k.sz;
    int matrixRow = s.sz / matrixCol;
    vii matrix(matrixRow, vi(matrixCol, 0));
    forr(i, s.sz)
    {
        matrix[i / matrixCol][i % matrixCol] = int(s[i]) - 97;
    }
    rtn matrix;
}

str matTostr(vii mat)
{
    str s = "";
    for (auto i : mat)
    {
        for (auto j : i)
        {
            s += char(j + 97);
        }
    }
    return s;
}

vii multiply(vii &m1, vii &m2)
{
    int x, i, j;
    vii res(m1.sz, vi(m2[0].sz, 0));
    for (i = 0; i < m1.sz; i++)
    {
        for (j = 0; j < m2[0].sz; j++)
        {
            res[i][j] = 0;
            for (x = 0; x < m1[0].sz; x++)
            {
                res[i][j] += m1[i][x] * m2[x][j];
            }
        }
    }
    rtn res;
}

int intMod26(int n)
{
    if (n >= 0)
    {
        n = n % 26;
        rtn n;
    }
    int mod = -n;
    mod = mod % 26;
    mod = (26 - mod) % 26;
    rtn mod;
}

vii matrixMod26(vii &v)
{
    vii res(v.sz, vi(v[0].sz, 0));
    forr(i, v.sz)
    {
        forr(j, v[0].sz)
        {
            res[i][j] = intMod26(v[i][j]);
        }
    }
    rtn res;
}

int det2x2(vii &v)
{
    int tot = 0;
    tot += v[0][0] * v[1][1];
    tot -= v[0][1] * v[1][0];
    return tot;
}

int det3X3(vii &v)
{
    vii v1 = {{v[1][0], v[1][1]}, {v[2][0], v[2][1]}};
    vii v2 = {{v[1][0], v[1][2]}, {v[2][0], v[2][2]}};
    vii v3 = {{v[1][1], v[1][2]}, {v[2][1], v[2][2]}};
    int tot = 0;
    tot += v[0][0] * det2x2(v3);
    tot -= v[0][1] * det2x2(v2);
    tot += v[0][2] * det2x2(v1);
    return tot;
}

int detnXn(vii &v)
{
    if (v.sz == 1)
    {
        return v[0][0];
    }
    int tot = 0;
    for (int i = 0; i < v.sz; i++)
    {
        vii temp;
        for (int j = 1; j < v.sz; j++)
        {
            vi temp2;
            for (int k = 0; k < v.sz; k++)
            {
                if (k != i)
                {
                    temp2.pb(v[j][k]);
                }
            }
            temp.pb(temp2);
        }
        if (i % 2)
        {
            tot -= v[0][i] * detnXn(temp);
        }
        else
        {
            tot += v[0][i] * detnXn(temp);
        }
    }
    return tot;
}

vii cofactorOfMatrix(vii &v)
{
    vii res(v.sz, vi(v[0].sz, 0));
    for (int p = 0; p < v.sz; p++)
    {
        for (int i = 0; i < v.sz; i++)
        {
            vii temp;
            for (int j = 0; j < v.sz; j++)
            {
                vi temp2;
                for (int k = 0; k < v.sz; k++)
                {
                    if (k != i && j != p)
                    {
                        temp2.pb(v[j][k]);
                    }
                }
                if (temp2.sz)
                {
                    temp.pb(temp2);
                }
            }
            int n = i + p;
            if (n % 2)
            {
                res[p][i] = -detnXn(temp);
            }
            else
            {
                res[p][i] = detnXn(temp);
            }
        }
    }
    return res;
}

vii transposeOfMatrix(vii cof)
{
    vii temp(cof.sz, vi(cof.sz));
    forr(i, cof.sz)
    {
        forr(j, cof.sz)
        {
            temp[j][i] = cof[i][j];
        }
    }
    return temp;
}

vii adjointOfMatrix(vii &mat)
{
    vii cofactorMatrix = cofactorOfMatrix(mat);
    vii transposeMatrix = transposeOfMatrix(cofactorMatrix);
    rtn transposeMatrix;
}

vii intMultiplicationOfMatrix(vii matrix, int k)
{
    vii res(matrix.sz, vi(matrix[0].sz, 0));
    forr(i, matrix.sz)
    {
        forr(j, matrix[0].sz)
        {
            res[i][j] = k * matrix[i][j];
        }
    }
    rtn res;
}

vii inverseOfMatrix(vii matrix)
{
    vii adjointMatrix = adjointOfMatrix(matrix);
    int modOfMatrix = detnXn(matrix);
    int inverseOfDeterminant = euclidiun(26, modOfMatrix, false, false);
    inverseOfDeterminant = intMod26(inverseOfDeterminant);
    vii inverseMatrix = intMultiplicationOfMatrix(adjointMatrix, inverseOfDeterminant);
    inverseMatrix = matrixMod26(inverseMatrix);
    rtn inverseMatrix;
}

string hillEncryption(string plain, vii k)
{
    str adjustedPlain = adjustStrToKey(plain, k);
    vii plainMatrix = strToMat(adjustedPlain, k);
    vii cipher = multiply(plainMatrix, k);
    vii cipherAfterMod = matrixMod26(cipher);
    str cipherStr = matTostr(cipherAfterMod);
    outl("");
    cout << "Plain Text: " << plain << endl;
    outl("");
    cout << "Adjusted Plain Text: " << adjustedPlain << endl;
    outl("");
    outl("Plain Text Matrix:");
    for (auto i : plainMatrix)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(2) << j << " ";
        }
        outl("");
    }
    outl("");
    outl("Key Matrix:");
    for (auto i : k)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(2) << j << " ";
        }
        outl("");
    }
    outl("");
    outl("Cipher Matrix Before Mod:");
    for (auto i : cipher)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(4) << j << " ";
        }
        outl("");
    }
    outl("");
    outl("Cipher Matrix After Mod:");
    for (auto i : cipherAfterMod)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(2) << j << " ";
        }
        outl("");
    }
    outl("");
    cout << "Encrypted Text: " << cipherStr << endl;
    outl("");
    return cipherStr;
}

string hillDecryption(string cipher, vii k)
{
    vii inverseKey = inverseOfMatrix(k);
    str adjustedCipher = adjustStrToKey(cipher, inverseKey);
    vii cipherMatrix = strToMat(adjustedCipher, inverseKey);
    vii plain = multiply(cipherMatrix, inverseKey);
    vii plainAfterMod = matrixMod26(plain);
    str plainStr = matTostr(plainAfterMod);
    outl("");
    cout << "Cipher Text: " << cipher << endl;
    outl("");
    cout << "Adjusted Cipher Text: " << adjustedCipher << endl;
    outl("");
    outl("Cipher Text Matrix:");
    for (auto i : cipherMatrix)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(2) << j << " ";
        }
        outl("");
    }
    outl("");
    outl("Inverse Matrix Of Key:");
    for (auto i : inverseKey)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(2) << j << " ";
        }
        outl("");
    }
    outl("");
    outl("Plain Matrix Before Mod:");
    for (auto i : plain)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(4) << j << " ";
        }
        outl("");
    }
    outl("");
    outl("Plain Matrix After Mod:");
    for (auto i : plainAfterMod)
    {
        for (auto j : i)
        {
            std::cout << std::setfill('0') << std::setw(2) << j << " ";
        }
        outl("");
    }
    outl("");
    cout << "Decrypted Text: " << plainStr << endl;
    outl("");
    return plainStr;
}

int main()
{
    __DONT_RAISE_YOUR_VOICE__IMPROVE_YOUR_ARGUMENT__$;
    vii k1 = {{11, 13},
              {3, 8}};
    vii k2 = {{9, 7, 13},
              {4, 7, 5},
              {3, 21, 8}};
    vii k3 = {{9, 7, 11, 13},
              {4, 7, 5, 6},
              {2, 21, 14, 9},
              {3, 23, 21, 8}};
    str plain = "codeisreadybyprince";
    string encrypt = hillEncryption(plain, k1);
    string decrypt = hillDecryption(encrypt, k1);
    outl("");
    cout << "Plain Text: " << plain << endl;
    cout << "Encrypted Text: " << encrypt << endl;
    cout << "Decrypted Text: " << decrypt << endl;
    plain = "codeisready";
    encrypt = hillEncryption(plain, k2);
    decrypt = hillDecryption(encrypt, k2);
    outl("");
    cout << "Plain Text: " << plain << endl;
    cout << "Encrypted Text: " << encrypt << endl;
    cout << "Decrypted Text: " << decrypt << endl;
    plain = "codeisdonebyprince";
    encrypt = hillEncryption(plain, k3);
    decrypt = hillDecryption(encrypt, k3);
    outl("");
    cout << "Plain Text: " << plain << endl;
    cout << "Encrypted Text: " << encrypt << endl;
    cout << "Decrypted Text: " << decrypt << endl;
    rtn 0;
}
