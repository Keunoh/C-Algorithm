# C-Algorithm
C Algorithm for fun.. 👾🧠👨‍💻🦽

### ---`05 재귀 알고리즘`---
### 05-1 재귀(Recursive) 
- 어떤 사건이 자기 자신을 포함하고 다시 자기 자신을 사용하여 정의될 때
재귀적(recursive)이라고 합니다.
	
- ex) 조건 1. 1은 자연수입니다.  
조건 2. 자연수 n의 바로 다음 수도 자연수입니다.	

1. `순차곱셈(Factorial)`
	- 그 수보다 작거나 같은 모든 양의 정수의 곱이다.

	- ex) 조건 1. 0! = 1  
	조건2. n > 0 이면 n! = n * (n -1)!

2. `재귀호출(Recursive Call)`
	
	- 재귀 호출은 '함수 자신'을 호출한다고 이해하기보다는 '자기 자신과 똑같은 함수'를 호출한다고 이해하는 것이 자연스럽습니다. 만약 진짜로 함수 자신을 호출하면 끝없이 자	기 자신을 호출하는 행위를 계속할 테니까요.
	
3. `직접(direct) 재귀와 간접(indirect) 재귀`  
	![2022-10-25(direct and indirect)](https://user-images.githubusercontent.com/96904103/197571410-05cfae4c-a0f5-4334-aa2b-a52ff20c0f50.png)
	
	- 이처럼 자신과 같은 함수를 호출하면 직접재귀이고, 간접재귀는 함수 a가 함수 b를 호출하고, 다시 함수 b가 함수 a를 호출하는 구조로 이루어집니다.


4. `유클리드 호제법(Euclidean method of mutual division)`
	
	- 두 정수의 최대공약수(greatest common divisor)를 재귀적으로 구하는 방법 직사각형을 정사각형으로 완전히 채웁니다. 이렇게 만들 수 있는 정사각형의 가장 긴 변의 길이를 	 구하세요.
	
	- 이렇게 두 정수가 주어질 경우 큰 값을 작은 값으로 나누었을 때 나누어 떨어지는 가장 작은 값이 최대공약수입니다. 나누어지지 않으면 작은 값(얻은 나머지)에 대해 나누어 	떨어질 때까지 같은 과정을 재귀적으로 반복합니다.
