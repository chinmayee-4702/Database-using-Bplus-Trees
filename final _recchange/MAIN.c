#include<stdio.h>
#include<stdlib.h>
#include"BPT.h"
#include<string.h>
//bool verbose_output = false;

// MAIN

int main( int argc, char ** argv ) {
	node * root;
	int input, range2;
	char instruction;



	root = NULL;
	verbose_output = false;
    printf("Welcome To Database Server");
    int choice;
    scanf("%d",&choice);
if(choice == 1){
    usage_1();  
	//usage_2();
	printf("> ");
	
	int marks;
	//char NAME[50];
	char NAME[100];
	while (scanf("%c", &instruction) != EOF) {
		switch (instruction) {
		case 'd':
			scanf("%d", &input);
			root = deleteBP(root, input);
			print_tree(root);
			break;
		case 'i':

			scanf("%d", &input);
			fflush(stdin);
			printf("\nEnter your name:");
			fflush(stdin);
			scanf("%s",NAME);
			//gets(NAME);
   			//scanf("%[^\n]s",NAME); 
			// gets(NAME);
			// int length = strlen(NAME);
			// char*A = (char*)malloc(sizeof(char)*length);

			printf("\nEnter the marks obtained:");
			scanf("%d",&marks);
			
			root = insert(root, input, input,marks,NAME);
			print_tree(root);
			break;
		case 'f':
		case 'p':
			scanf("%d", &input);
			find_and_print(root, input, instruction == 'p');
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
		case 'v':
			verbose_output = !verbose_output;
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

}