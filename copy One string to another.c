#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter the string: ");
    gets(str1);
    printf("\n The String is successfully copied");
    printf("\n The first String is : %s", str1);
    strcpy(str2, str1);
    printf("\n The copied String is : %s", str2);
    getch();
    return 0;
}
