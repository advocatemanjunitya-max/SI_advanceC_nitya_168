#include <stdio.h>
struct Product
{
    int productID;
    char brand[20];
    int price;
    int stock;
    int cart;
};
int main()
{
struct Product products[10] =
{
{101, "puma",     500, 20, 0},
{104, "Adidas",  1200, 12, 0},
{105, "mango",    800, 18, 0},
{106, "Levis",   1000, 30, 0},
{107, "Zara",    1500, 12, 0},
{108, "HM",      1800, 25, 0},
{109, "Roadster", 600, 30, 0},
{110, "USPolo",  2500, 8,  0},
{111, "nike",    3000, 14, 0},
{112, "biba",    1500, 16, 0}
};

int id, qty, i, total = 0, found;

do
{
printf("\n===== RELIANCE TRENDS INVENTORY =====\n");
printf("ID\tBrand\t\tPrice\tStock\n");
for(i = 0; i < 10; i++)
{
    printf("%d\t%-10s\t%d\t%d\n",
    products[i].productID,
    products[i].brand,
    products[i].price,
    products[i].stock);
    }
printf("\nEnter Product ID (0 for Bill): ");
scanf("%d", &id);

if(id == 0)
    break;
found = 0;
for(i = 0; i < 10; i++)
{
if(id == products[i].productID)
{
    found = 1;

printf("Selected Brand: %s\n", products[i].brand);
printf("Available Stock: %d\n", products[i].stock);
printf("Enter Quantity: ");
scanf("%d", &qty);
if(qty <= products[i].stock)
{
products[i].cart += qty;
products[i].stock -= qty;
printf("Added to Cart Successfully!\n");
}
else
{
printf("Insufficient Stock!\n");
}
break;
}
 }

if(found == 0)
{
printf("Invalid Product ID!\n");
}
} while(1);

printf("\n\n========== E-RECEIPT ==========\n");
printf("ID\tBrand\t\tQty\tAmount\n");
for(i = 0; i < 10; i++)
{
if(products[i].cart > 0)
{
int amount = products[i].cart * products[i].price;
printf("%d\t%-10s\t%d\t%d\n",
    products[i].productID,
    products[i].brand,
    products[i].cart,
    amount);
    total += amount;
        }
    }

    printf("\n----------------------------------");
    printf("\nTotal Amount = Rs.%d", total);
    printf("\nThank You For Shopping!\n");

    return 0;
}