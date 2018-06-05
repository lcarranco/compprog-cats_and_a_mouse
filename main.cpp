#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    vector<int> locations;

    cin >> q;
    // cout << q << endl;

    for (int i = 0; i < q; ++i) {
        cin >> x;
        // cout << x << endl;
        locations.push_back(x);
        cin >> y;
        // cout << y << endl;
        locations.push_back(y);
        cin >> z;
        // cout << z << endl;
        locations.push_back(z);
    }

    // for (int i = 0; i < locations.size(); ++i) {
    //     cout << locations[i] << ' ';
    // }
    

    return 0;
}