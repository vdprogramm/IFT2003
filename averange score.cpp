#include <stdio.h>

int main (){
	int i;
	char name[50];
	int id;
	int number;
	float score;
	float averange;
	
	for(int i=0; i<50; i++){
		printf("nhap thong hoc sinh thu %d\n", i+1);
		scanf("%c", &name);
		printf("nhap ma sinh vien:");
		scanf("%d", &id);
		printf("nhap so %d thu tu cua hoc sinh:");
		scanf("%d", &number);
		printf("nhap diem %d mon toan cua hoc sinh:");
		printf("nhap diem %d mon anh cua hoc sinh:");
		scanf("%d %d", &score );
		
		averange=score/2;
		printf("nhap diem trung binh cua hoc sinh", averange);
		scanf("%2f", &averange);
	}
	return 0;
}

	