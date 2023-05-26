#include<conio.h>
#include<stdio.h>
void main ()
{

float units;
float units_bill;
float subcharge;
float elec_bill;

clrscr();

printf("************************************************\n");
printf("\n***************-Electric Bill-******************\n");
printf("\n************************************************\n");

printf("\nEnter the units : ");
scanf("%f",&units);

if (units <= 50) {
      units_bill = units*0.5;
}
else if (units <= 100) {
      units_bill = 25 + ( ( units-50 ) * 0.75 );
}
else if(units <= 250){
     units_bill=100+((units-150)*1.2);
}
else{
     units_bill=220+((units-250)*1.5);
}

subcharge= units_bill * 0.2;
units_bill += subcharge;

printf("Electricity Bill %.2f",units_bill);

getch();

}