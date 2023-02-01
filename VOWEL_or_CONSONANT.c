#include<stdio.h>
int voc(char a)
{
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    return 1;
    else
    return 0;
}
int main()
{
    char a;
    scanf("%c",&a);
    int x=voc(a);
    if (x==1)
    printf("VOWEL");
    else if(x==0)
    printf("CONSONANT");
}