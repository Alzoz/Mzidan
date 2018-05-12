#include <stdio.h>
#include <stdlib.h>


void Print_Sequence (unsigned int start, unsigned int end);
void Find_Sequence (unsigned int x);


int main()
{
    unsigned int ZZ;
    printf("ENTER SEQ VAL. : \n",ZZ);
    scanf("%d",ZZ);

Find_Sequence(ZZ);

return 0;
}
void Print_Sequence (unsigned int start, unsigned int end)
{
   unsigned int k;
   printf("start of seq:\n");

   for (k=start; k<=end; k++){
    printf("%d ",k);
   }

   printf(". end\n");
}

void Find_Sequence (unsigned int x)
{
   unsigned int Sum;
   unsigned int i,j;


   for(i = 0; i<=x; i++)
   {
       Sum=0;
      for ( j=i ; j<=x ; j++)
      {
          Sum+=j;
          if (Sum == x)
            {
            Print_Sequence(i,j);
          break;
            }
          if (Sum > x)
          {
             break;
          }
      }
   }



}


