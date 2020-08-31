/*
Nepali system Atm project
For School level
1.Checking Balance
2.Cash Withdraw
3.cash Deposit
4.Exit
Author:Ashokanand Chaudhary
email:maxashoka3@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>
int User_Balance =50000;



void Check_Balance(){
	printf("Your account balnce is %d",User_Balance);	
}
void Withdraw(){
	/*...
	Rs25 diduction per withdraw
	multiple of Rs500
	..*/
	int temp;
	int cash;
	int Withdraw;
	char bin;
	
	temp = User_Balance +25;
	//inputing the withdraw amount from user
	printf("\nEnter the amount you want withdraw\n");
	scanf("%d",&cash);
	//Validating the withdrawl amount 
	if(cash%500 == 0){
		
	if(temp>cash){
		printf("\nRs 25 will be deducted form your amount do you want to proceed\nDo you want to continue?Yes(y)|No(n)");
		scanf(" %c",&bin);
		if(bin =='y'){
		
		User_Balance = User_Balance -cash -25;
		printf("\n \n You have withdraw sucessfully the amount of %d \n\n and Your new balance is %d\n",cash,User_Balance);
	}else{
		printf("\nThanks you...");
	}
	}
	else{
		printf("\nTry again\a");
	}
}
else{
	printf("INVALID AMOUNT TO Withdraw");
	
}
}
void Deposit( ){
	int cash;
	printf("Enter the amount you want to deposit");
	scanf("%d",&cash);
	User_Balance += cash;
	printf("Your new updated balance is %d",User_Balance);
}

/*void Quit(){
	exit(1);

}
*/

//Main program

int main(){
	int choice;
	char flag;
	int pin = 1234;
	int check_pin;
	printf("Enter you pin");
	scanf("%d",&check_pin);
	//pin checking
	if(pin == check_pin){
		
	do{
	
	printf("\n1.Balance Check");
	printf("\n2.Withdraw");
	printf("\n3.Deposit");
	printf("\n4.Quit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			Check_Balance();
			break;
		case 2:
			Withdraw();
			break;
		case 3:
			Deposit();
			break;
		case 4:
			exit(1);
			break;
		case 5:
			default:
				printf("\aInvalid option..Try again..\n");
			
		
	}
	printf("\nDo you Want to continue ...? yes(Y)/No(N)\n");
	scanf(" %c",&flag);
} while(flag == 'y');
	
}
else{
	printf("\n\a \aInsert You card again\n");
}
	
	
return 0;	
}



















