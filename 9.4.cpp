#include<stdio.h>
int main(){
	int chon, phanTuSua, phanTuXoa, phanTuMoi, viTri; 
	int menu = 1;
	int size = 0; 
	int arr[100]; 
	
	while(menu){
		printf("\n1. Nhap vao mang\n"); 
		printf("2. Hien thi mang\n"); 
		printf("3. Them phan tu\n"); 
		printf("4. Sua phan tu\n"); 
		printf("5. Xoa phan tu\n"); 
		printf("6. Thoat\n");
		printf("\nLua chon cua ban: ");
		scanf("%d", &chon);
		
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
			case 4:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
				printf("nhap vi tri muon sua phan tu: ");
				scanf("%d", &viTri);
				printf("nhap phan tu muon sua: ");
				scanf("%d", &phanTuSua);
				if(viTri < 1||viTri > size +1){
					printf("vi tri khong hop le!"); 
				}else{
					arr[viTri - 1] = phanTuSua;
				}
				break; 
			case 5:
				if(size < 1){
					printf("chua khoi tao mang");
					continue;
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
				}
				break; 
		
				
			case 6: 
            	menu = 0;
				break;
			default:
				printf("sai cu phap!\n"); 
		} 
	}
	printf("\nthoat");
	return 0; 
} 


