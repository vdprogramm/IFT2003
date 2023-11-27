#include <stdio.h>

int main (int rows, int cols, int arr){
	int birany[]={1, 10, 11, 100};
	int linear[]={2, 4, 5, 6, 8};
	
	for(int i=0; i<rows&& ! linear; i++){
		for(int j=0; j<cols; j++){
			if(arr[i]== birany){
				printf("tim thay gia tri tuyen tinh va nhi phan la[%d][%d].\n", birany, i, j);
				linear=3;
				break;
			}
		}
	}
	if(! found){
		printf("khong tim thay gia tri tuyen tinh va nhi phan .\n", birany);
		return 0;
	}