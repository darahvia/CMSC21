#include <stdio.h>

#define ROW 9
#define COLUMN 9
#define CHARGING_STATION_INDEX_C 2
#define CHARGING_STATION_INDEX_D 3

int main(void){
    int location_input, current_point;
    char labels[ROW] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}; //  for columns and labels

    printf("Which point are you located? 0 - A, 1- B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &location_input);       // read user input for location
    
    // display the adjancy matrix
    int road_networks[ROW][COLUMN] =  {{1, 1, 0, 0 ,0 ,1, 1 ,0, 0}, 
                                        {1, 1, 1, 0, 0, 0, 0, 0, 0}, 
                                        {0, 1, 1, 0, 1, 1, 0, 0, 0},
                                        {0, 0, 0, 1, 1, 0, 0, 0, 0},
                                        {0, 0, 0, 1, 1, 0, 0, 0, 0},
                                        {1, 0, 1, 0, 0, 1, 0, 0, 0},
                                        {1, 0, 0, 1, 0, 0, 1, 0, 0},
                                        {0, 0, 0, 0, 0, 1, 0, 1, 1},
                                        {0, 0, 0, 0, 0, 0, 0, 1, 0}};

    for (current_point = 0; current_point< ROW; current_point++){
        if (location_input == CHARGING_STATION_INDEX_C){        // if the location input is the charging station C
            printf("C is a charging station."); break;
        }
        else if (location_input == CHARGING_STATION_INDEX_D){       // if the location input is the charging station D
            printf("D is a charging station"); break;
        }
        else if (current_point == location_input) {         // if the location input is not C or D
            printf("at point: %c\n", labels[location_input]);
            for (current_point; current_point < ROW; current_point++){      // iterate the row starting on the location row
                if (road_networks[current_point][CHARGING_STATION_INDEX_C] == 1){       // if there is a road netwrork to charging station C
                    printf("point: C arrived to charging station"); break;
                } 
                else if (road_networks[current_point][CHARGING_STATION_INDEX_D] == 1){      // if there is a road network to charing station D
                    printf("point: D arrived to charging station"); break;
                }
                else{
                    continue;       //proceed to the next row if charging station is not found on the location's row
                }   
            }
        }
    }
}
