#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, t;
    vector <int> d;

    cin >> t;

    for (int i = 0; i < t; i++){cin >> n; d.push_back(sqrt(n));}

    for (int i = 0; i < t; i++){cout << d[i] << endl;}

    return 0;
}
