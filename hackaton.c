#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	char	*nbr;
	char	*type;
	int		ppl;
	int		dollar;

	ppl = 0;
	dollar = 0;
	nbr = calloc(1, 10);
	type = calloc(1, 10);
	while (ppl == 0)
	{
		sleep(1);
		printf("\nHow many people to set the table for: ");
		scanf("%s", nbr);
		sleep(1);
		ppl = atoi(nbr);
		if (ppl != 0)
			break ;
		printf("\nI dont understand =(\n");
		sleep(1);
		printf("\nPlease again.\n");
		sleep(1);
	}
	while (dollar == 0)
	{
		printf("\nMeat, vegetables or desert dishes would you like?(set 1, 2 or 3 number): ");
		scanf("%s", type);
		sleep(1);
		dollar = atoi(type);
		if (dollar > 3)
		{
			printf("\nUnderstood.\n");
			sleep(1);
			printf("\nSet your dishes to Breakfast From Chef.\n");
			sleep(1);
			dollar = 4;
		}
		if (dollar != 0)
			break ;
		printf("\nNo! No! No!\n");
		sleep(1);
		printf("\nPlease again.\n");
		sleep(1);
	}
	printf("\nСalculations are in progress...\n");
	sleep(1);
	printf("\nTable reserved.\n");
	sleep(1);
	printf("%s\n", "\nBon appetit! :D");
	return (0);
}
