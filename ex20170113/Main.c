//#include<stdio.h>
//void main() {
//	int arr[5] = { 0 };
//	for (int i = 0, j = 10; i < 5;  ++i, j+=10) {
//		arr[i] = j;
//
//	}for (int i = 0; i < 5; ++i) {
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//
//#include<stdio.h>
//void main() {
//	int arr[5] = { 0 };
//	int i;
//	for(i=0;i<5;i++){
//	arr[i] = (i+1) * 10;
//	}
//	for (int i = 0; i < 5; ++i) {
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}

//
//#include<stdio.h>
//void PrintArray(int* arr, int size) {
//	int i;
//	for (i = 0; i <size; ++i) {
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//void main() {
//	int arr[5] = { 0 };
//	int i;
//	for (i = 0; i<5; i++) {
//		arr[i] = (i + 1) * 10;
//	}
//	PrintArray(arr,5);//���������� ���� ��������
//}
//

//#include<stdio.h>
//
//
//void PrintArray(int* arr, int size);// �Լ�����
//void InitArray(int* arr, int size);
//void main() {
//	int arr[5] = { 0 };
//	InitArray(arr, 5);
//	PrintArray(arr, 5);
//}
//void PrintArray(int* arr, int size) { 
//	int i;
//	for (i = 0; i <size; ++i) {
//		printf("[%d]:%d\n", i, arr[i]);
//	}
//}
//void InitArray(int* arr, int size) {
//	for (int i = 0; i<size; i++) {
//		arr[i] = (i + 1) * 10;
//	}
//}

//
//#include<stdio.h>
//void main() {
//	char*s = "ABC";
//	for (int i = 0; s[i] ; ++i) { // s�� i��°�� ����ض� i<3�����Ҷ� s���ٲ�� �׳� 3��������ϱ⋚����
//		printf("%c\n", s[i]);
//	}
//}
//
//#include<stdio.h>
//void main() {
//	//char arr[4] = { 'A', 'B', 'C', 'D' };
//	char arr[4] = "ABC"; //char�� �迭�� �̷��� �ʱ�ȭ�� ������ !!! ���� �޸�
//	char *s = "ABC"; // ����޸� ! �ٲܼ� ���� ��
//	printf("%s", arr);// ����� �ȳ���
//	printf("%s %s\n", s, arr);
//
//}

//#include<stdio.h>
//void main() {
//
//	char arr[4] = "ABC"; 
//	char *s = "ABC"; 
//	s[0] = 'K'; // �ٲܼ�����!!! ��������
//	arr[0] = 'K';
//	printf("%s %s", s, arr);
//}
//
//#include<stdio.h>
//void main() {
//
//	char arr[4] = "ABC"; 
//	const char *s = "ABC";
////	s[0] = 'K'; // �ٲܼ�����!!! ��������
//	arr[0] = 'K';
//	printf("%s %s", s, arr);
//}

//
//#include<stdio.h>
//void main() {
//
//	char *s = "ABC";
//	char arr[] = "ABC"; // �����Ҽ����� 
//	printf("%s %s %d\n", s, arr, sizeof(arr));
//
//}

//
//#include<stdio.h>
//int Ustrlen(char* s) {
//	int i;
//	for (i = 0; s[i]; ++i)  
//		;//����
//		return i;
//	
//	
//
//	return 1;
//}
//void main() {
//
//	char *s = "ABC";
//	char arr[] = "ABC"; 
//	printf("%d\n", Ustrlen(s));//������ ���� ��ŭ ���
//	printf("%d\n",Ustrlen(arr));
//
//}


///*���ڿ� ���� ǥ�� ���̺귯�� !*/
//#include<stdio.h>
//
//void main() {
//
//	char *s = "ABC";
//	char arr[] = "ABC";
//
//	/*���ڿ� ���� ���*/
//	printf("%d\n", strlen(s));
//	printf("%d\n", strlen(arr));
//
//	/**/
//}
//
///*���ڿ� ���� ǥ�� ���̺귯�� !*/
//#include<stdio.h>
//#include<string.h>
//void main() {
//
//	char *s = "ABCDEF";
//	char buf[1000];
//
//	strcpy(buf, s); // buf�� s�� �����ض�
//	printf("%s %s\n", s, buf);
//}

//
///*���ڿ� ���� ǥ�� ���̺귯�� !*/
//#include<stdio.h>
//#include<string.h>
//void main() {
//
//	char *s = "ABCDEF";
//	char buf[1000];
//
//	strcpy_s(buf, strlen(s)+1,s); //���ڿ��Լ�����_s �� �������
//	printf("%s %s\n", s, buf);
//}


///*���ڿ� ���� ǥ�� ���̺귯�� !*/
//#pragma warning(disalbe:4996)// warning ���¹��
//#include<stdio.h>
//#include<string.h>
//
//void main() {
//
//	char *s = "ABCDEF";
//	char buf[1000];
//
//	strcpy(buf, strlen(s) + 1, s); //���ڿ��Լ�����_s �� �������
//	printf("%s %s\n", s, buf);
//}




//8*************************************
///*���ڿ� ���� ǥ�� ���̺귯�� !*/
//#include <stdio.h>
//#include <string.h>
//void main() {
//   char* s = "ABCDEF";
//   char buf[1000]="abc";
//
//   strcat_s(buf,strlen(s)+strlen(buf)+1, s); //���̱� �Լ� 
//   printf("%s %s\n", s, buf);
//
//}

///*???*/
//#include <stdio.h>
//#include <string.h>
//void main() {
//   char* s1 = "ABC";
//   char* s2 = "AAC";
//   char* s3 = "ABC";
//   char* s4 = "abcdef";
//
//   printf("%d\n", strcmp(s1, s2));
//   printf("%d\n", strcmp(s1, s3));
//   printf("%d\n", strcmp(s1, s4));
//   printf("%d\n", strcmp(s2, s3));
//   printf("%d\n", strcmp(s3, s4));
//
//}
//
//#include <stdio.h>
//#include <string.h>
//void main() {
//   char buf[100] = "ABCDEF";
//   printf("string: %s\n", buf);
//   {
//      char temp[100];
//      temp[5] = buf[0];
//      temp[4] = buf[1];
//      temp[3] = buf[2];
//      temp[2] = buf[3];
//      temp[1] = buf[4];
//      temp[0] = buf[5];
//
//      buf[5] = temp[5];
//      buf[4] = temp[4];
//      buf[3] = temp[3];
//      buf[2] = temp[2];
//      buf[1] = temp[1];
//      buf[0] = temp[0];
//   }
//   printf("string: %s\n", buf);
//
//}




//#include<stdio.h>
//#include<string.h>
//
//void main() {
//
//	char *s = "ABCDEF";
//	char buf[1000] = "ABCDEkjskjdk";
//	char temp[100];
//	int i, j;
//	int len = strlen(buf);
//	for (i = 0; i < len; ++i)
//		temp[len - 1 - i] = s[i];
//	for (i = 0; i < len; ++i)
//		s[i] = temp[i];
//
//
//}
//
//#include<stdio.h>
//#include<string.h>
//void Reverse(char* s) {
//	char temp[100];
//	int i;
//	int len = strlen(s);
//	for (i = 0; i < len; ++i)
//		temp[len - 1 - i] = s[i];
//	for (i = 0; i < len; ++i)
//		s[i] = temp[i];
//
//}
//void main() {
//	char buf[100] = "ABCDEF";
//
//	printf("string:%s\n", buf);
//	Reverse(buf);
//	printf("string:%s\n", buf);
//
//}

//
//#include<stdio.h>
//#include<string.h>
//void Swap(char*pa, char* pb) {
//	char temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void main() {
//	char buf[100] = "ABCDEF";
//
//	printf("string:%s\n", buf);
//	{
//		char temp;
//
//		Swap(&buf[0], &buf[5]);
//		Swap(&buf[1], &buf[4]);
//		Swap(&buf[2], &buf[3]);
//
//
//		//temp = buf[1];
//		//buf[1] = buf[4];
//		//buf[4] = temp;
//
//	}
//	printf("string:%s\n", buf);
//
//}


//#include<stdio.h>
//#include<string.h>
//void Swap(char*pa, char* pb) {
//	char temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void main() {
//	char buf[100] = "ABCDEF";
//
//	printf("string:%s\n", buf);
//	{
//		char temp;
//
//		for (int i = 0; i < 3; ++i)
//			Swap(&buf[i], &buf[5 - i]);
//	}
//	printf("string:%s\n", buf);
//}

//#include<stdio.h>
//#include<string.h>
//void Swap(char*pa, char* pb) {
//	char temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void main() {
//	char buf[100] = "ABCDEF";
//
//	printf("string:%s\n", buf);
//	{
//		char temp;
//		int len = strlen(buf);
//		for (int i = 0; i<len/2; ++i)
//			Swap(&buf[i], &buf[len-1 - i]);
//	}
//	printf("string:%s\n", buf);
//

//#include<stdio.h>
//#include<string.h>
//void Swap(char*pa, char* pb) {
//	char temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void Reverse(char*s) {
//	char temp;
//	int len = strlen(s);
//	for (int i = 0; i < len / 2; ++i)
//		Swap(&s[i], &s[len - 1 - i]);
//}
//void main() {
//	char buf[100] = "ABCDEF";
//
//	printf("string:%s\n", buf);
//	{
//		Reverse(buf);
//	}
//	printf("string:%s\n", buf);
//}

//
///*2���� �迭*/
//#include<stdio.h>
//void main() {
//	int arr[2][2] = { 1,2,3,4 };
//	printf("%d\n", arr[0][0]);
//	printf("%d\n", arr[0][1]);
//	printf("%d\n", arr[1][0]);
//	printf("%d\n", arr[1][1]);
//}

//
///*2���� �迭*/
//#include<stdio.h>
//void main() {
//	int arr[2][3] = { 1,2,3,4,5,6 };
//
//	printf("%d\n", arr[0][0]);
//	printf("%d\n", arr[0][1]);
//	printf("%d\n", arr[1][0]);
//	printf("%d\n", arr[1][1]);
//}
//
///*2���� �迭*/
//#include<stdio.h>
//void main() {
//	int arr[2][3] = { 
//		{1,2,3},
//		{4,5,6}
//	};
//
//	printf("%d\n", arr[0][0]);
//	printf("%d\n", arr[0][1]);
//	printf("%d\n", arr[0][2]);
//	printf("%d\n", arr[1][0]);
//	printf("%d\n", arr[1][1]);
//	printf("%d\n", arr[1][2]);
//}



///*2���� �迭*/
//#include<stdio.h>
//void main() {
//	int arr[2][3] = {
//		{ 1,2 },
//		{ 4 }
//	};
//
//	printf("%d\n", arr[0][0]);
//	printf("%d\n", arr[0][1]);
//	printf("%d\n", arr[0][2]);
//	printf("%d\n", arr[1][0]);
//	printf("%d\n", arr[1][1]);
//	printf("%d\n", arr[1][2]);
//}

//
///*2���� �迭*/
//#include<stdio.h>
//void main() {
//	int arr[2][3] = {
//		{ 1,2,3 },
//		{ 4,5,6 }
//	};
//	for (int i = 0; i < 2;++i) {
//		for (int j = 0; j < 3; ++j) {
//			printf("%d\n", arr[i][j]);
//		}
//}
//}

//
///*2���� �迭*/
//#include<stdio.h>
//void main() {
//	int i, j;
//	int arr[5][5] = { 0};
//	for (i = 0; i < 5; ++i) {
//		for ( j = 0; j < 5; ++j) {
//			printf("%5d", arr[i][j]);
//		}printf("\n");
//	}
//
//	//�̰� ���־��� 
//	for (i = 0; i < 5; ++i) {
//		for ( j = 0; j < 5; ++j) {
//			arr[i][j] = 0; 
//		}
//	}
//}

//
///*2���� �迭*/
//#include<stdio.h>
//void main() {
//	int i, j;
//	int arr[5][5] = { 0};
//	//�̰� ���־��� 
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//		//	arr[i][j] = i;
//			arr[i][j] = j;
// 		}
//	}
//
//	for (i = 0; i < 5; ++i) {
//		for ( j = 0; j < 5; ++j) {
//			printf("%5d", arr[i][j]);
//		}printf("\n");
//	}
//
//
//}

//
///*2���� �迭- ���� �ֱ�*/ 
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	//�̰� ���־��� 
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			arr[i][j] = n++;
//		}
//	}
//
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			printf("%5d", arr[i][j]);
//		}printf("\n");
//	}
//
//
//}

//
///*2���� �迭 - ���� �ֱ�**/
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	//�̰� ���־��� 
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			arr[i][j] = i * 5 + j + 1;
//		}
//	}
//
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			printf("%5d", arr[i][j]);
//		}printf("\n");
//	}
//}

///*2���� �迭 - �밢�� 1�ֱ�**/
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	//�̰� ���־��� 
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			if (i == j) {
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			printf("%5d", arr[i][j]);
//		}printf("\n");
//	}
//}

///*2���� �迭 - �밢�� 1�ֱ�**/
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	for (i = 0; i < 5; ++i) {
//		arr[i][i] = 1;
//	}
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			printf("%5d", arr[i][j]);
//		}printf("\n");
//	}
//}

//
///*2���� �迭 - �밢����,�ݴ�밢�� 1�ֱ�**/
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	for (i = 0; i < 5; ++i) {
//				arr[i][4-i] = 1;//�ݴ�밢��
//				arr[i][i] = 1;//�밢��
//		
//	}
//	for (i = 0; i < 5; ++i) {
//		for (j = 0; j < 5; ++j) {
//			printf("%5d", arr[i][j]);
//		}printf("\n");
////	}
////}
//
//
//
//#include<stdio.h>
//void main() {
//
//	int arr[2][3] = { 10,20,30,40,50,60 };
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//
//	/* 0 �� ��������*/
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[0][3], arr[0][4], arr[0][5]);
//	/* 1�� ��������*/
//	printf("%d %d %d\n", arr[1][-3], arr[1][-2], arr[1][-1]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//
//
//	printf("%p %p %p\n", arr,arr[0],&arr[0][0]);//��ü�� �����ּ�, arr[0]�� �����ּ�, arr[0][0]�����ּҴ� ��ΰ���
//	printf("%d %d %d\b", sizeof(arr), sizeof(arr[0]), sizeof(&arr[0][0]));
//
////}
//#include<stdio.h>
//void PrintArray(int(*p)[3],int row, int col) {
//	
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j) {
//			printf("%5d", p[i][j]);
//		}
//	}
//}
//void main() {
//
//	int arr[2][3] = { 10,20,30,40,50,60 };
//	PrintArray(arr, 2, 3);
//}

//
///*����ü*/
//#include<stdio.h>
//void main() {
//
//	struct Point { //����ü����  ���� �Լ� �ۿ��ٰ� ������
//		int x;
//		int y;
//	};
//
//	struct Point p1;
//
//	p1.x = 2;
//	p1.y = 3;
//	printf("%d %d\n", p1.x, p1.y);
//}

//
///*����ü*/
//#include<stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1;
//	p1.x = 2;
//	p1.y = 3;
//	printf("%d %d\n", p1.x, p1.y);
//}

//
///*����ü*/
//#include<stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1 = { 2,3 };//����� ���ÿ� �ʱ�ȭ
//	printf("%d %d\n", p1.x, p1.y);
//}

//
///*����ü*/
//#include<stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1 = { 2,3 };//����� ���ÿ� �ʱ�ȭ
//	printf("%d %d\n", sizeof(p1), sizeof(p1.x));
//}


///*����ü*/
//#include<stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1 = { 2,3 };//����� ���ÿ� �ʱ�ȭ
//
//	struct Point *p = &p1;
//	printf("%p %p %p \n", &p1, &p1.x, &p1.y);
//	printf("%p %p %p \n", &p1+1, &p1.x+1, &p1.y+1); // &p1+1 -> 8����Ʈ �� �ڴ�
//
//
//	printf("(%d,%d)\n", p1.x, p1.y);
//	printf("(%d,%d)\n", (*p).x, (*p).y);
//	printf("(%d,%d)\n", p->x, p->y);
//}


#include<stdio.h>
struct Point
{
	int x;
	int y;

};
void PrintPoint(struct Point pt) { //����ü�� ����� �����縦 ���� �ʴ´�!!! �̷��� �ϸ�ȵ�!!
	printf("(%d ,%d)\n", pt.x, pt.y);

}

void main() {
	struct Point p1 = { 2,3 };
	PrintPoint(p1);
}