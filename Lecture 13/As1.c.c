#include <stdio.h>
#include <math.h>

// structure to represent a line
struct line{
    // nested structure to represent a point
    struct point{
        float x;
        float y;
    }   point1, point2, midpoint;   // variables for two points and the midpoint of the line
    float slope;    // variable for slope
    float distance;     // variable for distance
};

float solveSlope(struct line line1);
struct point solveMidpoint(struct line line1);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1);


int main(){
    struct line line1;
    printf("Enter x and y for point: ");
    scanf("%f%f", &line1.point1.x, &line1.point1.y);
    printf("Enter x and y for point 2: ");
    scanf("%f%f", &line1.point2.x, &line1.point2.y);

    line1.slope = solveSlope(line1);
    printf("Slope: %f\n", line1.slope);    
    line1.midpoint = solveMidpoint(line1);
    printf("Midpoint: %f, %f\n", line1.midpoint.x, line1.midpoint.y);
    line1.distance = solveDistance(line1);
    printf("Distance between 2 points: %f\n", line1.distance);
    getSlopeInterceptForm(line1);

    return 0;
}

//calculate the slope of a line
float solveSlope(struct line line1){
    return (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
}

//calculate the midpoint of a line
struct point solveMidpoint(struct line line1){
    struct point midpoint;
    midpoint.x = (line1.point1.x + line1.point2.x) / 2;
    midpoint.y = (line1.point1.y + line1.point2.y) / 2;
    return midpoint; 
}

//calculate the distance between two points
float solveDistance(struct line line1){
    return sqrt(pow(line1.point2.x - line1.point1.x, 2) + pow(line1.point2.y - line1.point1.y, 2));
}

//convert to slope-intercept form (y = mx + b) using the slope and one of the points
void getSlopeInterceptForm(struct line line1){
    line1.slope = solveSlope(line1);
    float b = line1.slope*(-line1.point1.x) + line1.point1.y;
    printf("y = %fx + %f", line1.slope, b);
}
