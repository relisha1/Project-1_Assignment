#include <stdio.h>

int main() {
    int choice, num;

    while (1) {
        printf("\nMenu\n");
        printf("1. Check if a number is even or odd\n");
        printf("2. Print numbers from 1 to N\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num % 2 == 0)
                printf("The number is even\n");
            else
                printf("The number is odd\n");

        } else if (choice == 2) {
            printf("Enter N: ");
            scanf("%d", &num);

            for (int i = 1; i <= num; i++) {
                if (i == 5)
                    continue;
                printf("%d ", i);
            }
            printf("\n");

        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

