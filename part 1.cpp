#include <stdio.h>
#include <math.h>

// tong cac chu so
int main () {
	int n;
	printf("nhap so tu nhien : ");
	scanf("%d", &n);
	int sum = 0;
	for(int i = 0; i <= n; i++){
		sum += i;	
	}
	printf("dap an la: %d\n", sum);
	
// tong cac chu so le 	
	int q;
	printf("nhap so tu nhien: ");
	scanf("%d", &q);
	int so_le = 0;
	for (int i = 1; i <= n; i += 2){
			so_le += i;
	}
	printf("tong so le la : %d \n", so_le);
	
//	tong cac chu so chan
	int h;
	printf("nhap so tu nhien :");
	scanf("%d", &h);
	int so_chan = 0;
	for (int i = 0; i <= n; i += 2){
		so_chan += i;
	}
	printf("tong cac so chan la : %d \n", so_chan);
}
