
#include <stdio.h>
#include <sys/types.h>	
#include <sys/wait.h>	
#include <unistd.h>	

void func(int v, char s[]){

if ((fork() == 0)) {
	printf("%c",s[v]);
	printf(" pid %d from  %d\n",getpid(),getppid());
  if(v>0){
   sleep(1);
  func(v-1, s);
  }
}
else {
	wait (NULL) ;
	
}

}

int main()
{
char a[]="dlroW olleH";
func(10 , a);
return 0;
}

