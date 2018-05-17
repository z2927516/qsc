#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int HomeWork,Sum;/*宣告變數*/ 
int main(int argc, char *argv[]) 
{
	for(HomeWork=0;HomeWork<10;HomeWork++)/*從0加到9*/
	{
		Sum=Sum+HomeWork;/*計算總和*/ 
	}
	printf("s=%d",Sum);/*印出總和*/ 
	return 0;
}
