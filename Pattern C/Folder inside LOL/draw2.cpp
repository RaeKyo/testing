#include <stdio.h>
// Just get the row > 1 & <10
int main(){
	int row,column;
	printf ("Enter row :");
	scanf("%d",&row);
	printf ("\nEnter column :");
	scanf("%d",&column);
	
	for (int i=0;i<=row;i++){
		printf("\t");
		for (int j=1;j<=column;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	printf("This is the box %d x %d ~",row , column);
	printf("\nNoice :D");
	getchar();
	return 0;

}
