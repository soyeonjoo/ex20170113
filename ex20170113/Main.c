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
//	PrintArray(arr,5);//갯수정보도 같이 보내야함
//}
//

//#include<stdio.h>
//
//
//void PrintArray(int* arr, int size);// 함수선언
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
//	for (int i = 0; s[i] ; ++i) { // s의 i번째를 출력해라 i<3으로할때 s가바뀌면 그냥 3개만출력하기떄문에
//		printf("%c\n", s[i]);
//	}
//}
//
//#include<stdio.h>
//void main() {
//	//char arr[4] = { 'A', 'B', 'C', 'D' };
//	char arr[4] = "ABC"; //char형 배열만 이렇게 초기화가 가능함 !!! 변수 메모리
//	char *s = "ABC"; // 상수메모리 ! 바꿀수 없음 ㅎ
//	printf("%s", arr);// 제대로 안나옴
//	printf("%s %s\n", s, arr);
//
//}

//#include<stdio.h>
//void main() {
//
//	char arr[4] = "ABC"; 
//	char *s = "ABC"; 
//	s[0] = 'K'; // 바꿀수없다!!! 오류데스
//	arr[0] = 'K';
//	printf("%s %s", s, arr);
//}
//
//#include<stdio.h>
//void main() {
//
//	char arr[4] = "ABC"; 
//	const char *s = "ABC";
////	s[0] = 'K'; // 바꿀수없다!!! 오류데스
//	arr[0] = 'K';
//	printf("%s %s", s, arr);
//}

//
//#include<stdio.h>
//void main() {
//
//	char *s = "ABC";
//	char arr[] = "ABC"; // 생략할수있음 
//	printf("%s %s %d\n", s, arr, sizeof(arr));
//
//}

//
//#include<stdio.h>
//int Ustrlen(char* s) {
//	int i;
//	for (i = 0; s[i]; ++i)  
//		;//빈문장
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
//	printf("%d\n", Ustrlen(s));//문자의 갯수 만큼 출력
//	printf("%d\n",Ustrlen(arr));
//
//}


///*문자열 관련 표준 라이브러리 !*/
//#include<stdio.h>
//
//void main() {
//
//	char *s = "ABC";
//	char arr[] = "ABC";
//
//	/*문자열 갯수 출력*/
//	printf("%d\n", strlen(s));
//	printf("%d\n", strlen(arr));
//
//	/**/
//}
//
///*문자열 관련 표준 라이브러리 !*/
//#include<stdio.h>
//#include<string.h>
//void main() {
//
//	char *s = "ABCDEF";
//	char buf[1000];
//
//	strcpy(buf, s); // buf에 s를 복사해라
//	printf("%s %s\n", s, buf);
//}

//
///*문자열 관련 표준 라이브러리 !*/
//#include<stdio.h>
//#include<string.h>
//void main() {
//
//	char *s = "ABCDEF";
//	char buf[1000];
//
//	strcpy_s(buf, strlen(s)+1,s); //문자열함수에는_s 를 해줘야함
//	printf("%s %s\n", s, buf);
//}


///*문자열 관련 표준 라이브러리 !*/
//#pragma warning(disalbe:4996)// warning 끄는방법
//#include<stdio.h>
//#include<string.h>
//
//void main() {
//
//	char *s = "ABCDEF";
//	char buf[1000];
//
//	strcpy(buf, strlen(s) + 1, s); //문자열함수에는_s 를 해줘야함
//	printf("%s %s\n", s, buf);
//}




//8*************************************
///*문자열 관련 표준 라이브러리 !*/
//#include <stdio.h>
//#include <string.h>
//void main() {
//   char* s = "ABCDEF";
//   char buf[1000]="abc";
//
//   strcat_s(buf,strlen(s)+strlen(buf)+1, s); //붙이기 함수 
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
///*2차원 배열*/
//#include<stdio.h>
//void main() {
//	int arr[2][2] = { 1,2,3,4 };
//	printf("%d\n", arr[0][0]);
//	printf("%d\n", arr[0][1]);
//	printf("%d\n", arr[1][0]);
//	printf("%d\n", arr[1][1]);
//}

//
///*2차원 배열*/
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
///*2차원 배열*/
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



///*2차원 배열*/
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
///*2차원 배열*/
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
///*2차원 배열*/
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
//	//이거 자주쓰임 
//	for (i = 0; i < 5; ++i) {
//		for ( j = 0; j < 5; ++j) {
//			arr[i][j] = 0; 
//		}
//	}
//}

//
///*2차원 배열*/
//#include<stdio.h>
//void main() {
//	int i, j;
//	int arr[5][5] = { 0};
//	//이거 자주쓰임 
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
///*2차원 배열- 증감 넣기*/ 
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	//이거 자주쓰임 
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
///*2차원 배열 - 증감 넣기**/
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	//이거 자주쓰임 
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

///*2차원 배열 - 대각선 1넣기**/
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	//이거 자주쓰임 
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

///*2차원 배열 - 대각선 1넣기**/
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
///*2차원 배열 - 대각선과,반대대각선 1넣기**/
//#include<stdio.h>
//void main() {
//	int i, j, n = 1;
//	int arr[5][5] = { 0 };
//	for (i = 0; i < 5; ++i) {
//				arr[i][4-i] = 1;//반대대각선
//				arr[i][i] = 1;//대각선
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
//	/* 0 을 기준으로*/
//	printf("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%d %d %d\n", arr[0][3], arr[0][4], arr[0][5]);
//	/* 1을 기준으로*/
//	printf("%d %d %d\n", arr[1][-3], arr[1][-2], arr[1][-1]);
//	printf("%d %d %d\n", arr[1][0], arr[1][1], arr[1][2]);
//
//
//	printf("%p %p %p\n", arr,arr[0],&arr[0][0]);//전체의 시작주소, arr[0]의 시작주소, arr[0][0]시작주소는 모두같다
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
///*구조체*/
//#include<stdio.h>
//void main() {
//
//	struct Point { //구조체정의  보통 함수 밖에다가 정의함
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
///*구조체*/
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
///*구조체*/
//#include<stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1 = { 2,3 };//선언과 동시에 초기화
//	printf("%d %d\n", p1.x, p1.y);
//}

//
///*구조체*/
//#include<stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1 = { 2,3 };//선언과 동시에 초기화
//	printf("%d %d\n", sizeof(p1), sizeof(p1.x));
//}


///*구조체*/
//#include<stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1 = { 2,3 };//선언과 동시에 초기화
//
//	struct Point *p = &p1;
//	printf("%p %p %p \n", &p1, &p1.x, &p1.y);
//	printf("%p %p %p \n", &p1+1, &p1.x+1, &p1.y+1); // &p1+1 -> 8바이트 씩 뛴당
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
void PrintPoint(struct Point pt) { //구조체는 절대로 값복사를 하지 않는다!!! 이렇게 하면안됩!!
	printf("(%d ,%d)\n", pt.x, pt.y);

}

void main() {
	struct Point p1 = { 2,3 };
	PrintPoint(p1);
}