#include "algorithms.h"

// ============================================================================
// Recursive functions
// ----
// Since the genomes are circular, it is necessary to store the initial input
// (except with get_minimum_r). If these algorithms are mis-implemented, they
// can easily result in infinite loops.
// ============================================================================

struct Link * get_minimum_r(struct Link * link, size_t order_by, struct Link * current_min){

    // TODO: Fill in the code

    return link;
}

void recursive_print_r(struct Link * link, size_t order_by, struct Link * stop_link){

    // TODO: Fill in the code

}

struct Link * winnow_r(struct Link * link, float threshold, struct Link * stop_link){

    // TODO: Fill in the code

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
