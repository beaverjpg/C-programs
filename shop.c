#include <stdio.h>
#include <string.h>

int main()
{
    char choice[100];
    printf("Choose your preferred product: ");
    scanf("%s", choice);

    int n = 0;

    if (strcmp(choice, "shoe") == 0)
    {
        n = 1;
    }
    else if (strcmp(choice, "dress") == 0)
    {
        n = 2;
    }
    else if (strcmp(choice, "bag") == 0)
    {
        n = 3;
    }

    switch (n)
    {
        case 1:
        {
            char s[100];

            printf("Choose the brand you prefer:\n");
            printf("Reebok\nNike\nPuma\n");

            scanf("%s", s);

            int num = 0;

            if (strcmp(s, "Reebok") == 0)
            {
                num = 1;
            }
            else if (strcmp(s, "Nike") == 0)
            {
                num = 2;
            }
            else if (strcmp(s, "Puma") == 0)
            {
                num = 3;
            }

            switch (num)
            {
                case 1:
                {
                    char model[100];

                    printf("Choose the model:\n");
                    printf("Reebok Nano X5\n");
                    printf("Reebok FloatZig 1\n");
                    printf("Reebok Club C 85\n");

                    scanf(" %[^\n]", model);

                    int num1 = 0;

                    if (strcmp(model, "Reebok Nano X5") == 0)
                    {
                        num1 = 1;
                    }
                    else if (strcmp(model, "Reebok FloatZig 1") == 0)
                    {
                        num1 = 2;
                    }
                    else if (strcmp(model, "Reebok Club C 85") == 0)
                    {
                        num1 = 3;
                    }

                    switch (num1)
                    {
                        case 1:
                            printf("You selected Reebok Nano X5\n");
                            break;

                        case 2:
                            printf("You selected Reebok FloatZig 1\n");
                            break;

                        case 3:
                            printf("You selected Reebok Club C 85\n");
                            break;

                        default:
                            printf("Invalid model\n");
                    }

                    break;
                }

                case 2:
                {
                    char model[100];

                    printf("Choose the model:\n");
                    printf("Nike Air Max 270\n");
                    printf("Nike Air Force 1\n");
                    printf("Nike Revolution 7\n");

                    scanf(" %[^\n]", model);

                    int num1 = 0;

                    if (strcmp(model, "Nike Air Max 270") == 0)
                    {
                        num1 = 1;
                    }
                    else if (strcmp(model, "Nike Air Force 1") == 0)
                    {
                        num1 = 2;
                    }
                    else if (strcmp(model, "Nike Revolution 7") == 0)
                    {
                        num1 = 3;
                    }

                    switch (num1)
                    {
                        case 1:
                            printf("You selected Nike Air Max 270\n");
                            break;

                        case 2:
                            printf("You selected Nike Air Force 1\n");
                            break;

                        case 3:
                            printf("You selected Nike Revolution 7\n");
                            break;

                        default:
                            printf("Invalid model\n");
                    }

                    break;
                }

                case 3:
                {
                    char model[100];

                    printf("Choose the model:\n");
                    printf("Puma RS-X\n");
                    printf("Puma Velocity Nitro 3\n");
                    printf("Puma Suede Classic\n");

                    scanf(" %[^\n]", model);

                    int num1 = 0;

                    if (strcmp(model, "Puma RS-X") == 0)
                    {
                        num1 = 1;
                    }
                    else if (strcmp(model, "Puma Velocity Nitro 3") == 0)
                    {
                        num1 = 2;
                    }
                    else if (strcmp(model, "Puma Suede Classic") == 0)
                    {
                        num1 = 3;
                    }

                    switch (num1)
                    {
                        case 1:
                            printf("You selected Puma RS-X\n");
                            break;

                        case 2:
                            printf("You selected Puma Velocity Nitro 3\n");
                            break;

                        case 3:
                            printf("You selected Puma Suede Classic\n");
                            break;

                        default:
                            printf("Invalid model\n");
                    }

                    break;
                }

                default:
                    printf("Invalid brand\n");
            }

            break;
        }

        
            
                case 2:
{
    char brand[100];

    printf("Choose the dress brand:\n");
    printf("Chanel\nCeline\nGucci\n");

    scanf("%s", brand);

    int dnum = 0;

    if(strcmp(brand, "Chanel") == 0)
    {
        dnum = 1;
    }
    else if(strcmp(brand, "Celine") == 0)
    {
        dnum = 2;
    }
    else if(strcmp(brand, "Gucci") == 0)
    {
        dnum = 3;
    }

    switch(dnum)
    {
        case 1:
        {
            char model[100];

            printf("Choose the dress:\n");
            printf("Chanel Tweed Dress\n");
            printf("Chanel Black Midi Dress\n");
            printf("Chanel Silk Evening Dress\n");

            scanf(" %[^\n]", model);

            if(strcmp(model, "Chanel Tweed Dress") == 0)
                printf("You selected Chanel Tweed Dress\n");
            else if(strcmp(model, "Chanel Black Midi Dress") == 0)
                printf("You selected Chanel Black Midi Dress\n");
            else if(strcmp(model, "Chanel Silk Evening Dress") == 0)
                printf("You selected Chanel Silk Evening Dress\n");
            else
                printf("Invalid dress\n");

            break;
        }

        case 2:
        {
            char model[100];

            printf("Choose the dress:\n");
            printf("Celine Mini Dress\n");
            printf("Celine Pleated Dress\n");
            printf("Celine Satin Dress\n");

            scanf(" %[^\n]", model);

            if(strcmp(model, "Celine Mini Dress") == 0)
                printf("You selected Celine Mini Dress\n");
            else if(strcmp(model, "Celine Pleated Dress") == 0)
                printf("You selected Celine Pleated Dress\n");
            else if(strcmp(model, "Celine Satin Dress") == 0)
                printf("You selected Celine Satin Dress\n");
            else
                printf("Invalid ");

            break;
        }

        case 3:
        {
            char model[100];

            printf("Choose the dress:\n");
            printf("Gucci Floral Dress\n");
            printf("Gucci Lace Dress\n");
            printf("Gucci Velvet Dress\n");

            scanf(" %[^\n]", model);

            if(strcmp(model, "Gucci Floral Dress") == 0)
                printf("You selected Gucci Floral Dress\n");
            else if(strcmp(model, "Gucci Lace Dress") == 0)
                printf("You selected Gucci Lace Dress\n");
            else if(strcmp(model, "Gucci Velvet Dress") == 0)
                printf("You selected Gucci Velvet Dress\n");
            else
                printf("Invalid dress\n");

            break;
        }

        default:
            printf("Invalid dress brand\n");
    }

    break;
}
            

        
                case 3:
{
    char brand[100];

    printf("Choose the bag brand:\n");
    printf("Chanel\nCeline\nGucci\n");

    scanf("%s", brand);

    int bnum = 0;

    if(strcmp(brand, "Chanel") == 0)
    {
        bnum = 1;
    }
    else if(strcmp(brand, "Celine") == 0)
    {
        bnum = 2;
    }
    else if(strcmp(brand, "Gucci") == 0)
    {
        bnum = 3;
    }

    switch(bnum)
    {
        case 1:
        {
            char model[100];

            printf("Choose the bag:\n");
            printf("Chanel Classic Flap Bag\n");
            printf("Chanel 22 Bag\n");
            printf("Chanel Boy Bag\n");

            scanf(" %[^\n]", model);

            if(strcmp(model, "Chanel Classic Flap Bag") == 0)
                printf("You selected Chanel Classic Flap Bag\n");
            else if(strcmp(model, "Chanel 22 Bag") == 0)
                printf("You selected Chanel 22 Bag\n");
            else if(strcmp(model, "Chanel Boy Bag") == 0)
                printf("You selected Chanel Boy Bag\n");
            else
                printf("Invalid ");

            break;
        }

        case 2:
        {
            char model[100];

            printf("Choose the bag:\n");
            printf("Celine Triomphe Bag\n");
            printf("Celine Belt Bag\n");
            printf("Celine Ava Bag\n");

            scanf(" %[^\n]", model);

            if(strcmp(model, "Celine Triomphe Bag") == 0)
                printf("You selected Celine Triomphe Bag\n");
            else if(strcmp(model, "Celine Belt Bag") == 0)
                printf("You selected Celine Belt Bag\n");
            else if(strcmp(model, "Celine Ava Bag") == 0)
                printf("You selected Celine Ava Bag\n");
            else
                printf("Invalid ");

            break;
        }

        case 3:
        {
            char model[100];

            printf("Choose the bag:\n");
            printf("Gucci Jackie 1961\n");
            printf("Gucci Dionysus\n");
            printf("Gucci GG Marmont\n");

            scanf(" %[^\n]", model);

            if(strcmp(model, "Gucci Jackie 1961") == 0)
                printf("You selected Gucci Jackie 1961\n");
            else if(strcmp(model, "Gucci Dionysus") == 0)
                printf("You selected Gucci Dionysus\n");
            else if(strcmp(model, "Gucci GG Marmont") == 0)
                printf("You selected Gucci GG Marmont\n");
            else
                printf("Invalid ");

            break;
        }

        default:
            printf("Invalid");
    }

    break;
}
            

        default:
            printf("Invalid");
    }

    return 0;
}
