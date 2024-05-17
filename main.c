#include <stdio.h>

int main() {
  char name; 
  char product;
  int price;
  int quantity;
  int x;

  printf("Hello, what is your name?: ");
  scanf("%c", &name);
  printf("Hello, what is the product?: ");
  scanf("%c", &product);
  printf("Hello, what is the price?: ");
  scanf("%d", &price);
  printf("Hello, what is the quantity?: ");
  scanf("%d", &quantity);  

  for (x = 1; x <= quantity; x++) {
	  printf("%c, %d", product, price);
      }

return 0;
}
