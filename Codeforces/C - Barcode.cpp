    #include <iostream>
    #include <cstring>
    #include <cstdio>
    #include <cmath>
    #include <algorithm>
    #include <vector>
    #include <set>
    #include <map>
     
    #define mp make_pair
    #define x first
    #define y second
    #define pb push_back
    using namespace std;
     
    int n, m, x, y, a[1005][1005], f[1005][1005];
     
    int main() {
    	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    	cin >> n >> m >> x >> y;
    	for (int i = 1; i <= n; ++i) 
    		for (int j = 1; j <= m; ++j) {
    			char c;
    			cin >> c;
    			a[i][j] = c == '#';
    			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
    		}
        
    	for (int i = 1; i <= m; ++i) {
    		f[i][0] = 1e9;
    		f[i][1] = 1e9;
    		for (int j = x; j <= y; ++j) {
                if(j > i) break;
    			int t = a[n][i] - a[n][i - j];
    			f[i][0] = min(f[i][0], f[i - j][1] + t);
    			f[i][1] = min(f[i][1], f[i - j][0] + j * n - t);
    		}
    	}	 
    	
    	cout << min(f[m][0], f[m][1]);
    	return 0;
    }
