#include <multiset>

//차집합 구현 예제
std::multiset<int> v1{1, 2, 5, 5, 5, 9};
std::multiset<int> v2{2, 5, 7};
std::multiset<int> diff;

std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
                    std::inserter(diff, diff.begin()));
