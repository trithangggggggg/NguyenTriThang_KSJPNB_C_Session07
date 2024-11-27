#include <stdio.h>

int main(){
		int a[5]={0,2,4,6,8};
		int max = a[0];
		int min = a[0]; 
	int n =sizeof(a)/sizeof(a[0]); 
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max = a[i]; 
			
		}
		if(min>a[i]){
			min = a[i];
		
		}
	}
	printf("gia tri lon nhat la %d ", max);
	printf("gia tri nho nhat la %d", min); 
	return 0; 
}
