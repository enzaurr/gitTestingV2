#include <stdio.h>
#include <windows.h>

void mainMenu();

int main() {

    mainMenu();

    return 0;
}

void mainMenu() {
    int choice = 0;

    do {
        printf("~~~ MAIN MENU ~~~\n");
        printf("1   : Add Numbers\n");
        printf("2   : Subtract Numbers\n");
        printf("3   : Multiply Numbers\n");
        printf("4   : Divide Numbers\n");
        printf("5   : Exit Program\n");

        printf("D:  ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("1   : Add Numbers\n");
                break;
            case 2:
                printf("2   : Subtract Numbers\n");
                break;
            case 3:
                printf("3   : Multiply Numbers\n");
                break;
            case 4:
                printf("4   : Divide Numbers\n");
                break;
            case 5:
                printf("5   : Exit Program\n");
                break;
            default:
                break;

            printf("\n"); system("pause");
            system("cls");
        }

    } while (choice != 5);
}