    // print the adjacency matrix
    int row, column;
    printf("       A    B   [C]  [D]   E    F    G    H    I\n");
    for (row = 0; row < ROW; row++){

        if (row == 2 || row == 3){
            printf("[%c]", labels[row]);     // display the labels
        }else{
            printf("%c  ", labels[row]);
            }

        for (column = 0; column < COLUMN; column++){
            printf("%5d", road_networks[row][column]);      // print the individual array values
        }printf("\n");
    }
