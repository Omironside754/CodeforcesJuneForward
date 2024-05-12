#define ll long long 
#define vi vector<ll>
// Define ll as long long
#define ll long long

struct Hashing {
    string s;
    ll p = 30;
    ll m = 1e9 + 7;
    int n;
    vi hashPrefix;
    vi powerOfP;
    vi inversePowerOfP;

    Hashing(string queryString) {
        s = queryString;
        n = s.size();
        hashPrefix.resize(n);
        powerOfP.resize(n);
        inversePowerOfP.resize(n);
        calPowerAndInverseOfp();
        calHashPrefix();
    }

    void calPowerAndInverseOfp() {
        ll currentPower = 1;
        for (int i = 0; i < n; i++) {
            powerOfP[i] = currentPower;
            currentPower = (currentPower * p) % m;
        }
        inversePowerOfP[n - 1] = mminvprime(powerOfP[n - 1], m);
        for (int i = n - 2; i >= 0; i--) {
            inversePowerOfP[i] = (inversePowerOfP[i + 1] * p) % m;
        }
    }

    void calHashPrefix() {
        ll hashSoFar = 0;
        for (int i = 0; i < n; i++) {
            hashSoFar = (hashSoFar + (s[i] - 'a' + 1) * powerOfP[i]) % m;
            hashPrefix[i] = hashSoFar;
        }
    }

    ll substringHash(int l, int r) {
        ll val1 = hashPrefix[r];
        ll val2 = l > 0 ? hashPrefix[l - 1] : 0LL;
        return ((val1 - val2 + m) * inversePowerOfP[l]) % m;
    }
    ll mminvprime(ll a, ll m) {
    ll m0 = m, t, q;
    ll x0 = 0, x1 = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
        x1 += m0;
    return x1;
}

};

ll p = 30  , m = 1e9+7; 
ll hash(string s)
{
    int n = s.size(); 
    ll hashSoFar = 0 ; 
    ll powerOfP = 1 ; 
    for(int i = 0 ; i < n ;  i++)
    {
        int chValue = s[i] - 'a' + 1 ; 
        hashSoFar = (hashSoFar + chValue * powerOfP)%m ; 
        powerOfP = (PowerOfP* p)%m ; 
    }
    return hashSoFar ; 
}
void solve()
{
    string s , p ; 
    cin>>s>>p ; 
    Hashing h1  = Hashing(s);
    Hashing h2  = Hashing(p);
    int n =  s.size(), m = p.size() ; 
    for(int i = 0 ; i<=n ; i++)
    {

    }
}