#include <stdio.h>

//scanf 대신 scanf_s를 이용하여 사용할 것!//
/* swap 함수의 선언 */
void swap(int *px, int *py);

int main(void)
// 피라미드
/*
{
	char star = '*';
	char blank = ' ';
	int i, j, b;
	for (i = 1; i <= 10; i++){
		for (b = 1; b <= 10 - i; b++){
		printf("%c", blank);
		}
		for (j = 1; j <= i * 2 - 1; j++){
		printf("%c", star);
		}
	printf("\n");
	}
return 0;
}
*/

// 숫자 피라미드
/*
{
int n;
printf("정수를 입력하세요!\n");
scanf_s("%d", &n);

// 총 n개의 층
for (int y = 1; y <= n; y++){
// y층의 공백은 n - y개
for (int s = 0; s < n - y; s++)
{
printf(" ");
}
// y층의 앞쪽은 1부터 y - 1까지
for (int d = 1; d < y; d++)
{
printf("%d", d);
}
// y층의 뒤쪽은 y부터 1까지
for (int i = y; i >= 1; i--)
{
printf("%d", i);
}
printf("\n");
}
return 0;
}
*/

// 2번
/*
{
int n = 120;
int a = 1;
int count = 0;
while (a <= n){
if (n % a == 0)
{
printf("%d\n", a);
count++;
}
a++;
}
printf("120의 약수는 총 %d 개입니다.\n", count);
return 0;
}
*/

// 3번
/*
{
	int a = 1;
	int sum = 0;

	while (a < 1000){
		if (a % 2 == 0 || a % 3 == 0){
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);
	return 0;
}
*/

//캐스트 연산자
/*
{
int inum;
double dnum;

dnum = 160.5;

printf("키는 %fcm입니다. \n", dnum);
printf("int형 변수에 대입합니다.\n");

// inum = dnum;
printf("키는 %dcm입니다. \n", (int)dnum);
return 0;
}
*/

// 삼각형 넓이 구하기
/*
{
int num1, num2;

printf("삼각형의 높이를 입력하세요. \n");
scanf_s("%d", &num1);

printf("삼각형의 밑변을 입력하세요. \n");
scanf_s("%d", &num2);

printf("삼각형의 넓이는 %f입니다.", (double)1/2 * num1 * num2);
return 0;
}
*/

// 평균 점수 구하기
/*
{
int sum = 0; // 합
int num = 0; // 평균

printf("과목 1의 점수를 입력하세요. \n");
scanf_s("%d", &num);
sum += num; // sum = sum + num; 0 + 52

// sum = 52
printf("과목 2의 점수를 입력하세요. \n");
scanf_s("%d", &num);
sum += num; // sum = 52 + 67 = 119

printf("과목 3의 점수를 입력하세요. \n");
scanf_s("%d", &num);
sum += num;

printf("과목 4의 점수를 입력하세요. \n");
scanf_s("%d", &num);
sum += num;

printf("과목 5의 점수를 입력하세요. \n");
scanf_s("%d", &num);
sum += num;

printf("5 과목의 합계 점수는 %d입니다. \n", sum);
printf("5 과목의 평균 점수는 %f입니다. \n", (double)sum/5);
return 0;  // 25
}
*/

/*
{
int a,b,c,d,e;

printf("과목 1의 점수를 입력하세요. \n");
scanf_s("%d", &a);

printf("과목 2의 점수를 입력하세요. \n");
scanf_s("%d", &b);

printf("과목 3의 점수를 입력하세요. \n");
scanf_s("%d", &c);

printf("과목 4의 점수를 입력하세요. \n");
scanf_s("%d", &d);

printf("과목 5의 점수를 입력하세요. \n");
scanf_s("%d", &e);

int sum = a+b+c+d+e;

printf("5 과목의 합계 점수는 %d입니다. \n", sum);
printf("5 과목의 평균 점수는 %f입니다. \n", (double)sum / 5);
return 0; // 21
}
*/

//if문 설명예제

// 34
/*
{
	int num;
	printf("1 ~ 9의 정수를 입력해 주세요. \n");
	scanf_s("%d", &num);

	if (num > 5) //만약에 num이 5보다 크면?
	{
		printf("입력한 정수가 5보다 큽니다.\n");
	}
	printf("입력한 정수가 5보다 작습니다\n");
	return 0;
}
*/

// 35

/*
{
int num;
printf("시험에서 몇점을 받았습니까?\n");
scanf_s("%d", &num); // %d == num

if (num >= 90)
{
	printf("오늘은 놀면 됩니다.\n");
}
else // if문 다음에 출력되도록 하는 문구
	printf("내일을 위해서 공부하십시오.\n");
return 0;
}
*/

// if ~ else if ~ else

// 36
/*
{
int num;
printf("정수를 입력하세요. \n");
scanf_s("%d", &num);

if (num == 1)
{
printf("1이 입력되었습니다.\n");
}

else if (num == 2)
{
printf("2가 입력되었습니다.\n");
}

else
printf("1이나 2를 입력하세요.\n");

return 0;
}
*/

// 38
/*
{
	char res; // 문자형 변수(char) res 선언

	printf("당신은 남성입니까? \n");
	printf("Y 또는 N을 입력하세요. \n");

	// res == getchar(); // 문자형 변수(char)에 문자 상수가 저장
	scanf_s("%c", &res);

	if (res == 'Y' || res == 'y'){
		printf("당신은 남성이군요. \n"); // Y 또는 y가 입력되면 처리
	}

	else if (res == 'N' || res == 'n'){
		printf("당신은 여성이군요. \n"); // N 또는 n가 입력되면 처리
	}

	else{
		printf("Y 또는 N을 입력하세요. \n"); // 이외의 값이 입력되면 처리
	}

	return 0;
}
*/

// 39
/*
{
	int res;
	char ans;

	printf("몇 번째를 선택할까요? \n");
	printf("정수를 입력하세요. \n");

	scanf_s("%d", &res);

	ans = (res == 1) ? 'A' : 'B';

	printf("%c 코스를 선택했습니다. \n", ans);
	return 0;
}
*/

/*
{
	int a, b;
	printf("정수를 입력하세요.\n");
	scanf_s("%d", &a);

	printf("정수를 입력하세요. \n");
	scanf_s("%d", &b);

	int c = a + b;
	printf("두 정수의 합은 %d 입니다. \n", c);

	return 0;
}
*/
/*
{
	printf("%c는(은) 문자입니다. \n", 'A');
	printf("%d는(은) 문자입니다. \n", 123);
	printf("%f는(은) 문자입니다. \n", 10.5);

	return 0;
}
*/

// 반복문 구간

//40 ~ 49

/*
{
int num = 1;
while (num) // num != 0
{
printf("정수를 입력하세요. (0이면 종료)\n");
scanf_s("%d", &num);
printf("%d가 입력되었습니다. \n", num);
}
printf("반복을 종료합니다. \n");

return 0;
}
*/

/*
{
	int num = 1;
	while (num != 0)
	{
		printf("정수를 입력하세요. (0이면 종료)\n");
		scanf_s("%d", &num);
		printf("%d가 입력되었습니다. \n", num);
	}
	printf("반복을 종료합니다. \n");
	return 0;
}
*/

/*
{
int res;
int i;
printf("몇 번째 루프를 중지할까요? (1~10)\n");
scanf("%d", &res);

for(i = 1; i <= 10; i++)
{
printf("%d번째 처리입니다. \n", i);
if(i == res)
break;
}
return 0;
}
*/

/*
{
	int res;
	int i;

	printf("몇 번째 처리를 건너뛸까요? (1~10)\n");
	scanf_s("%d", &res);

	for(i = 1; i <= 10; i++){
		if(i == res)
		continue;
		printf("%d번째 처리입니다. \n", i);
	}

	return 0;
}
*/
//----------------------------------
/*{
int num = 0;

while(num < 5) // num이 5 이상이 될때까지 반복(0~4) //
{
printf("Hello world! %d \n", num);
num++;
}
return 0;
}*/
/*
{ // 구구단 계산기 //
int dan = 0, num=1;
printf("몇 단? ");
scanf("%d", &dan);

while(num<10)
{
printf("%d * %d = %d \n", dan, num, dan*num);
num++;
}
return 0;
}*/


//[문제1] p155 //
/*
{
int num;
int cas = 0;
printf("정수를 입력하시오.\n");
scanf_s("%d", &num);

while (cas < num) // cas가 num보다 크거나 같을때 종료 //
{
printf("Hello world!\n");
cas++;
}
return 0;
}
*/
//[문제2]//
/*
{
int num;
int cas = 1;
printf("정수를 입력하시오.\n");
scanf_s("%d", &num);

while(cas <= num)
{
printf("%d * %d = %d\n", cas, num, cas*num);
cas++;
}
return 0;
}*/
//[문제4]//
/*
{
int num;
int cas = 9;
printf("정수를 입력하시오.\n");
scanf_s("%d", &num);

while(cas > 0) //cas가 0보다 작거나 같을 때 종료 //
{
printf("%d * %d = %d \n", cas, num, cas*num);
cas--;
}
return 0;
}*/

/*
{
int num = 0;
int cas = 0;
int sum = 0;
printf("정수를 입력하시오.\n");
scanf_s("%d", &num);

while(cas < 5) //0~4 총 5번 실행//
{

while (num <=0) // num이 0보다 크면 종료, 0보다 작거나 같으면 반복//
{
printf("0보다 큰 수를 입력:(%d번째):", cas+1);
scanf_s("%d", &num);
}
sum += num;
num = 0;
cas++;
}
printf("총 합 : %d", sum);
return 0;
}
*/
/*
{
	int total = 0 , num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계 : %d \n", total);
	return 0;
}*/

/*
{
	int total =0, num = 0;
	
	do
	{
		total += num;
		num = num + 2;
	} while (num <= 100);
	printf("0부터 100까지의 합 : %d\n", total);
	return 0;
}*/

/*
{
	int k = 0, sum = 0;

	do
	{
		
		k = k + 2;
		sum = sum + k;
	} while (k < 100);
	printf("0부터 100까지의 합 : %d\n", sum);
	return 0;
}
*/
/*
{
	int cur = 2;
	int is = 0;

	do{
		is = 1;
		do{
			printf("%d * %d = %d\n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
	} while (cur < 10);
	return 0;
}*/

/*{
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0부터 %d까지 덧셈결과: %d \n", num, total);
	return 0;
}*/


/*{
	int n = 0;
	int k = 0;
	int sum = 1;
	printf("정수를 입력하세요.\n");
	scanf_s("%d", &n);
	for (k = 1; k <= n; k++){
		sum = sum * k;
	}
	printf("1부터 %d까지의 팩토리얼 값: %d \n", n, sum);
	return 0;
}*/

/*
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	if (num < 0)
		printf("입력 값은 0보다 작다. \n");
	else
		printf("입력 값은 0보다 작지 않다. \n");
	return 0;
}
*/
/*{
	int opt;
	double num1, num2;
	double result;
	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("결과 : %f \n", result);
	return 0;
}*/
/*
{
	int num, abs;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num*(-1); // 참일 때 num, 거짓일 때 num*(-1)//
	printf("절댓값: %d \n", abs);
	return 0;
}*/
/*
{
	// 7과 9의 배수가 중복되는 수 63은 if문에 입력된 글이 나온다.
	int n;
	for (n = 1; n < 100; n++)
	{
		if ((n % 7 == 0) && (n % 9 == 0)) // else if문을 앞에 쓰게되면 먼저 처리됨//
			printf("%d는 7의 배수이면서 9의 배수입니다. \n", n);
		else if (n % 9 == 0)
			printf("%d는 9의 배수입니다. \n", n);
		else if (n % 7 == 0)
			printf("%d는 7의 배수입니다. \n", n);
		else
			continue;
	}
	return 0;
}
*/
/*
{
	int num1, num2;
	int result;
	printf("두개의 정수를 입력하세요. \n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
		result = num1 - num2;
	else 
		result = num2 - num1;
	
	printf("뺄셈 결과: %d \n", result);
	return 0;

}
*/
/*
{
	int num1, num2, num3;
	int result;
	printf("학생 성적을 입력하세요.\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 + num2 + num3) / 3;
	if (result >= 90)
		printf("학생의 성적은 A 입니다.\n");
	else if (result >= 80)
		printf("학생의 성적은 B 입니다.\n");
	else if (result >= 70)
		printf("학생의 성적은 C 입니다.\n");
	else if (result >= 50)
		printf("학생의 성적은 D 입니다.\n");
	else
		printf("학생의 성적은 F 입니다. \n");
	
	return 0;
}
*/
/*
{
	int num1, num2;
	int result;
	printf("두개의 정수를 입력하세요. \n");
	scanf_s("%d %d", &num1, &num2);

	result = num1 > num2 ? num1 - num2 : num2 - num1;

	printf("뺄셈 결과: %d \n", result);
	return 0;
}
*/
/*
{
	int sum = 0, num = 0;

	while (1) // 항상 참
	{
		sum += num;
		if (sum > 5000)
			break; // break문 실행! 따라서 반복문 탈출
		num++;
	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}
*/
/*
{
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue; // continue문 실행! 따라서 해당 반복문의 조건에 만족 시 실행하지 않고 다시 조건검사로 이동.
		printf("%d ", num);
	}
	printf("end! \n");
	return 0;
}
*/
/*
{
	int num1 = 1;
	int num2 = 1;
	
	for (num1 = 1; num1 < 10; num1++)
	{
		
			if (num1 <= num2)
				printf("%d * %d = %d \n", num1, num2, num1*num2);
			else
				continue;
		
	}
	return 0;
}
*/

// switch 문 예제
/*
{
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2은 TWO \n");
		break;
	case 3:
		printf("3은 THREE \n");
		break;
	case 4:
		printf("4은 FOUR \n");
		break;
	case 5:
		printf("5은 FIVE \n");
		break;
	default:
		printf("I don't know! \n");
	}
	return 0;
}
*/

/*
{
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력: ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break; 
	case 'E':
	case 'e':
			printf("Evening \n");
			break;
	}
	return 0;
}*/
/*
{
	int num;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto THREE;

ONE:
	printf("1을 입력하셨습니다! \n");
	goto END;

TWO:
	printf("2를 입력하셨습니다! \n");
	goto END;

THREE:
	printf("3 혹은 다른 값을 입력하셨군요! \n");
	
END:
	return 0;
}
*/
//-------------------------------------------------------------------//

//if-else 문 예제
/*
{
	int num;
	printf("정수를 입력하시오 : \n");
	scanf_s("%d", &num);

	if (num / 2 == 0)
		printf("%d는 짝수입니다. \n", num);
	else
		printf("%d는 홀수입니다. \n", num);
	
	return 0;
}
*/
/*{
	int num1, num2;
	printf("두 개의 정수 값을 입력하세요. \n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 == num2)
		printf("두 수의 값은 같은 값입니다. \n");
	else
		printf("%d 보다 %d이 큰 값입니다. \n", num1, num2);
	return 0;
}*/

/*{
	int num;
	printf("0부터 10 까지의 정수를 입력하세요. \n");
	scanf_s("%d", &num);

	if (0 <= num && num <= 10)
		printf("정답입니다.\n");
	else
		printf("틀렸습니다. \n");
	return 0;
}*/

// if - else문 예제
/*
{
	char c;
	printf("A~C까지의 문자를 입력하세요. \n");
	scanf_s("%c", &c);

	if (c == 'A' || c == 'B' || c == 'C')
		printf("정답입니다. \n");
	else
		printf("틀렸습니다. \n");
	return 0;
}
*/

// switch문 예제
/*
{
	int num;
	printf("성적을 입력하세요. \n");
	scanf_s("%d", &num);

	switch (num){
	case 1:
		printf("성적은 1입니다. 노력이 필요합니다. \n");
		break;
	case 2:
		printf("성적은 2입니다. 조금 더 노력하세요. \n");
		break;
	case 3:
		printf("성적은 3입니다. 잘 했습니다. \n");
		break;
	case 4:
		printf("성적은 4입니다. 매우 잘 했습니다. \n");
		break;
	case 5:
		printf("성적은 5입니다. 매우 우수합니다. \n");
		break;
	default:
		printf("성적이 제대로 입력이 안되었습니다. \n");
		break;
	}
	return 0;
}
*/

//----------------------------------------------------------------//
//파일 입출력//

/*{
	int i;
	double d;
	char str[100];

	printf("정수 값을 입력하세요. \n");
	scanf("%d", &i);

	printf("소수 값을 입력하세요. \n");
	scanf("%lf", &d);

	printf("문자열을 입력하세요. \n");
	scanf("%s", str);
		
	printf("입력한 정수 값은 %d입니다. \n", i);
	printf("입력한 소수 값은 %lf입니다. \n", d);
	printf("입력한 문자열은 %s입니다. \n", str);

	return 0;
}
*/
/*
{
	int i;

	for (i = 1; i <= 10; i++){
		printf("%3d", i); // 3자릿수 간격으로 출력
	}

	printf("\n");
	return 0;
}
*/
/*
{
	double num;

	printf("소수를 입력하세요. \n");
	scanf("%lf", &num);

	printf("소수점 이하 3자릿수로 출력하면 %.3f입니다. \n", num);
	return 0;
}
*/
/*
{
	char str[100];

	printf("문자열을 입력하세요. \n");
	scanf("%s", str);

	printf("입력한 문자열은 %s입니다. \n", str);
	return 0;
}
*/
/*
{
	char str[100];

	printf("문자열을 입력하세요. \n");
	gets(str);

	printf("입력한 문자열은 %s입니다. \n", str);
	return 0;
}
*/
/*
{
	int ch;

	printf("문자를 계속 입력하세요.\n");

	while ((ch = getchar()) != EOF){
		putchar(ch);
	}
	return 0;
}
*/
/* p407
{
	FILE *fp;

	fp = fopen("test1.txt", "w");

	if (fp == NULL){
		printf("파일을 열 수 없습니다. \n");
		return 1;
	}
	else{
		printf("파일을 열었습니다.\n");
	}

	fputs("Hello!\n", fp);
	fputs("Goodbye!\n", fp);
	printf("파일로 출력했습니다.\n");

	fclose(fp);
	printf("파일을 닫았습니다. \n");
	return 0;
}
*/
/*
{
	FILE *fp;
	int test[NUM];
	int i, j;
	fp = fopen("test2.txt", "w");

	if (fp == NULL){
		printf("파일을 열 수 없습니다. \n");
		return 1;
	}

	else{
		printf("파일을 열었습니다. \n");
	}

	printf("%d명의 점수를 입력하세요. \n", NUM);
	for (i = 0; i < NUM; i++){
		scanf("%d", &test[i]);
	}
	for (j = 0; j < NUM; j++){
		fprintf(fp, "No.%-5d%d\n", j + 1, test[j]);
	}
	printf("파일로 출력했습니다. \n");

	fclose(fp);
	printf("파일을 닫았습니다. \n");
	
	return 0;
}
*/
/*
{
	FILE *fp;
	char str1[NUM];
	char str2[NUM];

	fp = fopen("test1.txt", "r");

	if (fp == NULL){
		printf("파일을 열 수 없습니다. \n");
		return 1;
	}
	else{
		printf("파일을 열었습니다. \n");
	}

	fgets(str1, NUM - 1, fp);
	fgets(str2, NUM - 1, fp);
	
	printf("파일로 출력된 문자열은 \n");
	printf("%s", str1);
	printf("%s", str2);

	fclose(fp);
	printf("파일을 닫았습니다. \n");

	return 0;
}
*/

//--------------------------------------------------------------------------------//
/*{
	FILE * fp; 
	fopen_s(&fp, "data.txt", "wt");
	if (fp == NULL){
		puts("파일 오픈 실패!");
		return -1; // 비정상적 종료를 의미하기 위해서 -1을 반환
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp); // 스트림의 종료
	return 0;
}*/
/*
{
	int num1 = 100, num2 = 100;
	int * pnum;

	pnum = &num1;
	(*pnum) += 30;// 130
	pnum = &num2;
	(*pnum) -= 30; // 70

	printf("num1:%d, num2:%d \n", num1, num2);
	return 0;
}
*/
/*
{
	int num1 = 10, num2 = 20;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int * temp;
	(*ptr1) += 10; // 20 
	(*ptr2) -= 10; // 10
	
	temp = ptr1;
	ptr1 = ptr2;// ptr1 = 10
	ptr2 = temp; // ptr2 = 20
	printf("%d %d \n", *ptr1, *ptr2);
	return 0;
}
*/
/*
{
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름: %p \n", arr);
	printf("첫 번째 요소: %p \n", arr[0]);
	printf("두 번째 요소: %p \n", arr[1]);
	printf("세 번째 요소: %p \n", arr[2]);
	// arr= &arr[i]; // 이 문장은 컴파일 에러를 일으킨다.
	return 0;
}
*/
/*
{
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g \n", *arr1, *arr2); // 1 1.1
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]); //101 121.6
	return 0;
}
*/
/*
{
	int arr[3] = { 15, 25, 35 };
	int * ptr = &arr[0]; // int * ptr=arr; 과 동일한 문장

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	return 0;
}
*/
//p295
/*
{
	int * ptr1 = 0x0010;
	double * ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	print("%p %p \n", ptr1, ptr2);
	return 0;
}
*/

/*
{ 
	int i = 10;

	while (i >= 0){
		printf("%d \n", i);
		i--;
	}

	return 0;
}
*/

/*
{
	int num1 = 5;
	int num2 = 10;

	printf("변수 num1의 값은 %d입니다. \n", num1);
	printf("변수 num2의 값은 %d입니다. \n", num2);
	printf("변수 num1과 num2의 값을 교환합니다. \n");

	swap(&num1, &num2);

	printf("변수 num1의 값은 %d입니다. \n", num1);
	printf("변수 num2의 값은 %d입니다. \n", num2);

	return 0;
}

/* swap 함수의 정의 */
/*
void swap(int *pX, int *pY)
{
	int tmp;

	tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}
*/

{
	int i;
	int hap = 0;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 || i % 8 == 0)
			hap = hap + i;

		i++;
	}
	printf("5배수와 8배수의 합: %d \n", hap);
}