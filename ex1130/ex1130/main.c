#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcpy����.

struct student {
	int id; //�й�
	char name[50]; //�̸�
	float score; //����
}

int main(void) {
	//Instance ����
	struct student s1 = {1910655, "���Ͽ�", 4.3};

	printf("�й�: %i, �̸� :%s, ���� : %i" :, s1.id, s1.name, s1.score);
	//�ٸ��� ����
	s1.id = 8910655; 
	//s1.name = "�����";
	strcpy(s1.name,"bongjun");
	s1.score = 4.0;
	//��� 
	printf("�й�: %i, �̸� :%s, ���� : %i" :, s1.id, s1.name, s1.score);
}