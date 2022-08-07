#include <stdio.h>

int main(){
  /**   
   * take 3 input and replace it 
   */

  char color[20];
  char prural[20];
  char name[30];

  printf("enter color \n");
  scanf("%s",&color);

  printf("Enter Plural noun \n");
  scanf("%s\n",&prural);

  printf("Enter name \n" );
  fgets(name,30,stdin);

  printf("Roses are %s\n",color);
  printf("%s are blue\n",prural);
  printf("i love %s",name);

  return 0; 


}