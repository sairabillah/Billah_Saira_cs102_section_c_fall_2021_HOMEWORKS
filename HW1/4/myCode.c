#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    char str[30][30], cop[30]; //large size to account for large input


    printf("Enter Strings one by one:\n");
    for (i=0; i<=2; i++)
        scanf("%s", str[i]);
    for (i=0; i<=2; i++)
        for (j=i+1; j<=2; j++){
            if (strcmp(str[i], str[j])>0) { //compares two strings
                strcpy(cop, str[i]);    // used to copy one string onto another
                strcpy(str[i], str[j]);
                strcpy(str[j], cop);
            }
        }
printf("Order of sorted strings:\n");
for (i=0; i<=2; i++)
    printf("%s\n", str[i]);
return (0);

}

