# include<stdio.h>
void england();
void australia();
void america();

void england(){
  printf("you are in england\n");
  australia();
  return;
}
void australia(){
  printf("you are in australia\n");
  america();
  return;
}
void america(){
  printf("you are in america\n");
  return;
}
int main (){
  england();
  return 0;
}