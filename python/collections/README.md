# collections 모듈
## Counter
key는 원소, value는 해당 원소의 개수인 사전형식의 Counter 객체 반환

## deque
double-ended queue의 약자로 데이터를 양방향에서 추가하고 제거할 수 있는 자료구조
list를 이용하여 queue를 구현할 수 있지만 이 경우 연산의 시간복잡도는 O(N)이기 때문에 성능이 좋지 않다.
이에 비해, deque는 내부적으로 doubly linked list로 구현되어 있어 연산의 시간복잡도가 O(1)이다.

**메소드**
- popleft()
- append()
- appendleft()
- pop()