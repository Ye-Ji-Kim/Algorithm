# Python tips

## 부동소수점 오차
대부분의 언어에서 숫자를 메모리에 이진법으로 저장하기 때문에 부동소수점은 오차를 가지고 있다.
따라서 부동소수점의 비교연산이 필요한 경우 이를 유의해야 한다.

 **해결 방법**
- decimal.Decimal
- math.fsum()
- round()
- float.as_integer_ratio()
- math.is_close()

## 시간 복잡도
## <details markdown="1"> <summary> 상세 </summary>

'in' 연산자 시간복잡도

</details>