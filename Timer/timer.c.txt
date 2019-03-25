#include <time.h>
#include <stdio.h>
 
int main(void)
{    
    clock_t start, stop;
 
    start = clock(); //Time that connection started
     
    //Your code that you want to get timed between 
 
    stop = clock(); //Time that request completed

        
    double total_waiting_time = ((double)(stop - start) / CLOCKS_PER_SEC);

    
    
    printf("Elapsed time: %.10f seconds\n", total_waiting_time);
    
 
    
    return 0;
}
