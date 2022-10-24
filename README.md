# C-Algorithm
C Algorithm for fun.. 👾🧠👨‍💻🦽

1. `재귀(Recursive)`
	* 어떤 사건이 자기 자신을 포함하고 다시 자기 자신을 사용하여 정의될 때
	재귀적(recursive)이라고 합니다.
	
	* ex) 조건 1. 1은 자연수입니다.  
	조건 2. 자연수 n의 바로 다음 수도 자연수입니다.	

	* `순차곱셈(Factorial)`
	- 그 수보다 작거나 같은 모든 양의 정수의 곱이다.

	- ex) 조건 1. 0! = 1
	조건2. n > 0 이면 n! = n * (n -1)!

	* `재귀호출(Recursive Call)`
	
	- 재귀 호출은 '함수 자신'을 호출한다고 이해하기보다는 '자기 자신과
	똑같은 함수'를 호출한다고 이해하는 것이 자연스럽습니다. 만약 진짜로
	함수 자신을 호출하면 끝없이 자기 자신을 호출하는 행위를 계속할 테니까요.
	
	* `직접(direct) 재귀와 간접(indirect) 재귀`
	(그림)
	
	- 이처럼 자신과 같은 함수를 호출하면 직접재귀이고, 간접재귀는 함수 a가
	함수 b를 호출하고, 다시 함수 b가 함수 a를 호출하는 구조로 이루어집니다.
