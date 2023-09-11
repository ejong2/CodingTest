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
        v.push_back(i); // 1 ~ n 까지 벡터에 넣어줌
    }

    k -= 1; // 인덱스는 0부터 시작이므로 1을 빼서 맞춰줌
    int index = 0;

    while (v.empty() == false) // v 벡터가 비어있지 않을 때까지 반복
    {
        index = (index + k) % v.size(); // k번째 사람을 구함
        result.push_back(v[index]); // result 벡터에 k를 넣어줌
        v.erase(v.begin() + index); // k번째 사람을 벡터에서 제거
    }

    // 출력
    cout << "<";
    for (int i = 0; i < result.size() - 1; i++)
    {
        cout << result[i] << ", ";
    }
    cout << result[result.size() - 1] << ">";

    return 0;
}