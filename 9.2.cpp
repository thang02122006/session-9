#include<stdio.h>
int main(){
	int arr[100];
	int size, phanTuSua, viTri;
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
	printf("nhap vi tri muon sua phan tu: ");
	scanf("%d", &viTri);
	printf("nhap phan tu muon sua: ");
	scanf("%d", &phanTuSua);
	if(viTri < 1||viTri > size +1){
		printf("vi tri khong hop le!"); 
	}else{
		arr[viTri - 1] = phanTuSua;
		
		printf("mang sau khi da sua : ");
		for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n"); 
    }
	 
	return 0; 
} 
