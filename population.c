#include <stdio.h>
#include <cs50.h>
int main(void){
    //string chicken = get_string("What's your name?");
    //printf("Hey,%s",chicken);
    // Prompt for start size
    int start;
   do{
       start = get_int("Starting Size:");
   }
   while(start<9);

    // Prompt for end size
     int end;
   do{
       end = get_int("Ending Size:");
   }
   while(end<start);
 // Calculate number of years until we reach threshold(So basically update start(forumla) every loop until it hits end threshold.Year will increment with loop)

   int years = 0;
     while(start<end){
          printf("Start:%i\n", start);
   

    start= start + (start/3)- (start/4);
         years++;
     }

     // Print number of years
     printf("Years:%i\n", years);
     

    



}
