#include "complex.h"



void addMov()
{
	struct book b;
	char op;
	FILE *fp;
	printf("Enter Movie Booking Number (XXXX): ");	
	scanf("%d",&b.mnum);
	while(b.mnum<1||b.mnum>9999)
	{
		printf("Re-enter Movie Booking Number! It should be between 0001 to 9999!: ");	
		scanf("%d",&b.mnum);
	};
	printf("Enter Name of Customer: ");	
	gets(b.customername);
	gets(b.customername);
	printf("Enter Name of Movie: ");	
	gets(b.moviename);
	printf("Enter Movie Schedule (DD-MM-YYYY): ");	
	gets(b.mdate);
	printf("Enter Time (XXXX): ");	
	scanf("%d",&b.mtime);
	while(b.mtime<1000||b.mtime>2300)
	{
		printf("Re-enetr Time! It should be in 24-hour format and between 1000 to 2300!: ");	
		scanf("%d",&b.mtime);
	};
	printf("Enter Number of Guests: ");	
	scanf("%d",&b.guestsnum);
	printf("Enter Ticket Type: ");
	scanf("%s",b.ttype);
	printf("Enter Total Fee: ");
	scanf("%d",&b.fee);
	fp=fopen("ticket.txt","a");
	if(fp == NULL)
	{
		printf("File not found!");
	}
	else
	{
		fprintf(fp,"%d\n%s\n%s\n%s\n%d\n%d\n%d\n%s\n%d\n\n",b.mnum,b.customername,b.moviename,b.mdate,b.mtime,b.guestsnum,b.housenum,b.ttype,b.fee);
		printf("Record insert sucessful!");
	}
	printf("\n");
	fclose(fp);
	do
	{
		printf("Add another record (y/n)?");
		scanf("%s",&op);
		switch(op)
		{
			case 'y':
				printf("\n");
				addMov();
			case 'n':
				printf("\n");
				main();
			default:
				printf("Please select (y) or (n)!\n");
		}
	} while(op!='n');
}

void dispMov()
{
	char ch;
	FILE *fp;
	printf("\n");
	fp = fopen("ticket.txt","r");
	if(fp == NULL)
	{
		printf("File not found!");
		
	}
	else
	{	
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
	}
	fclose(fp);	
}

void findMov()
{   
    char op;
	char bk[100],line[250];
	char bnum[250],customername[250],moviename[250],mdate[250],mtime[250],guestsnum[250],housenum[250],ttype[250],fee[250];
	struct book b;
	printf("Enter booking number: ");
	scanf("%s",bk);
	FILE *fp;
	fp =fopen("ticket.txt","r");
	if (fp==NULL)
 	{	
	    printf("File not found!");
    }
	else
	{	
		while (fscanf(fp,"%s",bnum) != EOF)
		{
			if (strcmp(bk,bnum)==0)
    		{	  	
			  	printf("\nRecord found.\n\nBooking number: %s", bnum);
				fgets(line,250,fp); //skipping to new line
				fgets(customername,250,fp);
				printf("\nName: %s",customername);
				fgets(moviename,250,fp);
			  	printf("Movie name: %s",moviename);
			    fgets(mdate,250,fp);
			  	printf("Movie Schedule : %s", mdate);
			  	fgets(mtime,250,fp);
			  	printf("Time: %s",mtime);
				fgets(fee,250,fp);
				printf("Total fee: %s",fee);
			}
			else
			{
				printf("\nRecord not found!");
				break;
			}
  		}
	}
	do
	{
		printf("\nFind another record (y/n)?");
		scanf("%s",&op);
		switch(op)
		{
			case 'y':
				printf("\n");
				findMov();
			case 'n':
				printf("\n");
				main();
			default:
				printf("Please select (y) or (n)!\n");
		}
	} while(op!='n');	   	
}	

void showmovie()
{
	printf("\nChoose movie:\n\n");
	int option;
	printf("1.Sports movie\n");
	scanf("%d", &option);
	switch(option)
	{
		case 1:
		printf("1.83 movie\n");
		printf("1.MS Dhoni movie\n");
			scanf("%d",&option);
			switch(option)
			{
				case 1:
					printf("\n");
					main();
				case 2:
					printf("\n");4
					showmovie();
				default:
					printf("Please select (1) or (2)!\n");
			} while(option!=1);
			break;
		case 2:
			main();
		default:
			printf("Please select correct number !");
	} while(option!=2);
}
