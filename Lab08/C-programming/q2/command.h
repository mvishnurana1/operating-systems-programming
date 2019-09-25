// file:		command.h for Week 8
// purpose;		to separate a list of tokens into a sequence of commands.
// assumptions:		any two successive commands in the list of tokens are separated 
//			by one of the following command separators:
//				"|"  - pipe to the next command
//				"&"  - shell does not wait for the proceeding command to terminate
//				";"  - shell waits for the proceeding command to terminate
// author:		HX
// date:		2006.09.21
// last modified:	2006.10.05
// note:		not tested therefore it may contain errors

#define MAX_NUM_COMMANDS  1000

// command separators
#define pipeSep  "|"                            // pipe separator "|"
#define conSep   "&"                            // concurrent execution separator "&"
#define seqSep   ";"                            // sequential execution separator ";"

struct CommandStruct {
   int first;      // index to the first token in the array "token" of the command
   int last;       // index to the first token in the array "token" of the command
   char *sep;	   // the command separator that follows the command,  must be one of "|", "&", and ";"
};

typedef struct CommandStruct Command;  // command type


// purpose:
//		separate the list of token from array "token" into a sequence of commands, to be
//		stored in the array "command". 
// 
// return:
//		1) the number of commands found in the list of tokens, if successful, or
//		2) -1, if the the array "command" is too small. 
//		3) < -1, if there are following syntax errors in the list of tokens. 
//			a) -2, if any two successive commands are separated by more than one command separator
//			b) -3, the first token is a command separator
//			c) -4, the last command is followed by command separator "|"
//
// assume:
//		the array "command" must have at least MAX_NUM_COMMANDS number of elements
//
//  note:
//		1) the last command may be followed by "&", or ";", or nothing. If nothing is 
//		   followed by the last command, we assume it is followed by ";".
//		2) if return value, nCommands >=0, set command[nCommands] to NULL, 
// 
int separateCommands(char *token[], Command command[]);
