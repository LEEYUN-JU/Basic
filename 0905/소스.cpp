#include <stdio.h>

//void main()
//{
//	int n = 5;
//	if (n >= 5)
//		printf("%d�� 5���� ũ�ų� ����.\n",n);
//
//	int n1 = 15;
//	if (n1 % 3 == 0 && n1%5 == 0)
//		printf("%d�� 3�� 5�� ����̴�.\n",n1);
//
//	char word = 'A';
//	if (word >= 'A' && word <= 'Z')
//		printf("%c�� �빮���̴�.\n", word);
//
//	int n2 = 6;
//	if (n2 >= 5 || n2 <= -5)
//		printf("%d�� -5���� �۰ų� 5���� ũ��.\n", n2);
//
//	int n3 = 4;
//	if (n3 % 2 == 0)
//		printf("%d�� Ȧ���� �ƴϴ�.\n", n3);
//
//	int n4 = 5;
//	int n5 = 2;
//	int n6 = 4;
//	if (n4 == n5 || n4 >= n6)
//		printf("%d�� %d�� ���ų� %d���� ũ��.\n", n4, n5, n6);
//
//	char word2 = 'i';
//	if (word2 == 'a' || 'e' || 'i' || 'o' || 'u')
//		printf("%c�� �����̴�.\n", word2);
//
//	int num7 = 2;
//	if (num7 <= sizeof(int))
//		printf("%d�� ��ȣ���� 2����Ʈ ������ �Ѱ谪 �ȿ� �ִ�.\n");
//}

//void main()
//{
//	int num1, num2,num3;
//	num1 = 6;
//	num2 = 5;
//	num3 = (num1 > num2) ? num3 = num1 : num3 = num2;
//	printf("%d\n", num3);
//}

//void main()
//{
//	char word = 'b';
//	word = (word >= 'a' && word <= 'z') ? word -= 32 : word += 32;
//	printf("%c", word);
//}

//void main()
//{
//	int num1;
//	num1 = 4;
//	num1 = (num1 % 2 == 0) ? printf("¦��\n") : printf("Ȧ��\n");
//}

//void main()
//{
//	int num = 0;
//	num = (num == 0) ? printf("num = 0") : printf("num = 1");
//}

//void main()
//{
//	int num1;
//	printf("���� : ");
//	scanf_s("%d", &num1);
//
//	if (num1 >= 60)
//		printf("��� : �հ�\n");
//	else
//		printf("��� : ���հ�\n");
//}

//void main()
//{
//	int num1;
//	printf("���� : ");
//	scanf_s("%d", &num1);
//
//	num1 = ~num1 + 1;
//	printf("��ȯ : %d", num1);
//}

//void main()
//{
//	int num1;
//	printf("���� : ");
//	scanf_s("%d", &num1);
//
//	switch (num1%2)
//	{
//	case 0:printf("even number\n"); break;
//	case 1:printf("odd number\n"); break;
//	}
//}

void main()
{
	int num1, num2, num3;
	int max;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	max = num1;
	
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num2);
	if (max < num2)
		max = num2;

	printf("����° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num3);
	if (max < num3)
		max = num3;

	printf("���� ū ���� %d �Դϴ�.\n", max);


}