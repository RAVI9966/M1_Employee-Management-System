#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define Employee struct emp

void add(FILE * fp); //to add to list
FILE * del(FILE * fp);//to delete from list
void modify(FILE * fp);//to modify a record
void displayList(FILE * fp);//display whole list
void searchRecord(FILE *fp);//find a particular record
void printChar(char ch,int n);//printing a character ch n times
void printHead();


struct emp
{
    int id;
    char name[100];
    float sal;
    char psaddr[200];
    char prtaddr[200];
    char phone[15];
    char mail[20];
};


int main()
{
 FILE * fp;
 Employee e;
int option;
char another;

if((fp=fopen("employeeInfo.txt","rb+"))==NULL) 
{
    if((fp=fopen("employeeInfo.txt","wb+"))==NULL)
       {
           printf("can't open file");
           return 0;
       }
}
char username[10],password[10];
printHead();
welcome();
printHead();
printf("\n\t\t\t\t  Login Screen");
printf("\n\t\t\t      Enter Your Credential");
printf("\n\n\n\t\tUsername: ");
scanf("%s",username);
printf("\n\t\tPassword: ");
int i;
i=0;
	do
	{
		password[i] = getch();
		if(password[i] == 13 )
		{
			break;
		}
		else if(password[i]==8 && i>0)
		{
			printf("%c%c%c",8,32,8);
			i--;
		}
		else
		{
			printf("*");
			i++;
		}
	}while(password[i]!=13);
	password[i] = '\0';

if(((strcasecmp(username,"admin"))==0)&&((strcasecmp(password,"pass")==0)))
{
    while(1)
{
    printHead();
    printf("\n\t\t\t\tMain Menu");
    printf("\n\n\n");


    printf("\n\n\t\t\t1. Add Employee");
    printf("\n\n\t\t\t2. Delete Employee");
    printf("\n\n\t\t\t3. Modify Employee");
    printf("\n\n\t\t\t4. Display Employee List");
    printf("\n\n\t\t\t5. Search Record");
    printf("\n\n\t\t\t6. Display Basic Info");
    printf("\n\n\t\t\t0. EXIT");

    printf("\n\n\t\tEnter Your Option :--> ");
    scanf("%d",&option);

    switch(option)
    {
        case 0: return 1;
                break;
        case 1: add(fp);
                break;
        case 2: fp=del(fp);
                break;
        case 3: modify(fp);
                break;
        case 4: displayList(fp);
                break;
        case 5: searchRecord(fp);
                break;
        case 6: displaybasic(fp);
                break;
        default: printf("\n\t\tYou Pressed wrong key");
                  printf("\n\t\tProgram terminated");
                  getch();
                  exit(0);

    }
}
}
else {
    printf("\n\t\tLogin Failed");
}


return 1;

}

//====Welcome Screen=====
void welcome()
{
    printf("\n\n\n\n\n\t\t[ [ [ WELCOME TO OUR EMPLOYEE MANAGEMENT SYSTEM ] ] ]\n\n\n\n\n\n\n\t");
    system("pause");
}


//----printing character ch at n times ------

void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}

//-----Printing Head Line of the program -----

void printHead()
{ system("cls");
printf("\t");
printChar('=',65);
printf("\n\t");
printChar('=',16);
printf("[EMPLOYEE] [MANAGEMENT] [SYSTEM]");
printChar('=',16);
printf("\n\t");
printChar('=',65);

}
