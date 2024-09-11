#include <stdio.h>
// used by teachers for calculation your final note 
int main()
{
    double note1, note2, finalnote;

    printf("Enter of first note: ");
    scanf("%lf", &note1);
    printf("Enter of second note: ");
    scanf("%lf", &note2);

    finalnote = note1 + note2;
    printf("Final Note: %.1lf\n", finalnote);

    if (finalnote < 60.0){
        printf("Reproved");
    }

    return 0;
}
