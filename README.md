


# Database Management Using BPlus Trees
- This is an attempt to create a database management system using B Plus tree.
- Student's Name, MIS, Marks are stored 
- Various Operations like Inserting new data into the database,Deleting record from database,Displaying records within a particular range, Retriveing inserted records from dataabase can be performed using this system


## Features of BPlus Tree 

- The B+ tree is a balanced binary search tree. It follows a multi-level index format.
- In the B+ tree, leaf nodes denote actual data pointers. 
- B+ tree ensures that all leaf nodes remain at the same height.
- In the B+ tree, the leaf nodes are linked using a link list. 
- Therefore, a B+ tree can support random access as well as sequential access.
- These features make BPlus Tree Data structure the most commanly used DS for Database management.
## Time Complexity of  BPlus Tree
- Time Complexity : The time complexity of each linear search is O(t). 
- Thus, the total time complexity of the B+tree search operation is O(t logt n)

## Demo
- All the operations being perfomed can be seen "screenshots" folder. 

## Run Command

Clone the project

```bash
  git clone https://github.com/chinmayee-4702/Database-using-Bplus-Trees
```

Go to the project directory

```bash
  cd BPT
```



Run the project

```bash
  ./db.out
```

