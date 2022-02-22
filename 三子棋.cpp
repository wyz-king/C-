//#include<stdio.h>
//void exchange(int x, int y)
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//	printf("a=%d,b=%d\n", x, y);
//}
//int main()
//{
//	void exchange(int a, int b);
//	int a = 20;
//	int b = 10;
//	 exchange(a, b);
//	
//	return 0;
//
//
//
//}
//#include<stdio.h>
//void exchange(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	exchange(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>

//int judge(int j)
//{
//	int judge(int);
//	int n = 0;
//	for(n = 2;n < (j / 2); n++)
//	{
//		if (j % n == 0)
//		
//			return 0;
//		
//		
//	}
//	        return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judge(i) == 1)
//		
//			printf("%d ", i);
//		
//	}
//
//
//
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
	/*char a = 'A';
	char b;
	b = a + 1;
	printf("%c\n", b);*/
	/*char arr[] = "bit";
	char* a = arr;
	a++;
	
	
	
	 
	printf("%c\n" ,a);*/
	/*int i = 1;
	int j = 0;
	int n;
	scanf_s("%d",&n);
	for (j = 1;j <= n; j++)
	{
		i = i * j;
	}
	printf("%d\n", i);
	return 0;
}*/
#include<stdio.h>
#include"Class1.h"
void menu()
{
	printf("************************\n");
	printf("*****1 play 0 exit *****\n");
	printf("************************\n");
	
}
void game()
{
	char ret ;
	char arr[ROW][COL] = { 0 };
	Initarr(arr, ROW, COL);
	displayarr(arr, ROW, COL);
	while (1)
	{
		Playermove(arr, ROW, COL);
		displayarr(arr, ROW, COL);
		ret = judge(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computermove(arr, ROW, COL);
		displayarr(arr, ROW, COL);
		judge(arr, ROW, COL);
		ret = judge(arr, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
if (ret == '*')
	{
		printf("玩家赢\n");
		
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}




}
void test()
{
	menu();
	int input = 0;
	do
	{
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}
