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

//��ӡһ��arr���飬��ʹ�������±꣬ʹ��ָ��
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

//����һ���ַ���������
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
//void fun(int a, int p[])//��ÿһ���ֵ�洢��������
//{
//	p[0] = a;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		p[i + 1] = p[i] * 10 + 2;//��һ���ֵ����ǰһ���ֵ*10+2
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int Sn = 0;
//	int p[5] = { 0 };//����һ�����飬���ڱ���ÿһ���ֵ
//	fun(a, p);
//
//	for (int i = 0; i < 5; i++)//�������е�ֵ��ӣ����ɵõ�Sn
//	{
//		Sn += p[i];
//	}
//	printf("%d\n", Sn);
//	system("pause");
//	return 0;
//}