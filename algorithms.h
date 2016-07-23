#include "map.h"

/**
 * Return the Link with the lowest position
 *
 * Parameters
 * 1. link - current link to print
 * 2. order_by - 0 or 1, specifying which genome we are ordering by
 */
struct Link * get_minimum(struct Link * link, size_t order_by);

/**
 * Print Link structures in specified order
 *
 * Parameters:
 * 1. link - current link to print
 * 2. order_by - 0 or 1, specifying which genome we are ordering by
 */
void recursive_print(struct Link * link, size_t order_by);

/**
 * Remove all entries in the list with scores below a given threshold
 *
 * Parameters
 * 1. link - current link to print
 * 2. threshold - minimum score required to retain a link
 */
struct Link * winnow(struct Link * link, float threshold);
