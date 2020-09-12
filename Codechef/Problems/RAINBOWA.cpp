#include <stdio.h>
 
int main()
{
    int casos;
    scanf("%i",&casos);
    
    while(casos>0)
    {
        int len;
        scanf("%i",&len);
        int array[len];
        for(int i = 0; i < len; i++){
            scanf("%i",&array[i]);
        }
 
        bool rain = true;
        int parada = len/2;
        if(array[parada] != 7) rain = false;
        else{
            for(int i = 0, j = len-1; i <= parada && rain; i++, j--){
                rain = (array[i] != array[j]) || (array[i] > 7) ? false:true;
            }
        }
 
        if(rain) printf("yes\n");
        else printf("no\n");
        
        casos--;
    }
    return 0;
}