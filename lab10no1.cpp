#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[20];
    int score;
} Student;

void addStudent(Student *record, char *name, int score) {
    strcpy(record->name, name); 
    record->score = score;
}


int main() {
    Student stuRecord[20]; int numStudent, i;
    addStudent(&stuRecord[0], "Jaina", 65);
    addStudent(&stuRecord[1], "Arthus", 72);
    addStudent(&stuRecord[2], "Malfurian", 40);
    addStudent(&stuRecord[3], "Kadgar", 93); 
    addStudent(&stuRecord[4], "Thrall", 60);
    numStudent = 5;
    for(i = 0; i < numStudent; i++) {
        printf("%s ", stuRecord[i].name);
        if(stuRecord[i].score >= 80){
            printf("very good\n");
        }else if(stuRecord[i].score >= 60){
            printf("good\n");
        }else{
            printf("keep trying\n");
        }
    }
return 0;
}   
