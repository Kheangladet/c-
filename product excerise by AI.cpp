#include <stdio.h>
#include <string.h>

struct product {
    int code;
    char name[20];
    int price;
    int qty;
};

void inputALL(struct product p[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Product %d:\n", i + 1);
        printf("Input code: ");
        scanf("%d", &p[i].code);
        printf("Input name: ");
        scanf(" %[^\n]", p[i].name);  // safer than gets()
        printf("Input price: ");
        scanf("%d", &p[i].price);
        printf("Input quantity: ");
        scanf("%d", &p[i].qty);
    }
}

float totalPrice(struct product p) {
    return p.price * p.qty;
}

void outputAll(struct product p[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d\t%s\t%d\t%d\t%.2f\n", p[i].code, p[i].name, p[i].price, p[i].qty, totalPrice(p[i]));
}

float total(struct product a[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++)
        s += totalPrice(a[i]);
    return s;
}

struct product maxPrice(struct product a[], int n) {
    struct product p = a[0];
    for (int i = 1; i < n; i++)
        if (a[i].price > p.price)
            p = a[i];
    return p;
}

void sort(struct product a[], int n) {
    struct product temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].price > a[j].price) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int searchCode(struct product a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i].code == x)
            return i;
    return -1;
}

int main() {
    int n, c, pos;
    float s;
    struct product a[100], x;

    printf("Number of Products: ");
    scanf("%d", &n);

    inputALL(a, n);

    printf("\nCode\tName\tPrice\tQuantity\tTotal Price\n");
    outputAll(a, n);

    s = total(a, n);
    printf("Total = %.2f\n", s);

    x = maxPrice(a, n);
    printf("\nMax Price Product:\n");
    printf("Code\tName\tPrice\tQuantity\tTotal Price\n");
    outputAll(&x, 1);

    printf("\nEnter product code to search: ");
    scanf("%d", &c);
    pos = searchCode(a, n, c);
    if (pos == -1)
        printf("Search not found.\n");
    else {
        printf("Product found:\n");
        printf("Code\tName\tPrice\tQuantity\tTotal Price\n");
        outputAll(&a[pos], 1);
    }

    sort(a, n);
    printf("\nAfter sorting by price (ascending):\n");
    printf("Code\tName\tPrice\tQuantity\tTotal Price\n");
    outputAll(a, n);

    return 0;
}
