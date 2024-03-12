#include<stdio.h>
main()
{
	int days;
	float fine=0;

	printf("Enter the number of days the book is returned late\n");
	scanf("%d",&days);

	if(days <=0)
	{
		printf("Book is returned on time\n");
	}
	else
	{
		if(days <=5)
			fine = 0.5 * days;

		else if(days > 5 && days<=10)
			fine = 0.5 * 5 + (days-5) * 1;

		else if(days>10 && days<=30)
			fine =0.5 * 5 + 5 * 1 + (days - 10)*5;

		else
			printf("Membership is cancelled\n");
	}
	printf("Fine = %f\n",fine);
}

