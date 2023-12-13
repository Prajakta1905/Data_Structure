/* find second largest element in an array */
#include<stdio.h>

int fun(int arr[5]){
	int temp1,temp2;
	temp1=arr[0];
	temp2=0;
	for(int i=0;i<5;i++){
		if(temp2<arr[i]){
			if(temp1<arr[i]){
				temp2=temp1;
				temp1=arr[i];
			}
			else
				temp2=arr[i];
		}
	}
	return temp2;
}
int main(){
	int arr[5]={4,6,2,3,7};
	printf("array is : ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("second largest element is : %d",fun(arr));
	printf("\n");
	return 0;
}
