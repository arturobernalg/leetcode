//
// Created by Arturo Bernal on 11/5/22.
//

#include "EstimatePi.h"

int main(int argc, char **argv) {
    EstimatePi estimatePi;
    int n = atoi(argv[1]);
    cout << "π => " << estimatePi.estimatePi(n) << endl;
    return 0;
}

float EstimatePi::estimatePi(int &n) {

    int point_circle = 0;
    int point_total = 0;

    for (int i = 0; i < n; i++) {
        // old school random uniformly distributed between 0 and 1
        float x = ((float) rand() / (float) RAND_MAX);
        float y = ((float) rand() / (float) RAND_MAX);
        float distance = x * x + y * y;

        //checking if x and y are inside the circle. We need radio <1
        if (distance <= 1) {
            point_circle = point_circle + 1;
        }
        point_total = point_total + 1;
    }

    // πr2/(2^2)^2 4
    // because r=1
    return float(4.0 * point_circle / point_total);
}