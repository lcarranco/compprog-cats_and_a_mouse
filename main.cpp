#include <iostream>
#include <vector>
#include <cmath>

using namespace std;



int main() {
    int q = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    int catA = 0;
    int catB = 0;
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
        locations.push_back(0);
    }

    for (int i = 0; i < locations.size(); i += 4) {
        catA = abs(locations[i] - locations[i + 2]);
        // cout << catA << endl;
        catB = abs(locations[i + 1] - locations[i + 2]);
        // cout << catB << endl;
        if (catA == catB) {
            cout << "Mouse C" << endl;
        }
        else {
            if (catA < catB) {
                cout << "Cat A" << endl;
            }
            else {
                cout << "Cat B" << endl;
            }
        }
    }

    return 0;
}