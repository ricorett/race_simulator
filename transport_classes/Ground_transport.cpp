#include "Ground_transport.h"

double Ground_transport::time_calc() {
    if (rest_count == 0){
        all_rest = 0;
    } else  if (rest_count == 1){
        all_rest = rest_time;
    } else if (rest_count == 2){
            all_rest = rest_time + (second_time * (rest_count - 1));
    } else {
        all_rest = rest_time + second_time + (third_time * (rest_count - 2));
    }

    final_time = (range/speed) + all_rest;
    return final_time;
}