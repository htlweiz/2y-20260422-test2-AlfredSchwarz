/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int16_t count = -1;
  int dice = 0;
  do{
    printf("Geben Sie die Augenanzahl des Würfels ein:");
    scanf("%d", &dice);
    count++;
  }while((dice >= 1) && (dice <= 6));

  printf("Du hast %d Mal gewürfelt.", count);
}
