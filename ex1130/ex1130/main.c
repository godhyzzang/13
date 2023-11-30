#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcpy위해.

struct student {
	int id; //학번
	char name[50]; //이름
	float score; //학점
}

int main(void) {
	//Instance 선언
	struct student s1 = {1910655, "양하연", 4.3};

	printf("학번: %i, 이름 :%s, 학점 : %i" :, s1.id, s1.name, s1.score);
	//다른값 변경
	s1.id = 8910655; 
	//s1.name = "김수현";
	strcpy(s1.name,"bongjun");
	s1.score = 4.0;
	//출력 
	printf("학번: %i, 이름 :%s, 학점 : %i" :, s1.id, s1.name, s1.score);
}