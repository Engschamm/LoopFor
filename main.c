#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//11.4 kiem tra n co phai la so polinom 
//	int n;
//	printf("nhap n: ");
//	scanf("%d", &n);
//	int r = 0, mod;
//	 
//	while(n > 0){
//		mod = n % 10;
//		n = n / 10;
//		r = r * 10 + mod; 
//	}
//	printf("r = %d", r);
	//liet ke cac so tu 100 den 999 co tong chia het cho 3
//	#define MIN 100
//	#define MAX 999 
//	int i = MIN, tong = 0, mod;
//	while(i <= MAX){
//		int n = i; 
//		tong = 0; 
//		while(n > 0){
//			mod = n % 10;
//			n = n / 10;
//			tong += mod; 
//		} 
//		if(tong % 3 == 0){
//			printf("%d \n", i); 
//		}
//		i++;
//	}
//		//12.1 tinh tong cac so tu 1 den 100
//		int i, tong = 0; 
//		for(i = 1; i <= 100; i++){
//			tong += i; 
//		}
//			printf("%d", tong); 
		//12.2 tinh tong cac so tu nhien chia het cho 3
//		printf("nhap n: ");
//		scanf("%d", &n); 
//		int i, tong = 0; 
//		for(i = 1; i <= n; i++){
//			if(i % 3 == 0){
//			tong += i; 
//		}
//			printf("%d", tong); 
		//kiem tra n co phai la 100 so fibonancci dau tien
		int n1 = 0;
		int n2 = 1;
		int n3 = 1;
		int i; 
		for (i = 0; i < 10; i++){
			printf(" %d ", n3); 
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3; 
		}  
	return 0;
}
