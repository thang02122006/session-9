#include<stdio.h>
int main(){
	int arr[100];
	int size, phanTuXoa, viTri;
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
	printf("nhap vi tri muon xoa phan tu: ");
	scanf("%d", &viTri);
	if(viTri < 1||viTri > size +1){
		printf("vi tri khong hop le!"); 
	}else{
		for(int i = viTri - 1; i <= size;i++){
			arr[i] = arr[i + 1]; 
		} 
		size--; 
		
		printf("mang sau khi da xoa : ");
		for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
		 
	} 
	 
	return 0; 
} 
