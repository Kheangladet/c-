#include <stdio.h>
#include <math.h>
#include<conio.h>
int main() {
    int h_start, m_start, h_end, m_end;
    int time, min;
    float total, total1, total2;

    printf("Enter Hour in: ");
    scanf("%d", &h_start);
    printf("Enter Minute in: ");
    scanf("%d", &m_start);
    printf("Enter Hour out: ");
    scanf("%d", &h_end);
    printf("Enter Minute out: ");
    scanf("%d", &m_end);

    if (h_end <= 18 || h_start >= 18) {
        if (m_start > m_end) {
            min = m_end - m_start;
            time = h_end - h_start;
        } else {
            min = m_end - m_start;
            time = h_end - h_start;
        }

        if (h_end <= 18)
            total = time * 1500 + min * 1500 / 60;
        if (h_start >= 18)
            total = time * 2500 + min * 2500 / 60;
    } else {
        min = 60 - m_start;
        time = 18 - h_start - 1;
        total1 = time * 1500 + min * 1500 / 60;

        min = m_end;
        time = h_end - 18;
        total2 = time * 2500 + min * 2500 / 60;

        total = total1 + total2;
    }

    printf("Total cost = %.2f\n", total);
    getch();
    return 0;
}
