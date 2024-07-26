# include <stdio.h>
# include <stdlib.h>

int main(){
    int i = 0, j;
    if(i == 0){
       printf("\n |");
       i++;
    }
    for(j = 0;;j++){
        printf("\n /| ");
    }
    return 0;
}