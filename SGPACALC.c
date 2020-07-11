#include<stdio.h>
int main()
{
	float n,sgpa,per,perc,gpa,sum=0,credit;
	int ch,i,count,arr[50];
	char cont;
	do{
		
	
	printf("**********SPPU PUNE SGPA CALCULATOR**********\n");
	printf("What You Want To Calculate:-\n");
	printf("1) SGPA to Percent :-\n");
	printf("2) Percent to SGPA:-\n");
	printf("3) Sem wise pointer:-\n");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			printf("Enter SGPA :-\n");
			scanf("%f",&sgpa);
			per=sgpa*8.8;
			printf("Percent:-%f\n",per);
			break;
		case 2:
			printf("Enter Your Percent :-\n");
			scanf("%f",&perc);
			n=perc/8.8;
			printf("SGPA:- %f",n);
			break;
			
		case 3:
			printf("Enter Count of Grade points:-\n");
			scanf("%d",&count);
			printf("Enter Total Credit Points:-\n");
			scanf("%f",&credit);
			printf("Enter Grade Points:-\n");
			for(i=0;i<count;i++)
			{
				scanf("%d",&arr[i]);
			}
			for(i=0;i<count;i++)
			{
				sum=sum+arr[i];
			}
			gpa=sum/credit;
			printf("SGPA is :-%f",gpa);
			break;
		default :
			printf("\nEnter Choice in between 1 to 3");	
}
	printf("\nYou want to continue(y/n) ?\n");
	fflush(stdin);
	scanf("%c",&cont);
}while(cont=='y'||cont=='Y');
	
	return 0;
}
