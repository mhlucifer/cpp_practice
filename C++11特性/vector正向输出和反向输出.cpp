#include <iostream>
#include<vector>
// write your code here......

using namespace std;

int main() {
    vector<int> v(5);
    for (int &i : v)
    {
        cin >> i;
    }
    vector<int>::iterator t;
    for (t = v.begin();t!= v.end();t++)
    {
        cout << *t << " ";
    }
    vector<int>::reverse_iterator r;
    for (r = v.rbegin(); r != v.rend(); r++)
    {
        cout << *r << " ";
    }
    // write your code here......


    return 0;
}