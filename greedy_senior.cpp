#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll t;
    cin >> t;
 
    while(t--) {
        int x, y, price, final = 0;
        cin >> x >> y >> price;
 
        if(x == 1)  final = y - 1;
        else if( y == 1)    final = x-1;
        else final = x - 1 + (y-1)*x;
 
        if(final == price)  cout << "Yes" << endl;
        else    cout << "No" << endl;
    }
 
 
    return 0;
}
