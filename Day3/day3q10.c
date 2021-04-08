#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, length,flag=0;
    
    
    printf("Enter a string:\n");
    scanf("%s", str);
    
    length = strlen(str);
    
    for(i=0;i < length ;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag==1) {
        printf("%s is not a palindrome", str);
    }    
    else {
        printf("%s is a palindrome", str);
    }
    
}
