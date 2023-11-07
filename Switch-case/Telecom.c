//1. WAP to create/simulate telecom call service conversation
//scenario using nested switch case.

#include<stdio.h>

int main()
{
	int choise;
	
	printf("Hello sir/madam\n");
	
	printf("For call end press : 0\nFor call continue press : 1\n");
	scanf("%d",&choise);
	
	switch(choise)
	{
		case 0 : printf("Call is end");
		break;
		case 1 : printf("Call is Continue\n");
		
		printf("\nSelect your language\n");
		printf("\nFor English press - 1");
		printf("\nFor Hindi press - 2");
		printf("\nFor Gujarati press - 3");
		
		printf("\nEnter the number (1,2,3) to select your number : ");
		scanf("%d",&choise);
		
		switch(choise)
		{
			case 1 : printf("\nEnglish");
			
			printf("\nSelect your service\n");
			printf("\nRegister complain - 1");
			printf("\nTalk to customer care - 2");
			printf("\nInquiry for more services - 3\n");
			
			printf("Enter the number to choose your service : ");
			scanf("%d",&choise);
			
			switch(choise)
			{
				case 1 : printf("\nRegister complain\n");
				break;
				case 2 : printf("\nTalk to customer care\n");
				break;
				case 3 : printf("\nInquiry for more services\n");
				break;
			}
			break;
			
			case 2 : printf("\nHindi");
			
			printf("\nseva chunne ke liye number darj karen\n");
			printf("\nShikayat darj karen - 1");
			printf("\ncustomer care se baat karen - 2");
			printf("\nAdhik seva ke liye puchtach karen - 3\n");
			
			printf("Apni seva chunne ke liye number darj karen : ");
			scanf("%d",&choise);
			
			switch(choise)
			{
				case 1 : printf("\nShikayat darj karen\n");
				break;
				case 2 : printf("\ncustomer care se baat karen\n");
				break;
				case 3 : printf("\nAdhik seva ke liye puchtach karen\n");
				break;
			}
			break;
			
			case 3 : printf("Gujarati");
			
			printf("\nseva melavva mate number batavo\n");
			printf("\nFariyad darj karo - 1");
			printf("\ncustomer care sathe vat karo - 2");
			printf("\nVadhu seva mate puchparch karo - 3\n");
			
			printf("Apni seva pasand karva mate number darj karo : ");
			scanf("%d",&choise);
			
			switch(choise)
			{
				case 1 : printf("\nFariyad darj karo\n");
				break;
				case 2 : printf("\ncustomer care sathe vat karo\n");
				break;
				case 3 : printf("\nVadhu seva mate puchparch karo\n");
				break;
			}
			break;
		}
	}
	
	return 0;
}
