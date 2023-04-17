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

str round_keys[16];
str pt;

str convertTo64bit(str s)
{
    long i = 0;

    str result;
    while (i < s.size())
    {
        switch (s[i])
        {
        case '0':
            result += "0000";
            break;
        case '1':
            result += "0001";
            break;
        case '2':
            result += "0010";
            break;
        case '3':
            result += "0011";
            break;
        case '4':
            result += "0100";
            break;
        case '5':
            result += "0101";
            break;
        case '6':
            result += "0110";
            break;
        case '7':
            result += "0111";
            break;
        case '8':
            result += "1000";
            break;
        case '9':
            result += "1001";
            break;
        case 'A':
            result += "1010";
            break;
        case 'a':
            result += "1010";
            break;
        case 'B':
            result += "1011";
            break;
        case 'b':
            result += "1011";
            break;
        case 'c':
            result += "1100";
            break;
        case 'C':
            result += "1100";
            break;
        case 'D':
            result += "1101";
            break;
        case 'd':
            result += "1101";
            break;
        case 'E':
            result += "1110";
            break;
        case 'e':
            result += "1110";
            break;
        case 'F':
            result += "1111";
            break;
        case 'f':
            result += "1111";
            break;
        }
        i++;
    }
    int len = result.sz;
    str app;
    forr(i, 64 - len)
    {
        app += '0';
    }
    app.append(result);
    rtn app;
}

str convertDecimalToBinary(int decimal)
{
    str binary;
    while (decimal != 0)
    {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal = decimal / 2;
    }
    while (binary.length() < 4)
    {
        binary = "0" + binary;
    }
    return binary;
}

unordered_map<str, char> createMap(unordered_map<str, char> um)
{
    um["0000"] = '0';
    um["0001"] = '1';
    um["0010"] = '2';
    um["0011"] = '3';
    um["0100"] = '4';
    um["0101"] = '5';
    um["0110"] = '6';
    um["0111"] = '7';
    um["1000"] = '8';
    um["1001"] = '9';
    um["1010"] = 'A';
    um["1011"] = 'B';
    um["1100"] = 'C';
    um["1101"] = 'D';
    um["1110"] = 'E';
    um["1111"] = 'F';
    rtn um;
}

str convertBinToHex(str bin)
{
    int l = bin.size();
    unordered_map<string, char> bin_hex_map;
    bin_hex_map = createMap(bin_hex_map);
    int i = 0;
    str hex = "";
    while (1)
    {
        hex += bin_hex_map[bin.substr(i, 4)];
        i += 4;
        if (i == bin.size())
            brk;
    }
    rtn hex;
}

int convertBinaryToDecimal(str binary)
{
    int decimal = 0;
    int counter = 0;
    int size = binary.length();
    for (int i = size - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, counter);
        }
        counter++;
    }
    rtn decimal;
}

str shift_left_once(str key_chunk)
{
    str shifted = "";
    for (int i = 1; i < 28; i++)
    {
        shifted += key_chunk[i];
    }
    shifted += key_chunk[0];
    rtn shifted;
}

str shift_left_twice(str key_chunk)
{
    str shifted = "";
    forr(i, 2)
    {
        forl(j, 1, 27)
        {
            shifted += key_chunk[j];
        }
        shifted += key_chunk[0];
        key_chunk = shifted;
        shifted = "";
    }
    rtn key_chunk;
}

str Xor(str a, str b)
{
    str result = "";
    int size = b.size();
    forr(i, size)
    {
        if (a[i] != b[i])
        {
            result += "1";
        }
        else
        {
            result += "0";
        }
    }
    rtn result;
}

void generate_keys(str key)
{
    int pc1[56] = {
        57, 49, 41, 33, 25, 17, 9,
        1, 58, 50, 42, 34, 26, 18,
        10, 2, 59, 51, 43, 35, 27,
        19, 11, 3, 60, 52, 44, 36,
        63, 55, 47, 39, 31, 23, 15,
        7, 62, 54, 46, 38, 30, 22,
        14, 6, 61, 53, 45, 37, 29,
        21, 13, 5, 28, 20, 12, 4};
    int pc2[48] = {
        14, 17, 11, 24, 1, 5,
        3, 28, 15, 6, 21, 10,
        23, 19, 12, 4, 26, 8,
        16, 7, 27, 20, 13, 2,
        41, 52, 31, 37, 47, 55,
        30, 40, 51, 45, 33, 48,
        44, 49, 39, 56, 34, 53,
        46, 42, 50, 36, 29, 32};
    str perm_key = "";
    forr(i, 56)
    {
        perm_key += key[pc1[i] - 1];
    }
    str left = perm_key.substr(0, 28);
    str right = perm_key.substr(28, 28);
    forr(i, 16)
    {
        // 3.1. For rounds 1, 2, 9, 16 the key_chunks are shifted by one.
        if (i == 0 || i == 1 || i == 8 || i == 15)
        {
            left = shift_left_once(left);
            right = shift_left_once(right);
        }

        // 3.2. For other rounds, the key_chunks are shifted by two
        else
        {
            left = shift_left_twice(left);
            right = shift_left_twice(right);
        }

        // Combining the two chunks
        str combined_key = left + right;
        str round_key = "";

        // Finally, using the PC2 table to transpose the key bits
        forr(i, 48)
        {
            round_key += combined_key[pc2[i] - 1];
        }
        round_keys[i] = round_key;
    }
}

string DES()
{
    int initial_permutation[64] = {
        58, 50, 42, 34, 26, 18, 10, 2,
        60, 52, 44, 36, 28, 20, 12, 4,
        62, 54, 46, 38, 30, 22, 14, 6,
        64, 56, 48, 40, 32, 24, 16, 8,
        57, 49, 41, 33, 25, 17, 9, 1,
        59, 51, 43, 35, 27, 19, 11, 3,
        61, 53, 45, 37, 29, 21, 13, 5,
        63, 55, 47, 39, 31, 23, 15, 7};
    int expansion_table[48] = {
        32, 1, 2, 3, 4, 5, 4, 5,
        6, 7, 8, 9, 8, 9, 10, 11,
        12, 13, 12, 13, 14, 15, 16, 17,
        16, 17, 18, 19, 20, 21, 20, 21,
        22, 23, 24, 25, 24, 25, 26, 27,
        28, 29, 28, 29, 30, 31, 32, 1};
    int substition_boxes[8][4][16] =
        {{14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7,
          0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
          4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0,
          15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13},
         {15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10,
          3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
          0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15,
          13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9},
         {10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8,
          13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
          13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7,
          1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12},
         {7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15,
          13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
          10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4,
          3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14},
         {2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9,
          14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,
          4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14,
          11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3},
         {12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11,
          10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,
          9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6,
          4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13},
         {4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1,
          13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
          1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2,
          6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12},
         {13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7,
          1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,
          7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8,
          2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11}};
    int permutation_tab[32] = {
        16, 7, 20, 21, 29, 12, 28, 17,
        1, 15, 23, 26, 5, 18, 31, 10,
        2, 8, 24, 14, 32, 27, 3, 9,
        19, 13, 30, 6, 22, 11, 4, 25};
    int inverse_permutation[64] = {
        40, 8, 48, 16, 56, 24, 64, 32,
        39, 7, 47, 15, 55, 23, 63, 31,
        38, 6, 46, 14, 54, 22, 62, 30,
        37, 5, 45, 13, 53, 21, 61, 29,
        36, 4, 44, 12, 52, 20, 60, 28,
        35, 3, 43, 11, 51, 19, 59, 27,
        34, 2, 42, 10, 50, 18, 58, 26,
        33, 1, 41, 9, 49, 17, 57, 25};
    str perm = "";
    forr(i, 64)
    {
        perm += pt[initial_permutation[i] - 1];
    }
    cout << "After Initial permutation: " << convertBinToHex(perm) << endl;
    str left = perm.substr(0, 32);
    str right = perm.substr(32, 32);
    cout << endl;
    cout << "\t\t"
         << "Left"
         << "\t\t"
         << "Right" << endl;
    for (int i = 0; i < 16; i++)
    {

        str right_expanded = "";
        for (int i = 0; i < 48; i++)
        {
            right_expanded += right[expansion_table[i] - 1];
        };

        str xored = Xor(round_keys[i], right_expanded);

        str res = "";
        for (int i = 0; i < 8; i++)
        {
            str row1 = xored.substr(i * 6, 1) + xored.substr(i * 6 + 5, 1);
            int row = convertBinaryToDecimal(row1);
            str col1 = xored.substr(i * 6 + 1, 1) + xored.substr(i * 6 + 2, 1) + xored.substr(i * 6 + 3, 1) + xored.substr(i * 6 + 4, 1);
            ;
            int col = convertBinaryToDecimal(col1);
            int val = substition_boxes[i][row][col];
            res += convertDecimalToBinary(val);
        }
        str perm2 = "";
        for (int i = 0; i < 32; i++)
        {
            perm2 += res[permutation_tab[i] - 1];
        }

        xored = Xor(perm2, left);
        left = xored;
        if (i < 15)
        {
            str temp = right;
            right = xored;
            left = temp;
        }
        cout << "After round " << i << ":\t" << convertBinToHex(left) << "\t" << convertBinToHex(right) << endl;
    }

    str combined_text = left + right;
    str ciphertext = "";
    for (int i = 0; i < 64; i++)
    {
        ciphertext += combined_text[inverse_permutation[i] - 1];
    }
    cout << "After Final permutation: ";
    rtn ciphertext;
}
int main()
{
    str key = "1010101010111011000010010001100000100111001101101100110011011101";
    generate_keys(key);
    str inputInHex;
    cout << "Enter message in Hexadecimal: ";
    cin >> inputInHex;
    while (inputInHex.length() > 16)
    {
        cout << "Number must be 64 bit long";
        cout << "Enter message in Hexadecimal: ";
        cin >> inputInHex;
    }
    str apt = convertTo64bit(inputInHex);
    pt = apt;

    cout << endl
         << "Encryption: " << endl;
    str ct = DES();
    cout << "Ciphertext: " << convertBinToHex(ct) << endl
         << endl
         << endl;

    cout << endl
         << "Decryption: " << endl;
    int i = 15;
    int j = 0;
    while (i > j)
    {
        str temp = round_keys[i];
        round_keys[i] = round_keys[j];
        round_keys[j] = temp;
        i--;
        j++;
    }
    pt = ct;
    str decrypted = DES();
    cout << "Decrypted text:" << convertBinToHex(decrypted) << endl;

    if (decrypted == apt)
    {
        cout << "Plain text encrypted and decrypted successfully." << endl;
    }
    return 0;
}
