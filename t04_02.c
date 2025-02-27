// 12S24015 - Lucas Pardede
// 12S24044 - Dianita Lorensia Br Ginting

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc){
      char input[21];
      fgets(input, sizeof(input), stdin);
  
      
      size_t len = strlen(input);
      if (len > 0 && input[len - 1] == '\n') {
          input[len - 1] = '\0';
      }
  
      
      for (int i = 0; i < strlen(input); i++) {
          printf("%03d", (int)input[i]); 
      }
      printf("013\n"); 
  
      return 0;
}