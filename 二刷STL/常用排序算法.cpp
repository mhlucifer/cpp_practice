# include <iostream>
# include <vector>
# include <algorithm> // ���� sort �� shuffle
# include <random> // ���� std::default_random_engine
# include <chrono> // ���ڻ�� seed

using namespace std;

void sortVector(vector<int>& v) {
    sort(v.begin(), v.end());
}

void shuffleVector(vector<int>& v) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count(); // ���һ�� seed
    default_random_engine e(seed); // ʹ�� seed ��ʼ��һ�� random engine
    shuffle(v.begin(), v.end(), e); // ʹ�� shuffle �� random engine �����������
}

//merge()
//reverse()

int main() {
    vector<int> v = { 4, 2, 5, 1, 3 }; // ��ʼ�� vector

    // ���� sortVector ������������
    sortVector(v);

    // ��������� vector
    for (const int& i : v) {
        cout << i << " ";
    }
    cout << endl;

    // ���� shuffleVector ���������������
    shuffleVector(v);

    // ���������к�� vector
    for (const int& i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
//�����������������㷨�Ͳ�һһд��