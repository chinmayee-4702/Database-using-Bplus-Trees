#include<stdio.h>
#include<stdlib.h>
#include"BPT.h"
#include<string.h>
//bool verbose_output = false;
//#define s 50
// MAIN

int main( int argc, char ** argv ) {
	node * root;
	int input, range2;
	char instruction;
	root = NULL;
	verbose_output = false;
	//char NAME[50];
    
    printf("Welcome To Database Server\n");
    printf("Chinmayee Kulkarni 112003074\n");
    usage_1();  
	//usage_2();
	printf("> ");
	
	int marks;
	
	char NAME[100];
	while (scanf("%c", &instruction) != EOF) {
		switch (instruction) {
		case 'd':
			scanf("%d", &input);
			root = deleteBP(root, input);
			print_tree(root);
			break;
		case 'i':
			printf("Enter your MIS :");
			scanf("%d", &input);
			fflush(stdin);
			printf("\nEnter your name:");
			fflush(stdin);
			//char*NAME = (char*)malloc(sizeof(char)*s);
			scanf("%s",NAME);
			printf("\nEnter the marks obtained:");
			scanf("%d",&marks);
			
			root = insert(root, input, input,marks,NAME);
			print_tree(root);
			break;
		case 'f':
		case 'p':
			scanf("%d", &input);
			find_and_print(root, input, instruction == 'p');
			printf("\n");
			break;
		case 'r':
			scanf("%d %d", &input, &range2);
			if (input > range2) {
				int tmp = range2;
				range2 = input;
				input = tmp;
			}
			find_and_print_range(root, input, range2, instruction == 'p');
			break;
		case 'l':
			print_leaves(root);
			break;
		case 'q':
			while (getchar() != (int)'\n');
			return EXIT_SUCCESS;
		case 't':
			print_tree(root);
			break;
		case 'x':
			if (root)
				root = destroy_tree(root);
			print_tree(root);
			break;
		default:
			usage_2();
			break;
		}
		while (getchar() != (int)'\n');
		printf("> ");
	}
	printf("\n");

	return EXIT_SUCCESS;

}
