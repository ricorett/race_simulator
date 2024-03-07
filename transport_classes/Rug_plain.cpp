#include "Rug_plain.h"

int Rug_plain::check_range(){
    if (range <= 0){
        return IVALID_RANGE;
    }
    if (range < 1000){
        range_reduction = 0;
    } else {
        (range < 5000 && range >= 1000){
            range_reduction = 3;
        } else {
            (range < 10000 && range >= 5000){
                range_reduction = 10;
            } else {
                (range >= 10000){
                    range_reduction = 5
                }
            }
        }
    }
    return range_reduction;
}
