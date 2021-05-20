char copy(char name);
int getdata(char *student, char *line);
char *strstr(char*, char*);

typedef struct treenode {
  char *name;
  char *program;
  char *belt;
  struct treenode *left;
  struct treenode *right;
} node;

node* insert(char *name, char *program, char *belt, node* pos);
void show(node* position);
void alpha(node* position);