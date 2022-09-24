#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
      int  mynum, num, stime, ltime;
     ltime = time(NULL);
    stime = (unsigned)ltime / 2;
    srand(stime);
 
    num = rand();
    mynum = num%50;
    printf("\n the num is  = %d\n\n",mynum);
    return 0;
}


// int main()
// {
//     int x[14]={34,23,12,54,65,76,86,67,99,87,100} , s=0,i,y=10;
//     for ( s=0; s < 13; s++)
//     {
//         for ( i = 0; i < s; i++)
//         {
            
//             if(x[s]<x[i]) {
//                 y=20;
//             }
//             if(x[s]<x[s+1]) {
//                 y=20;
//             }
//             if(y==20) {
//                 break;
//             }
//         }
//         if(y!=20) {
//             printf("%d is record breaking at %d\n", x[s],s+1);
//         }
//         y=10;
//         printf("\n");
        
//     }
//         return(0);

    


















    // for ( i = 0; i < 4; i++)
    // {
    //     printf(" %d , ", x[i]);

    // }
    // for ( i = 1; i < 4; i++)
    // {
    //     s=0;
    //     printf("{%d , %d} " , x[s] , x[i]);
    // }
    //  for ( i = 2; i < 4; i++)
    // {
    //     s=1;
    //     printf("{%d , %d} " , x[s] , x[i]);
    // }
    //  for ( i = 3; i < 4; i++)
    // {
    //     s=2;
    //     printf("{%d , %d} \n" , x[s] , x[i]);
    // }

    // for ( i = 2; i < 4; i++)
    // {
    //     s=0; q=1;
    //       printf("{ %d , %d , %d }", x[s] , x[q] , x[i]);
    // }
    // for ( i = 3; i < 4; i++)
    // {
    //     s=1; q=2;
    //     printf("{ %d , %d , %d }", x[s] , x[q] , x[i]);
    // }
    // for ( i = 0; i < 4; i++)
    // {
    //     printf("{ %d , %d , %d , %d}", x[0], x[1],x[2],x[3]);
    //     break; 
    // }
    
    
      


    
    
    
// }