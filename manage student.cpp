#include <stdio.h>

struct student{
	char name[30];
	int id;
	int number;
	int age;
	float grade;
};
int main (){
	struct student s;
	printf("nhap thong tin cua sinh vien:\n");
	printf("nhap ten :");
	fgets(s.name, sizeof(s.name), stdin);
	
	printf("nhap ma so :");
	scanf("%d", s.id);
	printf("nhap tuoi :");
	scanf("%d", s.age);
	printf("nhap diem :");
	scanf("%2f", s.grade);
	
	printf("\n nhap thong tin cua sinh vien :\n");
	printf("nhap ten cua sinh vien: %s", s.name);
	printf("nhap ma so sinh vien :%d\n", s.id);
	printf("nhap tuoi cua sinh vien: %d\n", s.age);
	printf("nhap diem cua sinh vien: %2f\n", s.grade);
}