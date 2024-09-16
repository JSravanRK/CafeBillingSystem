#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int pass(char *password, int t)
{
    int i = 0;
    char c;
    if (t == 0)
    {
        printf("\tENTER PASSWORD   :\t");
    }
    else
    {
        printf("\n\tCONFIRM PASSWORD :\t");
    }

    while (i < 10 && (c = getch()) != '\r')
    {
        if (c == '\b' && i > 0)
        {
            printf("\b \b");
            i--;
        }
        else if (c != '\b')
        {
            printf("*");
            *(password + i) = c;
            i++;
        }
    }
    password[i] = '\0';
}

void menupage(char username[30], int differentiator)
{
    system("cls");
    fflush(stdin);

    printf("\n\n\t\t\t\t\t\t\t------- DC CAFE WELCOMES YOU -------\n\n\n\n");
    printf("\tItems We Serve :\n\n\n");

    printf("\t\t------------------------\t\t\t------------------------\t\t\t------------------------\n\n");
    printf("\t\t\tCOFFEE\t\t\t\t\t\t SNACKS\t\t\t\t\t\tBEVERAGES\n\n");
    printf("\t\t------------------------\t\t\t------------------------\t\t\t------------------------\n\n");

    printf("\t\t1. INSTANT COFFEE  30/-\t\t\t\t1. VEG. SANDWICH    70/-\t\t\t1. TEA              30/-\n");
    printf("\t\t2. ESPRESSO        60/-\t\t\t\t2. CHEESE SANDWICH  80/-\t\t\t2. HOT MILK         30/-\n");
    printf("\t\t3. LATTE           50/-\t\t\t\t3. VEG. BURGER     100/-\t\t\t3. CHOCOLATE MILK   40/-\n");
    printf("\t\t4. MOCHA           80/-\t\t\t\t4. CHEESE BURGER   120/-\t\t\t4. MANGO MILKSHAKE  60/-\n");
    printf("\t\t5. CAPPUCCINO      80/-\t\t\t\t5. FRENCH FRIES     70/-\t\t\t5. APPLE JUICE      50/-\n");
    printf("\t\t6. BLACK COFFEE    50/-\t\t\t\t6. CHEESE NUGGETS   90/-\t\t\t6. ORANGE JUICE     50/-\n");

    int sum = 0;
    int qty;
    char coffee[20];
    FILE *bill;

    bill = fopen("bill.txt", "w");
    fprintf(bill, "\t\t\t\t\t\t\t%s           %s     %s\n", "Product", "Qty.", "Price");
    fclose(bill);

    printf("\n\n\tWhat do you want from COFFEE (For multiple orders write as : 1,2,...): \n\t");
    fgets(coffee, 20, stdin);

    coffee[strcspn(coffee, "\n")] = '\0';
    int loopend1 = strlen(coffee);
    for (int i = 0; i < loopend1; i += 2)
    {
        switch (coffee[i])
        {
        case '1':
            printf("\tEnter Quantity For INSTANT COFFEE : ");
            scanf("%d", &qty);
            sum += qty * 30;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\n\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Instant-Coffee", qty, "30/-");
            fclose(bill);

            break;
        case '2':
            printf("\tEnter Quantity For ESPRESSO       : ");
            scanf("%d", &qty);
            sum += qty * 60;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Espresso", qty, "60/-");
            fclose(bill);

            break;
        case '3':
            printf("\tEnter Quantity For LATTE          : ");
            scanf("%d", &qty);
            sum += qty * 50;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Latte", qty, "50/-");
            fclose(bill);

            break;
        case '4':
            printf("\tEnter Quantity For MOCHA          : ");
            scanf("%d", &qty);
            sum += qty * 80;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Mocha", qty, "80/-");
            fclose(bill);

            break;
        case '5':
            printf("\tEnter Quantity For CAPPUCCINO     : ");
            scanf("%d", &qty);
            sum += qty * 80;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Cappucino", qty, "80/-");
            fclose(bill);

            break;
        case '6':
            printf("\tEnter Quantity For BLACK COFFEE   : ");
            scanf("%d", &qty);
            sum += qty * 50;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Black-Coffee", qty, "50/-");
            fclose(bill);

            break;

        default:
            break;
        }
    }

    fflush(stdin);

    char snacks[20];

    printf("\n\n\tWhat do you want from SNACKS (For multiple orders write as : 1,2,...) : \n\t");
    fgets(snacks, 20, stdin);

    snacks[strcspn(snacks, "\n")] = '\0';
    int loopend2 = strlen(snacks);
    for (int i = 0; i < loopend2; i += 2)
    {
        switch (snacks[i])
        {
        case '1':
            printf("\tEnter Quantity For VEG. SANDWICH   : ");
            scanf("%d", &qty);
            sum += qty * 70;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Veg.-Sandwich", qty, "70/-");
            fclose(bill);

            break;
        case '2':
            printf("\tEnter Quantity For CHEESE SANDWICH : ");
            scanf("%d", &qty);
            sum += qty * 80;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Cheese-Sandwich", qty, "80/-");
            fclose(bill);

            break;
        case '3':
            printf("\tEnter Quantity For VEG. BURGER     : ");
            scanf("%d", &qty);
            sum += qty * 100;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Veg.-Burger", qty, "100/-");
            fclose(bill);

            break;
        case '4':
            printf("\tEnter Quantity For CHEESE BURGER   : ");
            scanf("%d", &qty);
            sum += qty * 120;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Cheese-Burger", qty, "120/-");
            fclose(bill);

            break;
        case '5':
            printf("\tEnter Quantity For FRENCH FRIES    : ");
            scanf("%d", &qty);
            sum += qty * 70;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "French-Fries", qty, "70/-");
            fclose(bill);

            break;
        case '6':
            printf("\tEnter Quantity For CHEESE NUGGETS  : ");
            scanf("%d", &qty);
            sum += qty * 90;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Cheese-Nuggets", qty, "90/-");
            fclose(bill);

            break;

        default:
            break;
        }
    }

    char beverages[20];
    fflush(stdin);

    printf("\n\n\tWhat do you want from BEVERAGES (For multiple orders write as : 1,2,...) : \n\t");
    fgets(beverages, 20, stdin);

    beverages[strcspn(beverages, "\n")] = '\0';
    int loopend3 = strlen(beverages);
    for (int i = 0; i < loopend3; i += 2)
    {
        switch (beverages[i])
        {
        case '1':
            printf("\tEnter Quantity For TEA             : ");
            scanf("%d", &qty);
            sum += qty * 30;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Tea", qty, "30/-");
            fclose(bill);

            break;
        case '2':
            printf("\tEnter Quantity For HOT MILK        : ");
            scanf("%d", &qty);
            sum += qty * 30;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Hot-Milk", qty, "30/-");
            fclose(bill);

            break;
        case '3':
            printf("\tEnter Quantity For CHOCOLATE MILK  : ");
            scanf("%d", &qty);
            sum += qty * 40;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Chocolate-Milk", qty, "40/-");
            fclose(bill);

            break;
        case '4':
            printf("\tEnter Quantity For MANGO MILKSHAKE : ");
            scanf("%d", &qty);
            sum += qty * 60;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Mango-Milkshake", qty, "60/-");
            fclose(bill);

            break;
        case '5':
            printf("\tEnter Quantity For APPLE JUICE     : ");
            scanf("%d", &qty);
            sum += qty * 50;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Apple-Juice", qty, "50/-");
            fclose(bill);

            break;
        case '6':
            printf("\tEnter Quantity For ORANGE JUICE    : ");
            scanf("%d", &qty);
            sum += qty * 50;

            bill = fopen("bill.txt", "a");

            fprintf(bill, "\t\t\t\t\t\t\t%-16s  %4d     %5s\n", "Orange-Juice", qty, "50/-");
            fclose(bill);

            break;

        default:
            break;
        }
    }
    bill = fopen("bill.txt", "a");

    fprintf(bill, "\n\t\t\t\t\t\t\t--------------------------------\n\n");
    fprintf(bill, "\n\n%56sTOTAL AMOUNT            : %d\n", " ", sum);
    fprintf(bill, "%56sCGST                    : %s \n", " ", "6%");
    fprintf(bill, "%56sSGST                    : %s \n", " ", "2%");

    if (differentiator == 0)
    {
        fprintf(bill, "%56sDISCOUNT                : %s\n", " ", "10%");
        fprintf(bill, "%56sTOTAL AMOUNT TO BE PAID : %0.3f\n\n\n", " ", sum - (sum * 0.020));
    }
    else if (differentiator == 1)
    {
        fprintf(bill, "%56sDISCOUNT                : %s\n", " ", "20%");
        fprintf(bill, "%56sTOTAL AMOUNT TO BE PAID : %0.3f\n\n\n", " ", sum - (sum * 0.120));
    }
    else
    {
        fprintf(bill, "\n");
        fprintf(bill, "%56sTOTAL AMOUNT TO BE PAID : %0.3f\n\n\n", " ", sum + (sum * 0.080));
    }

    fprintf(bill, "\t\t\t\t\t\t\t-----------VISIT AGAIN-----------\n\n");

    fclose(bill);
    printf("%d", sum);
    system("cls");

    printf("\t\t\t\t\t\t\t--------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\t    RECEIPT\n\n");
    printf("\t\t\t\t\t\t\t--------------------------------\n\n");

    time_t now = time(NULL);
    struct tm *local_time = localtime(&now);

    char time_str[100];
    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", local_time);

    printf("\t\t\t\t\t\t\t%s\n", time_str);

    int abcdef = rand();
    printf("\t\t\t\t\t\t\tORDER ID : %d \n", abcdef);
    printf("\t\t\t\t\t\t\tName     : %s", username);
    printf("\n\n\t\t\t\t\t\t\t-------- Order Details ---------\n\n\n");

    char product[20], quantity[20], price[20];

    bill = fopen("bill.txt", "r");

    int c;
    if (bill)
    {
        c = fgetc(bill);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(bill);
        }
        fclose(bill);
    }
    getch();
}

struct user
{
    char username[30];
    char password[20];
    char confirmpassword[20];
};

int main()
{
    system("mode 650");
    system("color 70");

    homepage:;

    printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
    printf("\tWhat describes you best : \n\n\n");
    printf("\t1. Student\t\t\t2. Staff\t\t\t3. Others \n");
    int choiceh;
    printf("\n\n\tChoose an option :  ");
    scanf("%d", &choiceh);

    system("cls");

    switch (choiceh)
    {
    case 1:

        goto Target;
    Target:;
        
        struct user p;
        printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
        printf("\t\t\t1.Sign up\n");
        printf("\t\t\t2.Sign in\n");
        printf("\t\t\t3.Exit\n\n");
        printf("\tChoose an option :\t");

        int choicel1;
        scanf("%d", &choicel1);

        switch (choicel1)
        {
        case 1:
        badwriter:;
        takeanother:;
            system("cls");
            fflush(stdin);
            printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
            printf("\t\t\n\tENTER USERNAME   :\t");
            fgets(p.username, 30, stdin);
            p.username[strcspn(p.username, "\n")] = '\0';

            FILE *store;
            store = fopen("data.txt", "a");
            char *signupstudp = &p.password[0];
            pass(signupstudp, 0);

            char *signupstudcp = &p.confirmpassword[0];
            pass(signupstudcp, 1);

            if (strcmp(p.password, p.confirmpassword) != 0)
            {
                printf("\n\n\tPassword and Confirm Password didn't match! Press ENTER key to retry");
                getch();
                goto badwriter;
            }

            FILE *readin1;
            readin1 = fopen("data.txt", "r");
            int z = 0;
            struct user s;

            while (!feof(readin1))
            {
                fscanf(readin1, "%s%s", s.username, s.password);
                if (strcmp(s.username, p.username) == 0)
                {
                    printf("\n\n\tUser already exists! Please try another username.");
                    getch();
                    goto takeanother;
                    z++;
                    break;
                }
            }
            if (z == 0)
            {
                fprintf(store, "\n %s\t\t%s ", p.username, p.password);
                fclose(store);
            }

            printf("\n\n\n\n\tUSER SUCCESSFULLY SIGNED UP !");
            printf("\n\n\tPress ENTER key to Login");
            getch();
            goto almond;

        case 2:
        almond:;
            system("cls");
            struct user q;
            fflush(stdin);
            printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
            printf("\t\t\n\tENTER USERNAME   :\t");
            fgets(q.username, 30, stdin);
            q.username[strcspn(q.username, "\n")] = '\0';

            FILE *read;
            read = fopen("data.txt", "r");

            struct user r;
            int t = 0;

            char *loginstudcp = &q.password[0];
            pass(loginstudcp, 0);

            while (!feof(read))
            {
                fscanf(read, "%s%s", r.username, r.password);
                if (strcmp(r.username, q.username) == 0)
                {
                    if (strcmp(r.password, q.password) == 0)
                    {
                        menupage(q.username, 0);
                        t++;
                        break;
                    }
                }
            }
            if (t != 1)
            {
                printf("\n\n\tIncorrect Username Or Password!");
                getch();
                goto almond;
            }

        case 3:
            system("cls");
            goto homepage;

        default:
        printf("\n\n\n\n\t\tInvalid input! Please choose a valid option\n\t\tPress ENTER key to continue.");
        getch();
        system("cls");
        goto Target;
        }

        break;

    case 2:

        goto Target2;
    Target2:;

        struct user p2;
        printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
        printf("\t\t\t1.Sign Up\n");
        printf("\t\t\t2.Sign In\n");
        printf("\t\t\t3.Exit\n\n");
        printf("\tSelect an option\t");

        int choicel2;
        scanf("%d", &choicel2);

        switch (choicel2)
        {
        case 1:
        badwriter2:;
        takeanother2:;
            system("cls");
            fflush(stdin);
            printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
            printf("\t\t\n\tENTER USERNAME  :\t");
            fgets(p2.username, 30, stdin);
            p2.username[strcspn(p2.username, "\n")] = '\0';

            FILE *store2;
            store2 = fopen("data.txt", "a");

            char *signupprofp = &p2.password[0];
            pass(signupprofp, 0);

            char *signupprofcp = &p2.confirmpassword[0];
            pass(signupprofcp, 1);

            if (strcmp(p2.password, p2.confirmpassword) != 0)
            {
                printf("\n\n\tPassword and Confirm Password didn't match! Press ENTER key to retry");
                getch();
                goto badwriter2;
            }

            FILE *readin12;
            readin12 = fopen("data.txt", "r");

            struct user s2;

            while (!feof(readin12))
            {
                fscanf(readin12, "%s%s", s2.username, s2.password);
                if (strcmp(s2.username, p2.username) == 0)
                {
                    printf("\n\n\tUser already exists! Please try another username.");
                    getch();
                    goto takeanother2;
                    break;
                }
            }

            fprintf(store2, "\n %s\t\t%s ", p2.username, p2.password);
            fclose(store2);

            printf("\n\n\n\n\tUSER SUCCESSFULLY SIGNED UP !");
            printf("\n\n\tPress ENTER key to Login");
            getch();
            goto almond2;

            break;
        case 2:
        almond2:;
            system("cls");
            struct user q2;
            fflush(stdin);
            printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
            printf("\t\t\n\tENTER USERNAME  :\t");
            fgets(q2.username, 30, stdin);
            q2.username[strcspn(q2.username, "\n")] = '\0';

            FILE *read2;
            read2 = fopen("data.txt", "r");

            char *loginprofp = &q2.password[0];
            pass(loginprofp, 0);

            struct user r2;
            int t = 0;

            while (!feof(read2))
            {

                fscanf(read2, "%s%s", r2.username, r2.password);
                if (strcmp(r2.username, q2.username) == 0)
                {
                    if (strcmp(r2.password, q2.password) == 0)
                    {
                        menupage(q2.username, 1); 
                        t++;
                        break;
                    }
                }
            }
            if (t != 1)
            {
                printf("\n\n\tIncorrect Username Or Password!");
                getch();
                goto almond2;
            }
        case 3:
            system("cls");
            goto homepage;
            
        default:
        printf("\n\n\n\n\t\tInvalid input! Please choose a valid option\n\t\tPress ENTER key to continue.");
        getch();
        system("cls");
        goto Target2;
        }

        break;

    case 3:

        goto Target3;
    Target3:;

        fflush(stdin);

        char othername[50];
        printf("\n\n\t\t\t\t\t------ Welcome to the DC cafe ------\n\n\n\n");
        printf("\n\n\n\t\t\tEnter Your Name : ");
        fgets(othername, 50, stdin);
        othername[strcspn(othername, "\n")] = '\0';

        menupage(othername, 3);
        break;

    default:
        printf("\n\n\n\n\t\tInvalid input! Please choose a valid option\n\t\tPress ENTER key to continue.");
        getch();
        system("cls");
        goto homepage;
    }
}