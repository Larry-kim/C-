#define _CRT_SECURE_NO_WARNINGS //SDL 관련 경고를 제거//
#include <stdio.h>
//보이어무어알고리즘은 문자열을 오른쪽에서 왼쪽으로 비교해 나가는 알고리즘이다.
// 가정식 pattern = na, text = assoonas이다.//

int table[500]; // 임의의 배열값 int형 변수 table배열 선언. jump의 역할은 pattern의 값을 text의 값과 일치하도록 해주는 임시 배열이다. 정보테이블 생성.
//이때 table의 배열은 문자열의 시작위치를 설정한다.
void countingTable(char pattern[], int table[]) // table함수가 pattern[na] = > an순으로 바꿔서 읽어들임
{
	int length = 0;
	int i, j; // int형 length, i, j 선언, length의 값은 0이다.
	while (pattern[length] != '\0') // pattern[length]의 값이 \0(문자열의 끝을 의미하는 문자)이 될때까지 무한 반복한다. 즉 문자열이 끝날때까지 반복한다. 
		// 이때 입력한 pattern의 길이만큼 반복한다. ex. text = assoonas, pattern = na라 가정하면 pattern[2]에서 while문은 종료된다.
	{
		length++; 
		// length는 후치 증가 연산자 이용. while문이 종료될 때까지 length의 값은 1 증가한다. ex. length는 2에서 끝난다. 이때 length의 값은 함수가 종료될 때까지 유지된다.
	}

	for (i = 0; i < 500; i++) // i = 0이고, i < 500이 될 때까지 반복한다. i는 후치 증가 연산자 이용
	{
		table[i] = length; // table의 정보는 전체 길이로 설정한다.
	}

	for (j = 0; j < length - 1; j++) // j = 0이고, j < length - 1{(length = 2) 2 - 1}이 될 때까지 반복한다. j는 후치 증가 연산자 이용
	{
		table[pattern[j]] = length - 1 - j; // table의 정보는 전체길이length - index - 1. 여기서 -1은 \0으로 인해 계산됨. 
		// table[pattern[j]] = table[pattern[0]] = 1 => table[n] = 1, table[pattern[1]] = 0 => table[a] = 0
	}
}

void BoyerMoore(char text[], char pattern[])
{
	countingTable(pattern, table); // 위의 void형 함수 countingTable를 가져온다.
	int n = 0, m = 0, i = 0;
	int	j, k; // int형 n, m, i, j, k 선언, n, m, i의 값은 0이다.

	while (text[n] != '\0') // text[n]이 \0(문자열의 끝을 의미하는 문자)가 될때까지 무한 반복한다. text[]=assoonas라 가정. text[8] = \0이기에, n의 값은 8에서 종료된다.
	{
		n++; // n은 후치 증가 연산자를 이용하여 값이 1 증가한다.
	}
	while (pattern[m] != '\0') // pattern[m]이 \0(문자열의 끝을 의미하는 문자)가 될때까지 무한 반복한다. pattern[] = na라 가정. pattern[2] = \0이기에, m의 값은 2에서 종료된다.
	{
		m++; // m은 후치 증가 연산자를 이용하여 값이 1 증가한다.
	}
	
	// text[]=assoonas, pattern[] = na 라 가정할 때 n = 8, m = 2이 된다. 이때 n, m의 값은 BoyerMoore함수가 종료될때까지 변경된 값이 유지된다. //

	while (i <= n - m) // i의 값이 n - m 보다 클때까지 반복한다. n - m = 6 이다.
	{
		j = m - 1; // j의 값은 2 - 1 = 1
		k = i + m - 1; // k = 0 + 2 - 1 = 1
		
		while (j >= 0 && pattern[j] == text[k]) // j의 값이 0보다 작고 pattern[j] 와 text[k]가 불일치할때까지 반복한다.
		{
			j--; // j는 후치 감소 연산자 이용하여 값이 1 감소된다.
			k--; // k는 후치 감소 연산자 이용하여 값이 1 감소된다.
		}

		if (j == -1) // 만약 j의 값이 -1이라면 p[2] = \0, p[1] = a, p[0] = n.
		{
			printf("%d 위치에서 매칭이 되었습니다.\n", i); // 해당 문자열을 출력한다. i = 5
		}

		i = i + table[text[k]]; //가정식에 의해 text[k] = a, table[a] = 0, i = 5
	}
}

int main(void)
{
	char text[1000]; // char형 text[1000] 선언
	char pattern[500]; // char형 pattern[500] 선언
	
	printf("텍스트를 입력하세요 : ");
	scanf("%s", &text); // 텍스트를 입력한다.

	printf("찾을 단어를 입력하세요 : ");
	scanf("%s", &pattern); // 입력한 텍스트에서 찾고 싶은 단어를 입력한다.

	BoyerMoore(text, pattern); // text와 pattern을 매개변수로 하는 BoyerMoore함수 선언.
	return 0;
	//text = banana, pattern = na라고 치게되면 2와 4의 값을 동시에 받는다.
}