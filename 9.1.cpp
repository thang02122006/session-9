#include<stdio.h>
int main(){
	int arr[100];
	int size, phanTuMoi, viTri;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &size);
	if(size < 0||size > 100){
		printf("loi!");
		return 1; 
	} 
	for(int i =0; i < size;i++){
		printf("nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]); 
	}
	if(size >= 100){
		printf("mang da day!"); 
	} else{
		printf("nhap vi tri muon them phan tu: ");
		scanf("%d", &viTri);
		printf("nhap phan tu muon them: ");
		scanf("%d", &phanTuMoi);
		if(viTri < 1||viTri > size +1){
			printf("vi tri khong hop le!"); 
		}else{
			for(int i = size; i >=viTri;i--){
				arr[i] = arr[i -1]; 
			} 
			arr[viTri - 1] = phanTuMoi;
			size++;
			
			printf("mang sau khi da them : ");
			for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
			 
		} 
	}
	 
	return 0; 
} 
