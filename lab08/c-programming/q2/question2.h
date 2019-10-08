#define MAX_NUM_COMMANDS  1000
#define pipeSep  "|"                            
#define conSep   "&"                             
#define seqSep   ";"                           

struct CommandStruct {
   int first;     
   int last;       
   char *sep;  
   char **argv;
   char *stdin_file;
   char *stdout_file;
};

typedef struct CommandStruct Command;
  
int separateCommands(char *token[], Command command[]);