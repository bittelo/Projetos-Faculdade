#include <stdio.h>
#include <string.h>

int main() {
    char userName[50], courseName[50];
    int matricula, turno;
    char schedule[20];

    printf("Enter your name: ");
    fgets(userName, sizeof(userName), stdin);
    userName[strcspn(userName, "\n")] = 0; // Remove newline character

    printf("Enter your matriculation number: ");
    scanf("%d", &matricula);
    getchar(); // Consume newline character

    printf("Enter your course name: ");
    fgets(courseName, sizeof(courseName), stdin);
    courseName[strcspn(courseName, "\n")] = 0; // Remove newline character

    printf("Enter your class turn (1 - Morning, 2 - Afternoon, 3 - Night): ");
    scanf("%d", &turno);
    getchar(); // Consume newline character

    printf("Enter your class schedule: ");
    fgets(schedule, sizeof(schedule), stdin);
    schedule[strcspn(schedule, "\n")] = 0; // Remove newline character

    printf("\nUser data:\n");
    printf("Name: %s\n", userName);
    printf("Matriculation: %d\n", matricula);
    printf("Course: %s\n", courseName);
    printf("Turn: %d (1 - Morning, 2 - Afternoon, 3 - Night)\n", turno);
    printf("Schedule: %s\n", schedule);

    return 0;
}
