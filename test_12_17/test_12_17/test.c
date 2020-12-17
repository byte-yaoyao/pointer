//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//打印一个arr数组，不使用数组下标，使用指针
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int*p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	system("pause");
//	return 0;
//}

//逆序一个字符串的内容
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void Reverse(char arr[])
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len / 2; i++)
//	{
//		char a = arr[i];
//		arr [i] = arr[len - i - 1];
//		arr[len - i - 1] = a;
//	}
//}
//int main()
//{
//	char arr[] = "abcdfeghigk";
//	Reverse(arr);
//		printf("%s", arr);
//	return 0;
//}
   

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void Reverse(char arr[])
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len / 2; i++)
//	{
//		char a = arr[i];
//		arr[i] = arr[len - i - 1];
//		arr[len - i - 1] = a;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	Reverse(arr);
//	printf("%s ", arr);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//void fun(int a, int p[])//将每一项的值存储在数组中
//{
//	p[0] = a;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		p[i + 1] = p[i] * 10 + 2;//后一项的值等于前一项的值*10+2
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int Sn = 0;
//	int p[5] = { 0 };//设置一个数组，用于保存每一项的值
//	fun(a, p);
//
//	for (int i = 0; i < 5; i++)//把数组中的值相加，即可得到Sn
//	{
//		Sn += p[i];
//	}
//	printf("%d\n", Sn);
//	system("pause");
//	return 0;
//}