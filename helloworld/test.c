#define B "booboo"
#define X 10
#include<stdio.h>
int main(){
   int age, xp;
   char name [25];
   printf("Please enter your first name.\n");
   scanf("%s", name);
   while(getchar()!='\n'){}
   printf("All right, %s, what's your age?\n", name);
   scanf("%i", &age);
   xp = age + X;
   printf("That's a %s! You must be at least %d.\n", B, xp);
   return 0;
}
