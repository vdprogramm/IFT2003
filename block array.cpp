#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[], int n){
	for(int i=0; i<n-1; i++){
	for(int j= 0; j<n; j++){
	  	if( arr[i]>arr[j])
	  		int block= arr[i];
	  		arr[i]= arr[i+1];
	}
  }
    
}
void selectionsort(int arr[], int n){
	int i, j, min_idx;
	
	for(int i=0; i<n-1; i++){
		min_idx=i;
	for(int j=i+1; j<n; j++){
		if(arr[j]<arr[min_idx])
		   min_idx= j;
			int block= arr[min_idx];
			arr[min_idx]=arr[i];
			arr[i]=block;
		}
	}	
}

int main(){
	int n, i, j;
	printf("nhap hieu suat trong tung mang:");
	scanf("%d %d %d", &n, &i, &j );
	printf("thoi gian thuc thi la:%d\n", bubblesort, selectionsort);
	return 0;
	
}