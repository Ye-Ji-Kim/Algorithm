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

<details markdown="1"> 
<summary> 'in' 연산자 시간복잡도 </summary>

**list, tuple**
- Average: O(n)

**set, dictionary**
- Average: O(1)
- Worst: O(n)

</details>

<details markdown="1"> 
<summary> 파이썬 기본 연산자들의 시간복잡도 </summary>

**list**

                              Complexity
Operation     | Example      | Class         | Notes
--------------+--------------+---------------+-------------------------------
Index         | l[i]         | O(1)	     |
Store         | l[i] = 0     | O(1)	     |
Length        | len(l)       | O(1)	     |
Append        | l.append(5)  | O(1)	     | mostly: ICS-46 covers details
Pop	      | l.pop()      | O(1)	     | same as l.pop(-1), popping at end
Clear         | l.clear()    | O(1)	     | similar to l = []

Slice         | l[a:b]       | O(b-a)	     | l[1:5]:O(l)/l[:]:O(len(l)-0)=O(N)
Extend        | l.extend(...)| O(len(...))   | depends only on len of extension
Construction  | list(...)    | O(len(...))   | depends on length of ... iterable

check ==, !=  | l1 == l2     | O(N)          |
Insert        | l[a:b] = ... | O(N)	     | 
Delete        | del l[i]     | O(N)	     | depends on i; O(N) in worst case
Containment   | x in/not in l| O(N)	     | linearly searches list 
Copy          | l.copy()     | O(N)	     | Same as l[:] which is O(N)
Remove        | l.remove(...)| O(N)	     | 
Pop	      | l.pop(i)     | O(N)	     | O(N-i): l.pop(0):O(N) (see above)
Extreme value | min(l)/max(l)| O(N)	     | linearly searches list for value
Reverse	      | l.reverse()  | O(N)	     |
Iteration     | for v in l:  | O(N)          | Worst: no return/break in loop

Sort          | l.sort()     | O(N Log N)    | key/reverse mostly doesn't change
Multiply      | k*l          | O(k N)        | 5*l is O(N): len(l)*l is O(N**2)

**set, dictionary**
- Average: O(1)
- Worst: O(n)

</details>