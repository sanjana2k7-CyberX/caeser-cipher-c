#include <stdio.h>
int main() 
{
char text[100];
int shift;
printf("Enter text: ");
scanf("%s", text);
printf("Enter shift: ");
scanf("%d", &shift);
for (int i = 0; text[i] != '\0'; i++) 
{
char ch = text[i];
if (ch >= 'A' && ch <= 'Z') 
{
int x = ch - 'A';
x = ((x + shift) % 26 + 26) % 26;
ch = x + 'A';
}
else if (ch >= 'a' && ch <= 'z') 
{
int x = ch - 'a';
x = ((x + shift) % 26 + 26) % 26;
ch = x + 'a';
}
text[i] = ch;
}
printf("Encrypted text: %s\n", text);
return 0;
}
