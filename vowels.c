#include <stdio.h>
#include <conio.h>
int main()
{
char c;
printf("Enter a Character: ");
scanf("%c", &a);
if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
printf("%c is a Vowel\n",a);
else
printf("%c is a Consonant\n",a);
getch();
return 0;
}
