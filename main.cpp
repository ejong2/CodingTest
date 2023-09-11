#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    vector<int> result;

    for (int i = 1; i <= n; i++)
    {
        v.push_back(i); // 1 ~ n ���� ���Ϳ� �־���
    }

    k -= 1; // �ε����� 0���� �����̹Ƿ� 1�� ���� ������
    int index = 0;

    while (v.empty() == false) // v ���Ͱ� ������� ���� ������ �ݺ�
    {
        index = (index + k) % v.size(); // k��° ����� ����
        result.push_back(v[index]); // result ���Ϳ� k�� �־���
        v.erase(v.begin() + index); // k��° ����� ���Ϳ��� ����
    }

    // ���
    cout << "<";
    for (int i = 0; i < result.size() - 1; i++)
    {
        cout << result[i] << ", ";
    }
    cout << result[result.size() - 1] << ">";

    return 0;
}