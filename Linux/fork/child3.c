#include<stdio.h>
#include<unistd.h>
int main()
{
        if(fork()==0)
                printf("child-1 pid=%d, ppid=%d\n",getpid(),getppid());
        else
	{
                if(fork()==0)
                        printf("child-2 pid=%d, ppid=%d\n",getpid(),getppid());
                else
		{
			if(fork()==0)
                        	printf("child-3 pid=%d, ppid=%d\n",getpid(),getppid());
			else
                		printf("parent pid=%d, ppid=%d\n",getpid(),getppid());

		}
	}
}


