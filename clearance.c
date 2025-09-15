#include <stdio.h>
#include <string.h>

struct Clearance {
    char faculty[10];
    char library[10];
    char finance[10];
    char academics[10];
};

int main() {
    struct Clearance student;

    // Initialize all to "Pending"
    strcpy(student.faculty, "Pending");
    strcpy(student.library, "Pending");
    strcpy(student.finance, "Pending");
    strcpy(student.academics, "Pending");

    int choice;

    while (1) {
        printf("\n--- Clearance Portal (C Version) ---\n");
        printf("1. View Clearance Status\n");
        printf("2. Clear Faculty\n");
        printf("3. Clear Library\n");
        printf("4. Clear Finance\n");
        printf("5. Clear Academics\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nFaculty: %s\n", student.faculty);
                printf("Library: %s\n", student.library);
                printf("Finance: %s\n", student.finance);
                printf("Academics: %s\n", student.academics);
                break;
            case 2:
                strcpy(student.faculty, "Cleared");
                printf("Faculty cleared!\n");
                break;
            case 3:
                if (strcmp(student.faculty, "Cleared") == 0) {
                    strcpy(student.library, "Cleared");
                    printf("Library cleared!\n");
                } else {
                    printf("Error: Faculty must clear first!\n");
                }
                break;
            case 4:
                if (strcmp(student.library, "Cleared") == 0) {
                    strcpy(student.finance, "Cleared");
                    printf("Finance cleared!\n");
                } else {
                    printf("Error: Library must clear first!\n");
                }
                break;
            case 5:
                if (strcmp(student.finance, "Cleared") == 0) {
                    strcpy(student.academics, "Cleared");
                    printf("Academics cleared!\n");
                } else {
                    printf("Error: Finance must clear first!\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
