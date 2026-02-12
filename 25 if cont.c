#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("sum=%d",a + b);
        break;
        case 2:
        printf("Difference=%d",a-b);
        break;
        case 3:
        printf("Multiple=%d",a*b);
        break;
        case 4:
        printf("Division=%d",a/b);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}