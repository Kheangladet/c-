#include <stdio.h>
#include <conio.h>

int main() {
    int electric, money;

    printf("Enter your electric: ");
    scanf("%d", &electric);

    if (electric > 0 && electric <= 50)
        money = 350;
    else if (electric > 50 && electric <= 100)
        money = 550;
    else if (electric > 100 && electric <= 200)
        money = 750;
    else if (electric > 200 && electric <= 300)
        money = 950;
    else if (electric > 300 && electric <= 400)
        money = 1150;
    else
        money = 1250;

    printf("Your total money is: %d\n", money);

    getch(); // Only for Windows/older compilers
    return 0;
}
