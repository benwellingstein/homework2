
#include "list_mtm.h"
#include <stdio.h>
#include "assert.h"

typedef struct Node {
    ListElement data;
    struct Node* next;
} *Node;


struct List_t {
    Node curr;
    Node listStart;
    CopyListElement copyElement;
    FreeListElement freeElement;
};

/**
 * Allocates a new List.
 *
 * Creates a new empty list. This function receives the functions which will be
 * used for copying elements into the list and freeing them when needed.
 * For example, in order to create a list of strings one need to define these
 * two functions:
 * @code
 * ListElement copyString(ListElement str);
 * void freeString(ListElement str);
 * @endcode
 * And then create a list as follows:
 * @code
 * List listOfStrings = listCreate(copyString, freeString);
 * @endcode
 *
 * @param copyElement Function pointer to be used for copying elements into
 * the list or when copying the list.
 * @param freeElement Function pointer to be used for removing elements from
 * the list.
 * @return
 * 	NULL - if one of the parameters is NULL or allocations failed.
 * 	A new List in case of success.
 */
List listCreate(CopyListElement copyElement, FreeListElement freeElement);
