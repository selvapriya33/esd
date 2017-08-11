
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
                    char shut;
             clrscr();
             printf("Are you sure to restart your computer?.Please mention it(y/n):");
             scanf("%c",&shut);

             if(ch=='y' || ch=='Y')
            {
                 system("c:\\windows\\system32\\shutdown /r");
                 system("pause");
             }
           return(0);
}
