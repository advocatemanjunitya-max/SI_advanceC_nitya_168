include<stdio.h>

int main()
{
    int productID[8] = {101,104,105,106,107,108,109,110};

    char brand[8][20] = {
        "Nike","Adidas","Puma","Levis","Zara",
        "HM","Roadster","USPolo",
    };

    int price[8] = {500,1200,800,1000,1500,
                     1800,600,2500,};

    int stock[8] = {20,12,18,
                     25,30,8,14,16};

    int cart[8] = {0};

    int id, qty, i, total = 0, found;

    do
    {
        printf("\n===== RELIANCE TRENDS INVENTORY =====\n");
        printf("ID  Brand        Price   Stock\n");

        for(i = 0; i < 8; i++)
        {
            printf("%d  %s  %d  %d\n",
                   productID[i], brand[i], price[i], stock[i]);
        }

        printf("\nEnter Product ID (0 for Bill): ");
        scanf("%d", &id);

        if(id == 0)
            break;

        found = 0;

        for(i = 0; i <8; i++)
        {
            if(id == productID[i])
            {
                found = 1;

                printf("Selected Brand: %s\n", brand[i]);
                printf("Available Stock: %d\n", stock[i]);

                printf("Enter Quantity: ");
                scanf("%d", &qty);

                if(qty <= stock[i])
                {
                    cart[i] += qty;
                    stock[i] -= qty;
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
    printf("ID  Brand        Qty  Amount\n");

    for(i = 0; i <8; i++)
    {
        if(cart[i] > 0)
        {
            int amount = cart[i] * price[i];

            printf("%d  %s  %d  %d\n",
                   productID[i],
                   brand[i],
                   cart[i],
                   amount);

            total += amount;
        }
    }

    printf("\n----------------------------------");
    printf("\nTotal Amount = Rs.%d", total);
    printf("\nThank You For Shopping!\n");

    return 0;
}