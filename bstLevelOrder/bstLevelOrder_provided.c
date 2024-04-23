#include <stdlib.h>
#include <stdio.h>


typedef struct BSTNode BSTNode;
struct BSTNode {
    int key;
    struct BSTNode* l_child; 
    struct BSTNode* r_child; 
};

// Add new data to the BST using recursion
/* ... */

// Delete the BST using recursion
/* ... */


// LINKED LIST IMPLEMENTATION OF QUEUE

// queue needed for level order traversal
/* ... */

// Append a new QueueNode to the back of the Queue
void enqueue ( Queue* queue, BSTNode* data ) {
  /* ... */
}


int main ( int argc, char* argv[] ) {

    // READ INPUT FILE TO CREATE BINARY SEARCH TREE
    FILE* fp = fopen(argv[1], "r");
    if (!fp) {
        perror("fopen failed");
        return EXIT_FAILURE;
    }
    BSTNode* root = NULL;
    int key;
    while ( fscanf(fp, "%d", &key)!=EOF ) {
        root = insert (root, key);
    }
    fclose(fp);

    // USE A QUEUE TO PERFORM LEVEL ORDER TRAVERSAL
    Queue queue = { .front=NULL, .back=NULL };
    BSTNode* currBSTNode = root;
    do {
        /* ... */
    } while ( currBSTNode!=NULL );

    delete_bst(root);
    return EXIT_SUCCESS;
}
