#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Zavdannya 1 (variant 6)
void task1(void)
{
    int arr[20], i;
    for (i = 0; i < 20; i++) {
        arr[i] = 20 - i;
    }

    printf("Masyv: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Zavdannya 2 (variant 13)
void task2(void)
{
    int arr[100], n, i;
    printf("Vvedit rozmir masyvu n (1..100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Pomylka: nevirnyy rozmir masyvu\n");
        return;
    }

    printf("Vvedit %d tsilykh chysel: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Pochatkovyy masyv: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Zvorotnyy poryadok: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Zavdannya 3 (variant 32)
void task3(void)
{
    double arr[100], z;
    int n, i, count = 0;
    printf("Vvedit rozmir masyvu n (1..100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Pomylka: nevirnyy rozmir masyvu\n");
        return;
    }

    printf("Vvedit %d diysnykh chysel: ", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    printf("Vvedit chyslo Z: ");
    scanf("%lf", &z);

    printf("Pochatkovyy masyv: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
        if (arr[i] > z) {
            arr[i] = z;
            count++;
        }
    }
    printf("\n");

    printf("Zminenyy masyv: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\nKilkist zamin: %d\n", count);
}

// Zavdannya 4 (variant 69)
void task4(void)
{
    double arr[100], z, prod = 1;
    int n, i, count = 0;
    printf("Vvedit rozmir masyvu n (1..100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Pomylka: nevirnyy rozmir masyvu\n");
        return;
    }

    printf("Vvedit %d diysnykh chysel: ", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    printf("Vvedit zadane chyslo: ");
    scanf("%lf", &z);

    printf("Masyv: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
        if (arr[i] < z) {
            prod *= arr[i];
            count++;
        }
    }
    printf("\n");

    if (count == 0) {
        printf("Elementiv menshykh za %.2f nemaye\n", z);
    } else {
        printf("Dobutok elementiv: %.2f\n", prod);
    }
}

// Zavdannya 5 (variant 130)
void task5(void)
{
    int arr[100], n, i, k, count = 0;
    printf("Vvedit rozmir masyvu n (1..100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Pomylka: nevirnyy rozmir masyvu\n");
        return;
    }

    printf("Vvedit %d tsilykh pozytyvnykh chysel: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Pochatkovyy masyv: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Kvadraty tsilykh chysel: ");
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            k = (int)sqrt(arr[i]);
            if (k*k == arr[i]) {
                printf("%d ", arr[i]);
                count++;
            }
        }
    }
    if (count == 0) {
        printf("nemaye");
    }
    printf("\n");
}

// Zavdannya 6 (variant 11)
void task6(void)
{
    int a[20], b[30], idx, k, j, p;

    idx = 0;
    k = 301;
    while (idx < 20) {
        if (k % 13 == 0 || k % 17 == 0) {
            a[idx] = k;
            idx++;
        }
        k++;
    }

    printf("a) 20 chysel > 300, dilnykh na 13 abo 17:\n");
    for (j = 0; j < 20; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");

    idx = 0;
    k = 2;
    while (idx < 30) {
        p = 1;
        for (j = 2; j*j <= k; j++) {
            if (k % j == 0) {
                p = 0;
                break;
            }
        }
        if (p) {
            b[idx] = k;
            idx++;
        }
        k++;
    }

    printf("b) 30 pershykh prostykh chysel:\n");
    for (j = 0; j < 30; j++) {
        printf("%d ", b[j]);
    }
    printf("\n");
}

int main()
{
    int choice = -1;
    srand((unsigned int)time(NULL));

    while (choice != 0) {
        printf("\n1 - Zavdannya 1\n");
        printf("2 - Zavdannya 2\n");
        printf("3 - Zavdannya 3\n");
        printf("4 - Zavdannya 4\n");
        printf("5 - Zavdannya 5\n");
        printf("6 - Zavdannya 6\n");
        printf("0 - Vykhid\n");
        printf("Vybir: ");
        if (scanf("%d", &choice) != 1) break;

        switch (choice) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 4: task4(); break;
            case 5: task5(); break;
            case 6: task6(); break;
            case 0: printf("Vykhid\n"); break;
            default: printf("Nevirnyy nomer\n");
        }
    }

    return 0;
}
