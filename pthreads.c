#include <stdio.h>
#include <pthread.h>

void* func(void* arg)
{
	pthread_detach(pthread_self());
	printf("Inside the thread\n");
	pthread_exit(NULL);
}

int main()
{
    pthread_t ptid;
	pthread_create(&ptid, NULL, &func, NULL);
	printf("This line may be printed before thread terminates\n");
	if(pthread_equal(ptid, pthread_self()))
		printf("Threads are equal\n");
	else
		printf("Threads are not equal\n");

	pthread_join(ptid, NULL);

	printf("This line will be printed after thread ends\n");

	pthread_exit(NULL);
	return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                