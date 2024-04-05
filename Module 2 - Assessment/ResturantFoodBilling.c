#include<stdio.h>
int main()
{
  int ch,ch2,n,i1,j,k;
  float i;

  printf("Welcome to our resturant.\n\n");
  
  label: 
  printf("\n**********      MENU      **********\n");

  printf("\n\t1. Pizza        Price = 180 Rs/pcs");
  printf("\n\t2. Burger       Price = 100 Rs/pcs");
  printf("\n\t3. Dosa         Price = 120 Rs/pcs");
  printf("\n\t4. Idli         Price = 50  Rs/pcs");

  printf("\n\nPlease Enter Your Choice : ");
  scanf( "%d", &ch );
  switch(ch)
    {
      case 1:
        printf("\nYou have selected Pizza.");
        printf("\nEnter the quantity : ");
        scanf("%d",&j);
        n=180;
        printf("Amount : ");
        k=n*j;
        printf("%d",k);
        break;

      case 2:
        printf("\nYou have selected Burger.");
        printf("\nEnter the quantity : ");
        scanf("%d",&j);
        n=100;
        printf("Amount : ");
        k=n*j;
        printf("%d",k);
        break;

      case 3:
        printf("\nYou have selected Dosa.");
        printf("\nEnter the quantity : ");
        scanf("%d",&j);
        n=120;
        printf("Amount : ");
        k=n*j;
        printf("%d",k);
        break;

      case 4:
        printf("\nYou have selected Idli.");
        printf("\nEnter the quantity : ");
        scanf("%d",&j);
        n=50;
        printf("Amount : ");
        k=n*j;
        printf("%d",k);
        break;

      default:
        printf("Invalid choice\n");
        goto label;
        break;
    }

  i+=k;
  
  printf("\nTotal Amount :");
  printf("%.0f",i);

  lable2:
  printf("\n\nDo you want to order anything else? : 1.YES 2.NO : ");
  scanf("%d",&ch2);
  switch(ch2)
    {
      case 1:
        goto label;
        break;

      case 2:
        printf("Thank you for visiting our resturant.");
        break;

      default:
        printf("Invalid choice.");
        goto lable2;
        break;
    }

  
}