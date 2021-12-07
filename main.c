#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void Info();
int Choice();
void Diposit();
void Withdraw();
void Transfer();
void Detail();
void DisplayAll();
 int totalAmount=0 ;
 int deposit=0;
 int withdraw=0;
 int transfer =0;

  int totalDiposit=0;
 int totalWith =0;
 int totalTrans =0;

 char Acc[50];
 char name[50];
int main()
{

 
 Info();

    while(1){
        system("cls");
        switch(Choice()){

                            case 1:Diposit(); break;
                            case 2:Withdraw();break;
                            case 3:Transfer();break;
                            case 4: DisplayAll(); getchar();break;
                            case 5:exit(1);
                            default:printf("\nInvalid input! ");
                        }
            getchar();

           }

    return 0;
}

int Choice(){
    int ch;
 printf("*****************************");
 printf("\n1. Enter Diposit Amount  ");
 printf("\n2. Enter Withdraw Amount  ");
 printf("\n3. Enter Transfer Amount  ");
 printf("\n4. Enter for Detail  ");
 printf("\n5. Enter to Exit  ");
 printf("\n\n Enter a Number 1 to 5 :");
 scanf("%d",&ch);
 return ch;
}
void Diposit(){
 printf("\nEnter diposit Amount : ");
 scanf("%d",&deposit);
 totalDiposit +=deposit;
 totalAmount += deposit;
}
void Withdraw(){
 printf("\nEnter Withdraw Amount : ");
 scanf("%d",&withdraw);
 if(totalAmount < withdraw){
    printf("\nBalance is low, so can't withdraw ");
 }else{
     totalWith +=withdraw;
 totalAmount -=withdraw;
 }
}

void Transfer(){
 printf("\nEnter Transfer Amount : ");
 scanf("%d",&transfer);
 if(totalAmount < transfer){
    printf("\nBalance is Low , so can't transfer ");
 }else{
     totalTrans +=transfer;
 totalAmount -=transfer;
 }

}

void Detail(){
 printf("\nTotal Amount = %d ",totalAmount);
 printf("\nDiposit Amount = %d",totalDiposit);
 printf("\nWithdraw Amount = %d ",totalWith);
 printf("\nTransfer Amount = %d ",totalTrans);
 printf("\nHELLO WORLD");
}

void Info(){
  printf("Enter Your Name : ");
 gets(name);

  printf("Enter Account Number : ");
 gets(Acc);

 printf("Enter your Initial Amount : ");
 scanf("%d",&totalAmount);
}
void DisplayAll(){

  printf("***************************************");
  printf("\nname = %s ",name);
  printf("\nAccount Number = %s",Acc);
   printf("\nTotal Amount = %d ",totalAmount);
 printf("\nDiposit Amount = %d",totalDiposit);
 printf("\nWithdraw Amount = %d ",totalWith);
 printf("\nTransfer Amount = %d ",totalTrans);
   printf("\n***************************************");

}
