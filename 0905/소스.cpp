#include <stdio.h>

//void main()
//{
//	int n = 5;
//	if (n >= 5)
//		printf("%d는 5보다 크거나 같다.\n",n);
//
//	int n1 = 15;
//	if (n1 % 3 == 0 && n1%5 == 0)
//		printf("%d이 3과 5의 배수이다.\n",n1);
//
//	char word = 'A';
//	if (word >= 'A' && word <= 'Z')
//		printf("%c가 대문자이다.\n", word);
//
//	int n2 = 6;
//	if (n2 >= 5 || n2 <= -5)
//		printf("%d이 -5보다 작거나 5보다 크다.\n", n2);
//
//	int n3 = 4;
//	if (n3 % 2 == 0)
//		printf("%d이 홀수가 아니다.\n", n3);
//
//	int n4 = 5;
//	int n5 = 2;
//	int n6 = 4;
//	if (n4 == n5 || n4 >= n6)
//		printf("%d이 %d와 같거나 %d보다 크다.\n", n4, n5, n6);
//
//	char word2 = 'i';
//	if (word2 == 'a' || 'e' || 'i' || 'o' || 'u')
//		printf("%c가 모음이다.\n", word2);
//
//	int num7 = 2;
//	if (num7 <= sizeof(int))
//		printf("%d가 부호없는 2바이트 정수의 한계값 안에 있다.\n");
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
//	num1 = (num1 % 2 == 0) ? printf("짝수\n") : printf("홀수\n");
//}

//void main()
//{
//	int num = 0;
//	num = (num == 0) ? printf("num = 0") : printf("num = 1");
//}

//void main()
//{
//	int num1;
//	printf("점수 : ");
//	scanf_s("%d", &num1);
//
//	if (num1 >= 60)
//		printf("결과 : 합격\n");
//	else
//		printf("결과 : 불합격\n");
//}

//void main()
//{
//	int num1;
//	printf("정수 : ");
//	scanf_s("%d", &num1);
//
//	num1 = ~num1 + 1;
//	printf("변환 : %d", num1);
//}

//void main()
//{
//	int num1;
//	printf("정수 : ");
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

	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num1);
	max = num1;
	
	printf("두번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num2);
	if (max < num2)
		max = num2;

	printf("세번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num3);
	if (max < num3)
		max = num3;

	printf("가장 큰 수는 %d 입니다.\n", max);


}