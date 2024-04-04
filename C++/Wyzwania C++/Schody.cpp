using namespace std;

int downStairs( const int T[], int n) {
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        v.push_back(T[i]);
    }
    v.push_back(0);
    
    for(int i = (n - 2); i >= 0; i--)
    {
        v[i] += max(v[i + 1],  v[i + 2]);
    }
    
    return max(v[0], v[1]);
}
