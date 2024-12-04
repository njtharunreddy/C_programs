#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

void updateGrades(struct Student students[], int size, float increment)
{
	int i;
    for (i = 0; i < size; i++) 
	{
		
        students[i].grade = students[i].grade+increment;
    }
}

void displayStudents(struct Student students[], int size) {
    int i;
	for ( i = 0; i < size; i++) {
        printf("Student ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Updated Grade: %.2f\n\n", students[i].grade);
    }
}

int main() {
    struct Student students[2] = {
        {1, "Tom", 72.5},
        {2, "Jerry", 68.0}
    };

    // Update grades by 5
    updateGrades(students, 2, 5.0);

    // Display updated grades
    displayStudents(students, 2);

    return 0;
}
