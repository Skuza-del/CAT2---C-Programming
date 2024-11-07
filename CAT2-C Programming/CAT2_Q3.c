/*
Name:Otieno Samwel Amos
Reg no:CT101/G/21435/24
*/
#include<stdio.h>
int main(){
	float hours_worked, gross_pay, hourly_wage, taxes,net_pay, overtime_hours,$600;
	printf("Enter the hours_worked: ");
	scanf("%lf \n",hours_worked);
	printf("Enter the hourly_wage: ");
	scanf("%lf \n", hourly_wage);
	//calculate the gross_pay
	if (hours_worked > 40){
		float regular_hours = 40;
		overtime_hours = hours_worked - 40;
		float overtime_pay = 0;
		float regular_pay = regular_hours * hourly_wage;
		gross_pay = regular_pay + overtime_pay;
	}
	if (gross_pay <=$600){
		taxes = gross_pay * 0.15;
	}
	else{taxes = $600 * 0.15 + (gross_pay - $600) * 0.20;
	}
net_pay = gross_pay - taxes;
printf("gross_pay %f \n", gross_pay);
printf("taxes %f \n", taxes);
printf("net_pay %f \n", net_pay);

return 0;
}