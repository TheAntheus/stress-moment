#include <stdio.h>
#include <stdbool.h>

#define ARRAYSIZE 50

typedef struct {
    double x;
    double fx;
    double fy;
} force;

typedef struct {
    double x;
    unsigned int type;
} support;

typedef struct {
    double m;
} moment;

typedef struct {
    double x1;
    double x2;
    double q;
    int power;
} load;

int main(int argc, char *argv[]) {

int numforce = 0;
int nummoment = 0;
int numsupport = 0;
int numload = 0;

printf("Total Number of Forces: ");
scanf("%d", &numforce);
printf("Total Number of Moments: ");
scanf("%d", &nummoment);
printf("Total Number of Supports: ");
scanf("%d", &numsupport);
printf("Total Number of Loads: ");
scanf("%d", &numload);

// Set up blank arrays for forces, moments, supports, loads

force forces[ARRAYSIZE];
moment moments[ARRAYSIZE];
support supports[ARRAYSIZE];
load loads[ARRAYSIZE];

for (int i=0; i<numforce; i++) {
    printf("Force %d:\n", i);
    printf("Enter x location of the force: ");
    scanf("%lf", &forces[i].x);
    printf("Enter x component of force: ");
    scanf("%lf", &forces[i].fx);
    printf("Enter y component of force: ");
    scanf("%lf", &forces[i].fy);
}

for (int i=0; i<nummoment; i++) {
    printf("Moment %d:\n", i);
    printf("Enter value of moment: ");
    scanf("%lf", &moments[i].m);
}

printf("\n");

for (int i=0; i<numsupport; i++) {
    printf("Support %d:\n", i);
    printf("Enter x location of the support: ");
    scanf("%lf", &supports[i].x);
    printf("Enter type of support (1 for pin, 2 for roller): ");
    scanf("%d", &supports[i].type);
}

printf("\n");

for (int i=0; i<numload; i++) {
    printf("Load %d:\n", i);
    printf("Enter x1 location of the load: ");
    scanf("%lf", &loads[i].x1);
    printf("Enter x2 location of the load: ");
    scanf("%lf", &loads[i].x2);
    printf("Enter q of the load: ");
    scanf("%lf", &loads[i].q);
    printf("Enter power of the load (x^p): ");
    scanf("%d", &loads[i].power);
}

//Print out all data
printf("Forces:\n");
for (int i=0; i<numforce; i++) {
    printf("\tForce %d \t x = %lf \t fx = %lf \t fy = %lf\n", i, forces[i].x, forces[i].fx, forces[i].fy);
}
printf("Moments:\n");
for (int i=0; i<nummoment; i++) {
    printf("\tMoment %d \t m = %lf\n", i, moments[i].m);
}

printf("Supports:\n");
for (int i=0; i<numsupport; i++) {
    printf("\tSupport %d \t x = %lf \t type = %d\n", i, supports[i].x, supports[i].type);
}

printf("Loads:\n");
for (int i=0; i<numload; i++) {
    printf("\tLoad %d \t x1 = %lf \t x2 = %lf \t q = %lf \t power = %d\n", i, loads[i].x1, loads[i].x2, loads[i].q, loads[i].power);
}

return 0;
}