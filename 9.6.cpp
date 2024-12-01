#include<stdio.h>
int main(){
	int arr[100][100]; 
	int menu = 1;
	int chon, maxHang; 
	int rows = 0, cols = 0;  
	
	while(menu){
		printf("\n1. Nhap vao mang 2 chieu\n"); 
		printf("2. In ra mang\n"); 
		printf("3. In ra cac phan tu so le va tinh tong\n"); 
		printf("4. In phan tu o bien va tinh tich\n"); 
		printf("5. In In duong cheo chinh\n");
		printf("6. In duong cheo phu\n");
		printf("7. hang co tong lon nhat\n"); 
		printf("8. Thoat\n");
		printf("\nLua chon cua ban: ");
		scanf("%d", &chon);
		int phanTuThu = 1, tong = 0, maxTong = 0;
		long long tich = 1; 
		switch(chon){
			case 1:
				printf("nhap so hang cua mang 2 chieu: ");
				scanf("%d", &rows);
				printf("nhap so cot cua mang 2 chieu: ");
				scanf("%d", &cols);
				for(int i = 0; i < rows; i++){
					for(int j =0; j < cols; j++){
						printf("nhap phan tu thu %d cua mang: ", phanTuThu++);
						scanf("%d", &arr[i][j]); 
					} 
				} 
			break;
			case 2:
				if(rows < 1||cols< 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i = 0; i < rows; i++){
					for(int j =0; j < cols; j++){
						printf("%d ", arr[i][j]);
					}
					printf("\n"); 
				}
            break;
            case 3:
            	if(rows < 1||cols< 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for(int i = 0; i < rows; i++){
					for(int j =0; j < cols; j++){
						if(arr[i][j] % 2 != 0){
							printf("%d ", arr[i][j]);
							tong += arr[i][j]; 
						}
					}
				}
				printf("\ntong cac so le trong mang 2 chieu: %d", tong); 
				break; 
            case 4:
            	 if(rows < 1||cols< 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for (int j = 0; j < cols; j++) {
			        printf("%d ", arr[0][j]);
			        tich *= arr[0][j]; 
			    }
			
			    for (int i = 1; i < rows - 1; i++) {
			        printf("%d ", arr[i][0]);
					tich *=arr[i][0];  
			        if (cols > 1) {
			            printf("%d ", arr[i][cols - 1]);
			            tich *= arr[i][cols -1]; 
			        }
			    }
			    if (rows > 1) {
			        for (int j = 0; j < cols; j++) {
			            printf("%d ", arr[rows - 1][j]);
			            tich *= arr[rows - 1][j];
			        }
			    }
			    
			    printf("\ntich bien cua mang la: %lld", tich); 
            	break; 
			case 5:
				if(rows < 1||cols< 1){
					printf("chua khoi tao mang");
					continue; 
				}
				if(rows != cols){
					printf("mang khong co duong cheo chinh");
					continue;
				}
				printf("\n"); 
				for(int i = 0; i < rows; i++){
					for(int j = 0; j < cols; j++){
						if(i == j){
							printf("%d ", arr[i][j]); 
						} 
					} 
				} 
				break;
			case 6:
				if(rows < 1||cols< 1){
					printf("chua khoi tao mang");
					continue; 
				}
				if(rows != cols){
					printf("mang khong co duong cheo chinh");
					continue;
				}
				printf("\n");
				for (int i = 0; i < rows; i++) {
		        printf("%d ", arr[i][rows - i - 1]);
		    	}
				break;
			case 7:
				if(rows < 1||cols< 1){
					printf("chua khoi tao mang");
					continue; 
				}
				for (int i = 0; i < rows; i++) {
			        int tongHang = 0;
			        for (int j = 0; j < cols; j++) {
			            tongHang += arr[i][j];
			        }
			
			        if (i == 0 || tongHang > maxTong) {
			            maxTong = tongHang; 
			            maxHang = i;
			        }
			    }
			    for (int j = 0; j < cols; j++) {
			        printf("%d ", arr[maxHang][j]);
			    }
			    printf("\n"); 
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
