# functools

#### reduce()
- 누적집계를 내기 위해 사용
```python
reduce(집계 함수, 순회 가능한 데이터[, 초기값])
```
집계함수는 두개의 인자를 받는다. 첫번째 인자는 누적자(accumulator), 두번째 인자는 현재값(current value)이다.
- 예시
```python
reduce(lambda acc, cur: acc + cur, num, 0) // 0은 초기값
```
