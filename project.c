#define _CRT_SECURE_NO_WARNINGS //SDL ���� ��� ����//
#include <stdio.h>
//���̾��˰����� ���ڿ��� �����ʿ��� �������� ���� ������ �˰����̴�.
// ������ pattern = na, text = assoonas�̴�.//

int table[500]; // ������ �迭�� int�� ���� table�迭 ����. jump�� ������ pattern�� ���� text�� ���� ��ġ�ϵ��� ���ִ� �ӽ� �迭�̴�. �������̺� ����.
//�̶� table�� �迭�� ���ڿ��� ������ġ�� �����Ѵ�.
void countingTable(char pattern[], int table[]) // table�Լ��� pattern[na] = > an������ �ٲ㼭 �о����
{
	int length = 0;
	int i, j; // int�� length, i, j ����, length�� ���� 0�̴�.
	while (pattern[length] != '\0') // pattern[length]�� ���� \0(���ڿ��� ���� �ǹ��ϴ� ����)�� �ɶ����� ���� �ݺ��Ѵ�. �� ���ڿ��� ���������� �ݺ��Ѵ�. 
		// �̶� �Է��� pattern�� ���̸�ŭ �ݺ��Ѵ�. ex. text = assoonas, pattern = na�� �����ϸ� pattern[2]���� while���� ����ȴ�.
	{
		length++; 
		// length�� ��ġ ���� ������ �̿�. while���� ����� ������ length�� ���� 1 �����Ѵ�. ex. length�� 2���� ������. �̶� length�� ���� �Լ��� ����� ������ �����ȴ�.
	}

	for (i = 0; i < 500; i++) // i = 0�̰�, i < 500�� �� ������ �ݺ��Ѵ�. i�� ��ġ ���� ������ �̿�
	{
		table[i] = length; // table�� ������ ��ü ���̷� �����Ѵ�.
	}

	for (j = 0; j < length - 1; j++) // j = 0�̰�, j < length - 1{(length = 2) 2 - 1}�� �� ������ �ݺ��Ѵ�. j�� ��ġ ���� ������ �̿�
	{
		table[pattern[j]] = length - 1 - j; // table�� ������ ��ü����length - index - 1. ���⼭ -1�� \0���� ���� ����. 
		// table[pattern[j]] = table[pattern[0]] = 1 => table[n] = 1, table[pattern[1]] = 0 => table[a] = 0
	}
}

void BoyerMoore(char text[], char pattern[])
{
	countingTable(pattern, table); // ���� void�� �Լ� countingTable�� �����´�.
	int n = 0, m = 0, i = 0;
	int	j, k; // int�� n, m, i, j, k ����, n, m, i�� ���� 0�̴�.

	while (text[n] != '\0') // text[n]�� \0(���ڿ��� ���� �ǹ��ϴ� ����)�� �ɶ����� ���� �ݺ��Ѵ�. text[]=assoonas�� ����. text[8] = \0�̱⿡, n�� ���� 8���� ����ȴ�.
	{
		n++; // n�� ��ġ ���� �����ڸ� �̿��Ͽ� ���� 1 �����Ѵ�.
	}
	while (pattern[m] != '\0') // pattern[m]�� \0(���ڿ��� ���� �ǹ��ϴ� ����)�� �ɶ����� ���� �ݺ��Ѵ�. pattern[] = na�� ����. pattern[2] = \0�̱⿡, m�� ���� 2���� ����ȴ�.
	{
		m++; // m�� ��ġ ���� �����ڸ� �̿��Ͽ� ���� 1 �����Ѵ�.
	}
	
	// text[]=assoonas, pattern[] = na �� ������ �� n = 8, m = 2�� �ȴ�. �̶� n, m�� ���� BoyerMoore�Լ��� ����ɶ����� ����� ���� �����ȴ�. //

	while (i <= n - m) // i�� ���� n - m ���� Ŭ������ �ݺ��Ѵ�. n - m = 6 �̴�.
	{
		j = m - 1; // j�� ���� 2 - 1 = 1
		k = i + m - 1; // k = 0 + 2 - 1 = 1
		
		while (j >= 0 && pattern[j] == text[k]) // j�� ���� 0���� �۰� pattern[j] �� text[k]�� ����ġ�Ҷ����� �ݺ��Ѵ�.
		{
			j--; // j�� ��ġ ���� ������ �̿��Ͽ� ���� 1 ���ҵȴ�.
			k--; // k�� ��ġ ���� ������ �̿��Ͽ� ���� 1 ���ҵȴ�.
		}

		if (j == -1) // ���� j�� ���� -1�̶�� p[2] = \0, p[1] = a, p[0] = n.
		{
			printf("%d ��ġ���� ��Ī�� �Ǿ����ϴ�.\n", i); // �ش� ���ڿ��� ����Ѵ�. i = 5
		}

		i = i + table[text[k]]; //�����Ŀ� ���� text[k] = a, table[a] = 0, i = 5
	}
}

int main(void)
{
	char text[1000]; // char�� text[1000] ����
	char pattern[500]; // char�� pattern[500] ����
	
	printf("�ؽ�Ʈ�� �Է��ϼ��� : ");
	scanf("%s", &text); // �ؽ�Ʈ�� �Է��Ѵ�.

	printf("ã�� �ܾ �Է��ϼ��� : ");
	scanf("%s", &pattern); // �Է��� �ؽ�Ʈ���� ã�� ���� �ܾ �Է��Ѵ�.

	BoyerMoore(text, pattern); // text�� pattern�� �Ű������� �ϴ� BoyerMoore�Լ� ����.
	return 0;
	//text = banana, pattern = na��� ġ�ԵǸ� 2�� 4�� ���� ���ÿ� �޴´�.
}