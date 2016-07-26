#include "algorithms.h"
#include "math.h"
#define INT_MAX 32767(*Math.pow(2,15)-1)
// ============================================================================
// Recursive functions
// ----
// Since the genomes are circular, it is necessary to store the initial input
// (except with get_minimum_r). If these algorithms are mis-implemented, they
// can easily result in infinite loops.
// ============================================================================

struct Link * get_minimum_r(struct Link * link, size_t order_by, struct Link * current_min){

    if(order_by == 0){
        link = cpm_by_a();
    }
    else if(order_by == 1){
        link = cmp_by_b();
        }
        else{
            printf("Please enter a 0 or 1");
        }

    return link;
}

void recursive_print_r(struct Link * link, size_t order_by, struct Link * stop_link){
  int smallest = INT_MAX;
  struct Link * current = link;
  int i = 0;
  struct Link * final = link;
  
    if(order_by == 0){
         while(link->next != final){
            struct Link * current = link;
            if(link->p[0] < link->next->p[0]){
                link = link->next;
            }
            while(link->next.p[0] < link->p[0]){
                if(link->next->p[0] < link->p[0]){
                    
                }
            }
        }
        while(link->next != final){
            print_link(link);
            link = link->next;
        }
    }
    
    
    
    else if(order_by == 1){
       
        while(link->next != final){
            print_link(link);
            link = link ->next;
        }
    }
    
    
    
    
    
    else{
        printf("Please enter a valid value");
    }
    
    

}

struct Link * winnow_r(struct Link * link, float threshold, struct Link * stop_link){
    // insert code for stop link
    while(link != stop_link){
        if(link.score < threshold){
            delete_link(link);
            link = link->next;
        }
        else {
            link = link->next;
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
