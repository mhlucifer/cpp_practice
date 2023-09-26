# include <iostream>
# include <vector>
# include <algorithm> // 包含 sort 和 shuffle
# include <random> // 用于 std::default_random_engine
# include <chrono> // 用于获得 seed

using namespace std;

void sortVector(vector<int>& v) {
    sort(v.begin(), v.end());
}

void shuffleVector(vector<int>& v) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count(); // 获得一个 seed
    default_random_engine e(seed); // 使用 seed 初始化一个 random engine
    shuffle(v.begin(), v.end(), e); // 使用 shuffle 和 random engine 进行随机排列
}

//merge()
//reverse()

int main() {
    vector<int> v = { 4, 2, 5, 1, 3 }; // 初始化 vector

    // 调用 sortVector 函数进行排序
    sortVector(v);

    // 输出排序后的 vector
    for (const int& i : v) {
        cout << i << " ";
    }
    cout << endl;

    // 调用 shuffleVector 函数进行随机排列
    shuffleVector(v);

    // 输出随机排列后的 vector
    for (const int& i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
//拷贝，算数，集合算法就不一一写了