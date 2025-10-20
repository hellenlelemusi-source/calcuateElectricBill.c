/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;function to calculate electric bill
*/
#include<stdio.h>
//function prototype
float calculateElectricBill(int units);
float bill=0;

void main(){
int units;

	//function call
	printf("enter the number of units consumed:");
	scanf("%d",&units);
	float totalbill=calculateElectricBill(units);
	printf("total bill=KSH.%.2f\n",totalbill);
	
	return 0;
}

//function declaration
float calculateElectricBill(int units){
float bill=0;
if (units<=100){
bill=units*10;
}
 else if (units<=200){
bill=(100*10)+(units-100)*15;
}
else {
bill=(100*10)+(100*15)+(units-200)*20;
}
return bill;
}