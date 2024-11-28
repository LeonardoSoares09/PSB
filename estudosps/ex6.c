#include<stdio.h>
#include<string.h>

struct person_s{
    char name[50];
    char birthdate[9];
    float salary;
};

struct person_s *add_person(struct person_s *p, int *tam, char *name, char *birthdate, float salary){
    if(*tam<100){
        strcpy((*(p+*tam)).name, name);
        strcpy((*(p+*tam)).birthdate, birthdate);
        (*(p+*tam)).salary = salary;
        (*tam)++;
    }

    return p;
}

int main(){
    struct person_s people[100];
    int tam = 0;
    

    add_person(people, &tam, "Leonardo", "09052004", 3000.0);
    add_person(people, &tam, "Luana", "02041967", 1500.0);

    printf("Nome: %s, Idade: %s, Salario: %.2f\n", people[0].name, people[0].birthdate, people[0].salary);
     printf("Nome: %s, Idade: %s, Salario: %.2f\n", people[1].name, people[1].birthdate, people[1].salary);

     return 0;
}

