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
	return 0;
}
void insertSort(int* test,int ){

}