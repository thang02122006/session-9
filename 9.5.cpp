#include<stdio.h>
int main(){
	int arr[100];
	int chon, n, phanTuMoi, viTri, phanTu, snt = 1; 
	int menu = 1;
	int max = arr[0];
	int min = arr[0]; 
	int size = 0;  
	
	while(menu){
		printf("\n1. Nhap vao mang\n"); 
		printf("2. In ra mang\n"); 
		printf("3. In ra cac phan tu so chan va tinh tong\n"); 
		printf("4. In ra gia tri lon va nho nhat trong mang\n"); 
		printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
		printf("6. Nhap vao mot so va xem trong mang co bao nhieu phan tu do\n");
		printf("7. Them phan tu vao vi tri chi dinh\n"); 
		printf("8. Thoat\n");
		printf("\nLua chon cua ban: ");
		scanf("%d", &chon);
		int tong = 0;
		switch(chon){
			case 1:
			printf("nhap so phan tu cua mang: "); 
			scanf("%d", &size); 
			for(int i =0; i < size;i++){
				printf("nhap phan tu thu %d: ", i+1);
				scanf("%d", &arr[i]); 
			}
			break;
			case 2:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("\nmang cua ban la: ");
				for (int i = 0; i < size; i++) {
             	   printf("%d ", arr[i]);
            	}
            	printf("\n"); 
            break;
            case 3:
            	if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
            	printf("phan tu la so chan la: \n"); 
				for(int i = 0; i < size; i++){
					if(arr[i] % 2 == 0){
						printf("%d ", arr[i]);
						tong += arr[i]; 
					}
				} 
				printf("\ntong so chan la: %d", tong); 
				break; 
            case 4:
            	if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i =1; i < size; i++){
					if(max < arr[i]){
						max = arr[i]; 
					}
					if(min > arr[i]){
						min = arr[i]; 
					} 	
				} 
				printf("gia tri lon nhat la: %d\ngia tri nho nhat la: %d", max, min);
				break;
			case 5:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i = 0; i < size; i++){
					if(arr[i] < 2){
						snt = 0; 
					}else{
						for(int j =2; j <= i/2;j++){
							if(arr[i] % j == 0){
								snt = 0;
								break; 
							} 
						}
						
					}
					if(snt != 0){
						printf("%d ", arr[i]);
						tong += arr[i];  
					}
				}
				
				printf("tong cac so nguyen to la: %d", tong); 
			 break;
			case 6:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				phanTu = 0; 
				printf("nhap so: ");
				scanf("%d", &n); 
				for(int i = 0; i < size;i++){
					if(n == arr[i]){
						phanTu++; 
					} 
				} 
				printf("co %d phan tu la so %d trong mang!\n", phanTu, n );
				break;
			case 7:
            	if(size < 1){
					printf("chua khoi tao mang");
					continue; 
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
					}
				}
				break;  		
			case 8: 
            	menu = 0;
				break;
			default:
				printf("sai cu phap!\n"); 
		} 
	}
	printf("\nthoat"); 
	
	return 0; 
} 
