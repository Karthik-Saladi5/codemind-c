#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='A' || a=='a' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u'| a=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}