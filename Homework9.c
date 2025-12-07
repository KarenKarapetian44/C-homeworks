#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

void readStudents(Student *group, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", group[i].name);
        printf("Age: ");
        scanf("%d", &group[i].age);
        printf("Grade: ");
        scanf("%f", &group[i].grade);
    }
}

void displayStudents(Student *group, int n) {
    printf("\n%-20s %-10s %-10s\n", "Name", "Age", "Grade");
    printf("------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f\n", group[i].name, group[i].age, group[i].grade);
    }
}

Student findTopStudent(Student *group, int n) {
    Student top = group[0];
    for (int i = 1; i < n; i++) {
        if (group[i].grade > top.grade) {
            top = group[i];
        }
    }
    return top;
}

float calculateAverageAge(Student *group, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += group[i].age;
    }
    return sum / n;
}

int main() {
    int n;
    Student *group;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    group = (Student *)malloc(n * sizeof(Student));
    
    if (group == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    readStudents(group, n);
    
    displayStudents(group, n);
    
    Student topStudent = findTopStudent(group, n);
    printf("\nStudent with highest grade:\n");
    printf("Name: %s, Age: %d, Grade: %.2f\n", topStudent.name, topStudent.age, topStudent.grade);
    
    float avgAge = calculateAverageAge(group, n);
    printf("\nAverage age of students: %.2f\n", avgAge);
    
    free(group);
    
    return 0;
}