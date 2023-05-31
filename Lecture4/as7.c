#include <stdio.h>

#define ROW 8
#define COLUMN 8
#define CHARGING_STATION_INDEX_C 2
#define CHARGING_STATION_INDEX_D 3

int main(void){
    int n, i, current_point, k;
    char labels[ROW] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}; //  for columns and labels

    printf("Which point are you located? 0 - A, 1- B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &n);
    printf("at point: %c\n", labels[n]);

    int road_networks[ROW][COLUMN] =  {{1, 1, 0, 0 ,0 ,1, 0 ,0, 0}, 
                                        {1, 1, 1, 0, 0, 0, 0, 0, 0}, 
                                        {0, 1, 1, 0, 1, 1, 0, 0, 0},
                                        {0, 0, 0, 1, 1, 0, 0, 0, 0},
                                        {0, 0, 0, 1, 1, 0, 0, 0, 0},
                                        {1, 0, 1, 0, 0, 1, 0, 0, 0},
                                        {1, 0, 0, 1, 0, 0, 1, 0, 0},
                                        {0, 0, 0, 0, 0, 1, 0, 1, 1},
                                        {0, 0, 0, 0, 0, 0, 0, 1, 0}};

    for (i = 0; i < ROW; i++){
        if (n == 2){
            printf("C is a charging station."); break;
        }
        else if (n == 3){
            printf("D is a charging station"); break;
        }
        else if (i == n) {
            current_point = i;
            for (current_point; current_point < ROW; current_point++){
                if (road_networks[current_point][CHARGING_STATION_INDEX_C] == 1){
                    printf("point: C arrived to charging station"); break;
                } 
                else if (road_networks[current_point][CHARGING_STATION_INDEX_D] == 1){
                    printf("point: D arrived to charging station"); break;
                }
                else{
                    continue;
                }   
            }
        }
    }
}