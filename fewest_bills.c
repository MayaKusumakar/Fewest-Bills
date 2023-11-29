

#include <stdio.h>

int main()
{
    int amt;
    int totalBills;
printf("Please enter the amount of money you wish to withdraw: ");
scanf("%d",&amt);
totalBills = amt/100;
printf("You received %d hundred(s)\n",totalBills);
amt = amt - (100*totalBills);
totalBills = amt/50;
printf("You received %d fifty(s)\n",totalBills);
amt = amt - (50*totalBills);
totalBills = amt/20;
printf("You received %d twenty(s) \n",totalBills);
amt = amt - (20*totalBills);
totalBills = amt/10;
printf("You received %d ten(s)\n",totalBills);
amt = amt - (10*totalBills);
totalBills = amt/5;
printf("You received %d five(s)\n",totalBills);
amt = amt - (5*totalBills);
printf("You received %d one(s)\n",amt);
}
