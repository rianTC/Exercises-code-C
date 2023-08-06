#include <stdio.h>
#include <math.h>

// tong cac chu so
int main () {
	int tong;
	printf("nhap so tu nhien : ");
	scanf("%d", &tong);
	int sum = 0;
	for(int i = 0; i <= tong; i++){
		sum += i;	
	}
	printf("tong cac so tu nhien la: %d\n", sum);
	
// tong cac chu so le 	
	int tong_le;
	printf("nhap so tu nhien: ");
	scanf("%d", &tong_le);
	int so_le = 0;
	for (int i = 1; i <= tong_le; i += 2){
			so_le += i;
	}
	printf("tong so le la : %d \n", so_le);
	
//	tong cac chu so chan
	int tong_chan;
	printf("nhap so tu nhien : ");
	scanf("%d", &tong_chan);
	int so_chan = 0;
	for (int i = 0; i <= tong_chan; i += 2){
		so_chan += i;
	}
	printf("tong cac so chan la : %d \n", so_chan);
}
