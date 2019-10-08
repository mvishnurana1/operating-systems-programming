#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <sys/dir.h>

int main(int argc, char* argv[])
{
    DIR *directory;
    struct dirent *presentfile;
    struct stat thestat;
    struct passwd *ownerN; 
    struct group *groupN;
    char buf[1024];

   for(int i =1; i < argc; i++)
   {		
	directory = opendir(argv[i]);

    		while((presentfile = readdir(directory)) != NULL) 
    		{   
			if  (argc  ==  1) 
			{	
			     sprintf(buf, "%s/%s", ".", presentfile->d_name);		
			}
			else
			{
			     sprintf(buf, "%s/%s", argv[i], presentfile->d_name);
			}
       
			      
     			   ownerN = getpwuid(thestat.st_uid);
			   groupN = getgrgid(thestat.st_gid);

        			printf("\nfile name : %s", presentfile->d_name);
				printf("\nThe i-node number is : % ld", presentfile->d_ino);

    }
   	 closedir(directory);

   }

}

