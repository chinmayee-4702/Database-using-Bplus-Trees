#define bool char
#define false 0
#define true 1

bool verbose_output;
#define MIN_ORDER 3
#define MAX_ORDER 20
#define DEFAULT_ORDER 4


typedef struct record {
	int MIS;
    char*name;
    int marks;


} record;

typedef struct node {
	void ** pointers;
	int * keys;
	struct node * parent;
	bool is_leaf;
	int num_keys;
	struct node * next;
} node;

void usage_1( void );
void usage_2( void );
void usage_3( void );
void enqueue( node * new_node );
node * dequeue( void );
int height( node * root );
int path_to_root( node * root, node * child );
void print_leaves( node * root );
void print_tree( node * root );
void find_and_print(node * root, int key, bool verbose); 
void find_and_print_range(node * root, int range1, int range2, bool verbose); 
int find_range( node * root, int key_start, int key_end, bool verbose,
		int returned_keys[], void * returned_pointers[]); 
node * find_leaf( node * root, int key, bool verbose );
record * find( node * root, int key, bool verbose );
int cut( int length );

// Insertion.
#define s 50

node * insert( node * root, int key, int value,int marks,char*name);


record * make_record(int value,int marks,char*name);
node * make_node( void );
node * make_leaf( void );
int get_left_index(node * parent, node * left);
node * insert_into_leaf( node * leaf, int key, record * pointer );
node * insert_into_leaf_after_splitting(node * root, node * leaf, int key, record * pointer);
node * insert_into_node(node * root, node * parent, 
		int left_index, int key, node * right);
node * insert_into_node_after_splitting(node * root, node * parent, int left_index, 
		int key, node * right);
node * insert_into_parent(node * root, node * left, int key, node * right);
node * insert_into_new_root(node * left, int key, node * right);
node * start_new_tree(int key, record * pointer);
// Deletion.


node * deleteBP( node * root, int key );
int get_neighbor_index( node * n );
node * adjust_root(node * root);
node * coalesce_nodes(node * root, node * n, node * neighbor, int neighbor_index, int k_prime);
node * redistribute_nodes(node * root, node * n, node * neighbor, int neighbor_index, 
		int k_prime_index, int k_prime);
node * delete_entry( node * root, node * n, int key, void * pointer );
