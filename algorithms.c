#include "algorithms.h"

// ============================================================================
// Recursive functions
// ----
// Since the genomes are circular, it is necessary to store the initial input
// (except with get_minimum_r). If these algorithms are mis-implemented, they
// can easily result in infinite loops.
// ============================================================================

struct Link * get_minimum_r(struct Link * link, size_t order_by, struct Link * current_min){

    // where we sort base on what genome a or b
    
    if(order_by == 0){ //a genome
        //use cmp_by_a function
    }
    else if(order_by == 1){ // b genome
        //use cmp_by_b function
    }
    else{
        printf("Please enter 0 or 1");
    }

    return current_min;
}

void recursive_print_r(struct Link * link, size_t order_by, struct Link * stop_link){
    
    //first sort by what genome it is
    if(order_by == 0){
        //use cmp_by_a function
        printf("");
    }
    else if(order_by == 1){
        ///use cmp_by_b function
        printf("");
    }
    else{
        printf("Please enter 0 or 1");
    }
    

}

struct Link * winnow_r(struct Link * link, float threshold, struct Link * stop_link){

    while(next != NULL){
        if(link.score < threshold){
            delete_link(link);
            next = next->next;
        }
    }

    return link;
}


// ============================================================================
// These functions are wrappers for the real recursive functions.
// ============================================================================
struct Link * get_minimum(struct Link * link, size_t order_by){
    return get_minimum_r(link, order_by, link->p[order_by]->next->parent);
}

void recursive_print(struct Link * link, size_t order_by){
    recursive_print_r(link, order_by, link->p[order_by]->prev->parent);
}

struct Link * winnow(struct Link * link, float threshold){
    return winnow_r(link, threshold, link->p[0]->prev->parent);
}
