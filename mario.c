#include <stdio.h>
#include <cs50.h>

int main(void){
   int height;
do{
   height = get_int("Enter a height between 1 and 8:");
}
while(height<1||height>8);


for(int i=0; i<height;i++){

   for(int j=0; j<height;j++){

    //side note: if you don't get this later , don't sweat it
    //try first to solve is as a regular 8x8, 4x4, 3x4 etc. square
    //"" "" "" *  <= then solve it as if "" were characters
     if(i+j<height-1){
        printf(" ");
     }
     else{
        printf("*");
     }
   }

printf("\n");
}

}