# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
	void insertSort(int*,int);
	int test[20];
	srand((unsigned)time(NULL));
	int i=0;
	printf("raw data:\n");
	for(;i<20;i++){
		test[i]=rand()%101;
		printf("%d ",test[i]);
	}
	printf("\nsorted data:\n");
	insertSort(test,19);
	for(i=0;i<20;i++)printf("%d ",test[i]);
	printf("\n");
	return 0;
}
void insertSort(int* test,int high){
	if(high==0)return;
	else{
		insertSort(test,high-1);
		int i;
		int temp=test[high];
		i=high-1;
		for(;i>=0&&test[i]>temp;i--)test[i+1]=test[i];
		test[i+1]=temp;
	}
}