#include<stdio.h>
void main()
{
 char ch;
 printf("enter the character :");
 scanf("%c",&ch);
 if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='U'||ch=='u'){
    printf("vowel");
 }
 else{printf("this is not vowel");}
}
