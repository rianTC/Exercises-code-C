#include <stdio.h>
void nhapN(int &integer) {
	printf("Nhap so nguyen: ");
	scanf("%d", &integer);
	if(integer < 0 && integer > 100)
		printf("nhap lai");
}

void NhapMang(int array[],int integer) {
	for(int i = 0; i < integer; i++) {
		printf("Nhap gia tri a[%d] = ", i);
		scanf("%d", &array[i]);
	}
}

void xuatMang(int array[], int integer) {
	for(int i = 0; i < integer; i++)
		printf("%d ",array[i]);
}

int GiaTriLonNhat(int array[], int integer) {
	int max = array[0];
	for(int i = 0; i < integer; i++)
		if(max < array[i])
			max = array[i];
	return max;
}

int vitrilonnhat(int array[], int integer) {
	int dem = 0;
	for(int i = 0; i < integer; i++)
		if(array[dem] < array[i])
			dem = i;
	return dem;
}

int main(){
	int n, arr[100];
	nhapN(n);
	NhapMang(arr,n);
	xuatMang(arr,n);
	printf("\nGia tri lon nhat la %d", GiaTriLonNhat(arr,n));
	printf("\nvi tri lon nhat la %d", vitrilonnhat(arr,n));
	return 0;
}
