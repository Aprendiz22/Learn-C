#include <stdio.h>

int main()
{ //we can calculation the average of age with this;
    char name1[50], name2[50];
    int age1, age2;
    double middle;

    printf("Data of first people: \n");
    printf("Name: ");
    fseek(stdin, 0, SEEK_END);
    gets(name1);
    printf("Age: ");
    scanf("%d", &age1);

    printf("Data of second people: \n");
    printf("Name: ");
    fseek(stdin, 0 ,SEEK_END);
    gets(name2);
    printf("Age: ");
    scanf("%d", &age2);

    middle = (double)(age1 + age2) /2;

    printf("\n");
    printf (" The average of ages %s and %s is %.1lf years! \n", name1, name2, middle);

    return 0;
}
