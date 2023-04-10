#include <stdio.h>

#define MAX_DAY 7

int main(void){
    int numDays, startDay, days, count;
    printf("Enter number of days in month: ");
    scanf("%d", &numDays);
    printf("Enter the starting day of the week (1 = Sun, 7 = Sat):");
    scanf("%d", &startDay); 

    if(numDays < 28 || numDays > 31 || startDay < 1 || startDay > 7){
        printf("invalid input");

    }else{
        for (count = 1; count < startDay; count++){
            printf("   ");              // print spaces before beginning of day
        }
        for (days = 1; days <= numDays; days++, count++){
            if (days < 10){
                printf(" %d ", days);   // print spaces to align single-digit days to double-digit days
            }else{
                printf("%d ", days);}   // print double-digit days
            if (count % MAX_DAY == 0){            // change row if reached 7th column
                printf("\n");
            }
        }        
    }
}


