#include <stdio.h>

//scanf ��� scanf_s�� �̿��Ͽ� ����� ��!//
/* swap �Լ��� ���� */
void swap(int *px, int *py);

int main(void)
// �Ƕ�̵�
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

// ���� �Ƕ�̵�
/*
{
int n;
printf("������ �Է��ϼ���!\n");
scanf_s("%d", &n);

// �� n���� ��
for (int y = 1; y <= n; y++){
// y���� ������ n - y��
for (int s = 0; s < n - y; s++)
{
printf(" ");
}
// y���� ������ 1���� y - 1����
for (int d = 1; d < y; d++)
{
printf("%d", d);
}
// y���� ������ y���� 1����
for (int i = y; i >= 1; i--)
{
printf("%d", i);
}
printf("\n");
}
return 0;
}
*/

// 2��
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
printf("120�� ����� �� %d ���Դϴ�.\n", count);
return 0;
}
*/

// 3��
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

//ĳ��Ʈ ������
/*
{
int inum;
double dnum;

dnum = 160.5;

printf("Ű�� %fcm�Դϴ�. \n", dnum);
printf("int�� ������ �����մϴ�.\n");

// inum = dnum;
printf("Ű�� %dcm�Դϴ�. \n", (int)dnum);
return 0;
}
*/

// �ﰢ�� ���� ���ϱ�
/*
{
int num1, num2;

printf("�ﰢ���� ���̸� �Է��ϼ���. \n");
scanf_s("%d", &num1);

printf("�ﰢ���� �غ��� �Է��ϼ���. \n");
scanf_s("%d", &num2);

printf("�ﰢ���� ���̴� %f�Դϴ�.", (double)1/2 * num1 * num2);
return 0;
}
*/

// ��� ���� ���ϱ�
/*
{
int sum = 0; // ��
int num = 0; // ���

printf("���� 1�� ������ �Է��ϼ���. \n");
scanf_s("%d", &num);
sum += num; // sum = sum + num; 0 + 52

// sum = 52
printf("���� 2�� ������ �Է��ϼ���. \n");
scanf_s("%d", &num);
sum += num; // sum = 52 + 67 = 119

printf("���� 3�� ������ �Է��ϼ���. \n");
scanf_s("%d", &num);
sum += num;

printf("���� 4�� ������ �Է��ϼ���. \n");
scanf_s("%d", &num);
sum += num;

printf("���� 5�� ������ �Է��ϼ���. \n");
scanf_s("%d", &num);
sum += num;

printf("5 ������ �հ� ������ %d�Դϴ�. \n", sum);
printf("5 ������ ��� ������ %f�Դϴ�. \n", (double)sum/5);
return 0;  // 25
}
*/

/*
{
int a,b,c,d,e;

printf("���� 1�� ������ �Է��ϼ���. \n");
scanf_s("%d", &a);

printf("���� 2�� ������ �Է��ϼ���. \n");
scanf_s("%d", &b);

printf("���� 3�� ������ �Է��ϼ���. \n");
scanf_s("%d", &c);

printf("���� 4�� ������ �Է��ϼ���. \n");
scanf_s("%d", &d);

printf("���� 5�� ������ �Է��ϼ���. \n");
scanf_s("%d", &e);

int sum = a+b+c+d+e;

printf("5 ������ �հ� ������ %d�Դϴ�. \n", sum);
printf("5 ������ ��� ������ %f�Դϴ�. \n", (double)sum / 5);
return 0; // 21
}
*/

//if�� ������

// 34
/*
{
	int num;
	printf("1 ~ 9�� ������ �Է��� �ּ���. \n");
	scanf_s("%d", &num);

	if (num > 5) //���࿡ num�� 5���� ũ��?
	{
		printf("�Է��� ������ 5���� Ů�ϴ�.\n");
	}
	printf("�Է��� ������ 5���� �۽��ϴ�\n");
	return 0;
}
*/

// 35

/*
{
int num;
printf("���迡�� ������ �޾ҽ��ϱ�?\n");
scanf_s("%d", &num); // %d == num

if (num >= 90)
{
	printf("������ ��� �˴ϴ�.\n");
}
else // if�� ������ ��µǵ��� �ϴ� ����
	printf("������ ���ؼ� �����Ͻʽÿ�.\n");
return 0;
}
*/

// if ~ else if ~ else

// 36
/*
{
int num;
printf("������ �Է��ϼ���. \n");
scanf_s("%d", &num);

if (num == 1)
{
printf("1�� �ԷµǾ����ϴ�.\n");
}

else if (num == 2)
{
printf("2�� �ԷµǾ����ϴ�.\n");
}

else
printf("1�̳� 2�� �Է��ϼ���.\n");

return 0;
}
*/

// 38
/*
{
	char res; // ������ ����(char) res ����

	printf("����� �����Դϱ�? \n");
	printf("Y �Ǵ� N�� �Է��ϼ���. \n");

	// res == getchar(); // ������ ����(char)�� ���� ����� ����
	scanf_s("%c", &res);

	if (res == 'Y' || res == 'y'){
		printf("����� �����̱���. \n"); // Y �Ǵ� y�� �ԷµǸ� ó��
	}

	else if (res == 'N' || res == 'n'){
		printf("����� �����̱���. \n"); // N �Ǵ� n�� �ԷµǸ� ó��
	}

	else{
		printf("Y �Ǵ� N�� �Է��ϼ���. \n"); // �̿��� ���� �ԷµǸ� ó��
	}

	return 0;
}
*/

// 39
/*
{
	int res;
	char ans;

	printf("�� ��°�� �����ұ��? \n");
	printf("������ �Է��ϼ���. \n");

	scanf_s("%d", &res);

	ans = (res == 1) ? 'A' : 'B';

	printf("%c �ڽ��� �����߽��ϴ�. \n", ans);
	return 0;
}
*/

/*
{
	int a, b;
	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &a);

	printf("������ �Է��ϼ���. \n");
	scanf_s("%d", &b);

	int c = a + b;
	printf("�� ������ ���� %d �Դϴ�. \n", c);

	return 0;
}
*/
/*
{
	printf("%c��(��) �����Դϴ�. \n", 'A');
	printf("%d��(��) �����Դϴ�. \n", 123);
	printf("%f��(��) �����Դϴ�. \n", 10.5);

	return 0;
}
*/

// �ݺ��� ����

//40 ~ 49

/*
{
int num = 1;
while (num) // num != 0
{
printf("������ �Է��ϼ���. (0�̸� ����)\n");
scanf_s("%d", &num);
printf("%d�� �ԷµǾ����ϴ�. \n", num);
}
printf("�ݺ��� �����մϴ�. \n");

return 0;
}
*/

/*
{
	int num = 1;
	while (num != 0)
	{
		printf("������ �Է��ϼ���. (0�̸� ����)\n");
		scanf_s("%d", &num);
		printf("%d�� �ԷµǾ����ϴ�. \n", num);
	}
	printf("�ݺ��� �����մϴ�. \n");
	return 0;
}
*/

/*
{
int res;
int i;
printf("�� ��° ������ �����ұ��? (1~10)\n");
scanf("%d", &res);

for(i = 1; i <= 10; i++)
{
printf("%d��° ó���Դϴ�. \n", i);
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

	printf("�� ��° ó���� �ǳʶ۱��? (1~10)\n");
	scanf_s("%d", &res);

	for(i = 1; i <= 10; i++){
		if(i == res)
		continue;
		printf("%d��° ó���Դϴ�. \n", i);
	}

	return 0;
}
*/
//----------------------------------
/*{
int num = 0;

while(num < 5) // num�� 5 �̻��� �ɶ����� �ݺ�(0~4) //
{
printf("Hello world! %d \n", num);
num++;
}
return 0;
}*/
/*
{ // ������ ���� //
int dan = 0, num=1;
printf("�� ��? ");
scanf("%d", &dan);

while(num<10)
{
printf("%d * %d = %d \n", dan, num, dan*num);
num++;
}
return 0;
}*/


//[����1] p155 //
/*
{
int num;
int cas = 0;
printf("������ �Է��Ͻÿ�.\n");
scanf_s("%d", &num);

while (cas < num) // cas�� num���� ũ�ų� ������ ���� //
{
printf("Hello world!\n");
cas++;
}
return 0;
}
*/
//[����2]//
/*
{
int num;
int cas = 1;
printf("������ �Է��Ͻÿ�.\n");
scanf_s("%d", &num);

while(cas <= num)
{
printf("%d * %d = %d\n", cas, num, cas*num);
cas++;
}
return 0;
}*/
//[����4]//
/*
{
int num;
int cas = 9;
printf("������ �Է��Ͻÿ�.\n");
scanf_s("%d", &num);

while(cas > 0) //cas�� 0���� �۰ų� ���� �� ���� //
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
printf("������ �Է��Ͻÿ�.\n");
scanf_s("%d", &num);

while(cas < 5) //0~4 �� 5�� ����//
{

while (num <=0) // num�� 0���� ũ�� ����, 0���� �۰ų� ������ �ݺ�//
{
printf("0���� ū ���� �Է�:(%d��°):", cas+1);
scanf_s("%d", &num);
}
sum += num;
num = 0;
cas++;
}
printf("�� �� : %d", sum);
return 0;
}
*/
/*
{
	int total = 0 , num = 0;

	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);
	printf("�հ� : %d \n", total);
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
	printf("0���� 100������ �� : %d\n", total);
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
	printf("0���� 100������ �� : %d\n", sum);
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
	printf("0���� num������ ����, num��? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0���� %d���� �������: %d \n", num, total);
	return 0;
}*/


/*{
	int n = 0;
	int k = 0;
	int sum = 1;
	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &n);
	for (k = 1; k <= n; k++){
		sum = sum * k;
	}
	printf("1���� %d������ ���丮�� ��: %d \n", n, sum);
	return 0;
}*/

/*
{
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
	else
		printf("�Է� ���� 0���� ���� �ʴ�. \n");
	return 0;
}
*/
/*{
	int opt;
	double num1, num2;
	double result;
	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("��� : %f \n", result);
	return 0;
}*/
/*
{
	int num, abs;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num*(-1); // ���� �� num, ������ �� num*(-1)//
	printf("����: %d \n", abs);
	return 0;
}*/
/*
{
	// 7�� 9�� ����� �ߺ��Ǵ� �� 63�� if���� �Էµ� ���� ���´�.
	int n;
	for (n = 1; n < 100; n++)
	{
		if ((n % 7 == 0) && (n % 9 == 0)) // else if���� �տ� ���ԵǸ� ���� ó����//
			printf("%d�� 7�� ����̸鼭 9�� ����Դϴ�. \n", n);
		else if (n % 9 == 0)
			printf("%d�� 9�� ����Դϴ�. \n", n);
		else if (n % 7 == 0)
			printf("%d�� 7�� ����Դϴ�. \n", n);
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
	printf("�ΰ��� ������ �Է��ϼ���. \n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
		result = num1 - num2;
	else 
		result = num2 - num1;
	
	printf("���� ���: %d \n", result);
	return 0;

}
*/
/*
{
	int num1, num2, num3;
	int result;
	printf("�л� ������ �Է��ϼ���.\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 + num2 + num3) / 3;
	if (result >= 90)
		printf("�л��� ������ A �Դϴ�.\n");
	else if (result >= 80)
		printf("�л��� ������ B �Դϴ�.\n");
	else if (result >= 70)
		printf("�л��� ������ C �Դϴ�.\n");
	else if (result >= 50)
		printf("�л��� ������ D �Դϴ�.\n");
	else
		printf("�л��� ������ F �Դϴ�. \n");
	
	return 0;
}
*/
/*
{
	int num1, num2;
	int result;
	printf("�ΰ��� ������ �Է��ϼ���. \n");
	scanf_s("%d %d", &num1, &num2);

	result = num1 > num2 ? num1 - num2 : num2 - num1;

	printf("���� ���: %d \n", result);
	return 0;
}
*/
/*
{
	int sum = 0, num = 0;

	while (1) // �׻� ��
	{
		sum += num;
		if (sum > 5000)
			break; // break�� ����! ���� �ݺ��� Ż��
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
			continue; // continue�� ����! ���� �ش� �ݺ����� ���ǿ� ���� �� �������� �ʰ� �ٽ� ���ǰ˻�� �̵�.
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

// switch �� ����
/*
{
	int num;
	printf("1�̻� 5������ ���� �Է�: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1�� ONE \n");
		break;
	case 2:
		printf("2�� TWO \n");
		break;
	case 3:
		printf("3�� THREE \n");
		break;
	case 4:
		printf("4�� FOUR \n");
		break;
	case 5:
		printf("5�� FIVE \n");
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
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
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
	printf("�ڿ��� �Է�: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto THREE;

ONE:
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;

TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;

THREE:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���! \n");
	
END:
	return 0;
}
*/
//-------------------------------------------------------------------//

//if-else �� ����
/*
{
	int num;
	printf("������ �Է��Ͻÿ� : \n");
	scanf_s("%d", &num);

	if (num / 2 == 0)
		printf("%d�� ¦���Դϴ�. \n", num);
	else
		printf("%d�� Ȧ���Դϴ�. \n", num);
	
	return 0;
}
*/
/*{
	int num1, num2;
	printf("�� ���� ���� ���� �Է��ϼ���. \n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 == num2)
		printf("�� ���� ���� ���� ���Դϴ�. \n");
	else
		printf("%d ���� %d�� ū ���Դϴ�. \n", num1, num2);
	return 0;
}*/

/*{
	int num;
	printf("0���� 10 ������ ������ �Է��ϼ���. \n");
	scanf_s("%d", &num);

	if (0 <= num && num <= 10)
		printf("�����Դϴ�.\n");
	else
		printf("Ʋ�Ƚ��ϴ�. \n");
	return 0;
}*/

// if - else�� ����
/*
{
	char c;
	printf("A~C������ ���ڸ� �Է��ϼ���. \n");
	scanf_s("%c", &c);

	if (c == 'A' || c == 'B' || c == 'C')
		printf("�����Դϴ�. \n");
	else
		printf("Ʋ�Ƚ��ϴ�. \n");
	return 0;
}
*/

// switch�� ����
/*
{
	int num;
	printf("������ �Է��ϼ���. \n");
	scanf_s("%d", &num);

	switch (num){
	case 1:
		printf("������ 1�Դϴ�. ����� �ʿ��մϴ�. \n");
		break;
	case 2:
		printf("������ 2�Դϴ�. ���� �� ����ϼ���. \n");
		break;
	case 3:
		printf("������ 3�Դϴ�. �� �߽��ϴ�. \n");
		break;
	case 4:
		printf("������ 4�Դϴ�. �ſ� �� �߽��ϴ�. \n");
		break;
	case 5:
		printf("������ 5�Դϴ�. �ſ� ����մϴ�. \n");
		break;
	default:
		printf("������ ����� �Է��� �ȵǾ����ϴ�. \n");
		break;
	}
	return 0;
}
*/

//----------------------------------------------------------------//
//���� �����//

/*{
	int i;
	double d;
	char str[100];

	printf("���� ���� �Է��ϼ���. \n");
	scanf("%d", &i);

	printf("�Ҽ� ���� �Է��ϼ���. \n");
	scanf("%lf", &d);

	printf("���ڿ��� �Է��ϼ���. \n");
	scanf("%s", str);
		
	printf("�Է��� ���� ���� %d�Դϴ�. \n", i);
	printf("�Է��� �Ҽ� ���� %lf�Դϴ�. \n", d);
	printf("�Է��� ���ڿ��� %s�Դϴ�. \n", str);

	return 0;
}
*/
/*
{
	int i;

	for (i = 1; i <= 10; i++){
		printf("%3d", i); // 3�ڸ��� �������� ���
	}

	printf("\n");
	return 0;
}
*/
/*
{
	double num;

	printf("�Ҽ��� �Է��ϼ���. \n");
	scanf("%lf", &num);

	printf("�Ҽ��� ���� 3�ڸ����� ����ϸ� %.3f�Դϴ�. \n", num);
	return 0;
}
*/
/*
{
	char str[100];

	printf("���ڿ��� �Է��ϼ���. \n");
	scanf("%s", str);

	printf("�Է��� ���ڿ��� %s�Դϴ�. \n", str);
	return 0;
}
*/
/*
{
	char str[100];

	printf("���ڿ��� �Է��ϼ���. \n");
	gets(str);

	printf("�Է��� ���ڿ��� %s�Դϴ�. \n", str);
	return 0;
}
*/
/*
{
	int ch;

	printf("���ڸ� ��� �Է��ϼ���.\n");

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
		printf("������ �� �� �����ϴ�. \n");
		return 1;
	}
	else{
		printf("������ �������ϴ�.\n");
	}

	fputs("Hello!\n", fp);
	fputs("Goodbye!\n", fp);
	printf("���Ϸ� ����߽��ϴ�.\n");

	fclose(fp);
	printf("������ �ݾҽ��ϴ�. \n");
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
		printf("������ �� �� �����ϴ�. \n");
		return 1;
	}

	else{
		printf("������ �������ϴ�. \n");
	}

	printf("%d���� ������ �Է��ϼ���. \n", NUM);
	for (i = 0; i < NUM; i++){
		scanf("%d", &test[i]);
	}
	for (j = 0; j < NUM; j++){
		fprintf(fp, "No.%-5d%d\n", j + 1, test[j]);
	}
	printf("���Ϸ� ����߽��ϴ�. \n");

	fclose(fp);
	printf("������ �ݾҽ��ϴ�. \n");
	
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
		printf("������ �� �� �����ϴ�. \n");
		return 1;
	}
	else{
		printf("������ �������ϴ�. \n");
	}

	fgets(str1, NUM - 1, fp);
	fgets(str2, NUM - 1, fp);
	
	printf("���Ϸ� ��µ� ���ڿ��� \n");
	printf("%s", str1);
	printf("%s", str2);

	fclose(fp);
	printf("������ �ݾҽ��ϴ�. \n");

	return 0;
}
*/

//--------------------------------------------------------------------------------//
/*{
	FILE * fp; 
	fopen_s(&fp, "data.txt", "wt");
	if (fp == NULL){
		puts("���� ���� ����!");
		return -1; // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp); // ��Ʈ���� ����
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
	printf("�迭�� �̸�: %p \n", arr);
	printf("ù ��° ���: %p \n", arr[0]);
	printf("�� ��° ���: %p \n", arr[1]);
	printf("�� ��° ���: %p \n", arr[2]);
	// arr= &arr[i]; // �� ������ ������ ������ ����Ų��.
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
	int * ptr = &arr[0]; // int * ptr=arr; �� ������ ����

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

	printf("���� num1�� ���� %d�Դϴ�. \n", num1);
	printf("���� num2�� ���� %d�Դϴ�. \n", num2);
	printf("���� num1�� num2�� ���� ��ȯ�մϴ�. \n");

	swap(&num1, &num2);

	printf("���� num1�� ���� %d�Դϴ�. \n", num1);
	printf("���� num2�� ���� %d�Դϴ�. \n", num2);

	return 0;
}

/* swap �Լ��� ���� */
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
	printf("5����� 8����� ��: %d \n", hap);
}