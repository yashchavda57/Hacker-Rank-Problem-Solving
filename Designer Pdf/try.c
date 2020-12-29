
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int i;
    char str[26];
    int n;
    int temp;
    int value[26];
    char curr_char;
    int height[26];
    
    
    for( i=97;i<97+25;++i){
        scanf("%d",&value[i]);
    }

    gets(str) ;
    n = strlen(str) ;
    
    
    
    
    for( i=0;i<n;i++){
    	curr_char=str[i];
    	int temp = printf("%d",curr_char);
    	height[i] = value[temp];
		
	}
	
	for( i = 1;i < n; ++i)
            {
               if(height[0] < height[i])
                   height[0] = height[i];
            }
            
    printf("%d",height[0]*temp);
    
}

