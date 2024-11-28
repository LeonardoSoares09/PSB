#include<stdio.h>
#include<string.h>

struct person_s{
    char name[50];
    int birh_date;
    float salary;
};

struct person_s *add_person(struct person_s *p, int *items, char *name, int birth_date, float salary ){
    if(*items < 100){
        strcpy((*(p+*items)).name, name);
        (*(p+*items)).birh_date = birth_date;
        (*(p+*items)).salary = salary;
        *items = *items + 1;
    }
    return p;
}

int main(){

    struct person_s people[100];
    int items = 0;

    add_person(people, &items, "joao", 19902004,1400.0);
    printf("Name %s, Birth Date: %d, Salary: %.2f\n", people[0].name, people[0].birh_date, people[0].salary);

return 0;
}