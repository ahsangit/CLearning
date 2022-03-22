#include<stdio.h>

int main()
{
   int FN,FD,SN,SD,RN,RD;
   printf("Enter fraction1 and fraction2");
   scanf("%d/%d %d/%d",&FN,&FD,&SN,&SD);
   printf("Enter fraction2");
   scanf("%d/%d",&SN,&SD);
    RN=FN*SD+SN*FD;
    RD=FD*SD;

  printf("%d/%d",RN,RD);

}