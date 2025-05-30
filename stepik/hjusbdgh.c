#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
double product_price;     // цена товара
double product_quantity;  // кол-во приобретаемого товара

double purchase_cost;     // стоимость покупки

scanf("%lf", &product_price);
scanf("%lf", &product_quantity);

purchase_cost = product_price * product_quantity;

if(purchase_cost > 1000)  // если стоимость покупки превышает 1000 руб.
{
   purchase_cost = purchase_cost * 0.85;     // сделать скидку на 15%   
}

printf("%lf", purchase_cost);
return 0;

}
