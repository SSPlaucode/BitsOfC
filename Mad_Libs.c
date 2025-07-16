#include <stdio.h>
#include <string.h>

int main()
{
    //MAD LIBS GAME
    //Goal to practice and get familiar with the usage of fgets() function.
    
    char adj1[100] = "";
    char adj2[100] = "";
    char adj3[100] = "";
    char verb1[100] = "";
    char verb2[100] = "";
    char verb3[100] = "";
    char noun1[100] = "";
    char noun2[100] = "";
    char noun3[100] = "";

    printf("Enter the first noun (name): ");
    fgets(noun1, sizeof(noun1), stdin);
    noun1[strlen(noun1) - 1] = '\0';

    printf("Enter the second noun (name): ");
    fgets(noun2, sizeof(noun2), stdin);
    noun2[strlen(noun2) - 1] = '\0';

    printf("Enter the third noun (place): ");
    fgets(noun3, sizeof(noun3), stdin);
    noun3[strlen(noun3) - 1] = '\0';

    printf("Enter the first adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';

    printf("Enter the second adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';

    printf("Enter the third adjective (description): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';

    printf("Enter the first verb (ending with -ing): ");
    fgets(verb1, sizeof(verb1), stdin);
    verb1[strlen(verb1) - 1] = '\0';

    printf("Enter the second verb (ending with - ing): ");
    fgets(verb2, sizeof(verb2), stdin);
    verb2[strlen(verb2) - 1] = '\0';

    printf("Enter the third verb (simple prsesnt/past form): ");
    fgets(verb3, sizeof(verb3), stdin);
    verb3[strlen(verb3) - 1] = '\0';

    printf("\nThere were once two brothers, %s and %s, living in a %s.\n", noun1, noun2, noun3);
    printf("%s was %s, while his brother %s was %s. They both together did a lot of %s work in %s.\n", noun1, adj1, noun2, adj2, adj3, noun3);
    printf("One day they were %s in the fields. Suddenly they saw a man %s on the road.\n", verb1, verb2);
    printf("They both %s the man and then took him to %s.\n", verb3, noun3);
    
    return 0;
}
