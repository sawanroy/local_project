#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_t th[2];
unsigned int shared_var=0;
pthread_mutex_t mutex;
unsigned int rc;
void print_even(void*);
void print_odd(void*);


void main(void){

    printf("Enter into main");
    pthread_create(&th[0],NULL,&print_even,NULL);
    pthread_create(&th[1],NULL,&print_odd,NULL);
    sleep(3);

    pthread_join(th[0],NULL);
    pthread_join(th[1],NULL);

}


void print_even(void *ptr){
    pthread_mutex_lock(&mutex);
    do{
        if(shared_var%2==0){
            printf("Even : %d\n",shared_var);
            shared_var++;
        }
        else{
            rc=pthread_mutex_unlock(&mutex);

        }
    }while(shared_var<=100);
    
};

void print_odd(void *ptr){
    pthread_mutex_lock(&mutex);
    do{
        if(shared_var%2!=0){
            printf("Odd : %d\n",shared_var);
            shared_var++;
        }
        else{
            rc=pthread_mutex_unlock(&mutex);

        }
    }while(shared_var<=100);
    
};

