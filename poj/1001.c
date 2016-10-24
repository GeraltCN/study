#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char R[10];
  char product[200];
  int n;
  void multiPlicative(char a[], char b[], char bazinga[], int leading);
  void sorted(char beSorted[]);
  while(scanf("%s%d",R,&n)){

  }
}

void multiPlicative(char a[],char b[],char bazinga[], int leading)
{
  int dog ,p = 0 ,carry = 0 ,on = 0;
  leading = 0 ;
  char copy[100], singleCopy[2];
  singleCopy[1]='\0';
  strcpy(copy,a);
  if (b[1] == '\0'){
    dog = atoi(b);
    while(a[p] != '\0'){
      on =( dog * (int)a[p] + carry) % 10;
      carry = (dog * (int)a[p] + carry ) / 10;
      bazinga[p] = (char)on;
      p++;
    }
    if(carry!=0) bazinga[++p]=carry;
    bazinga[++p]='\0';
  }else{
    while(1){}
  }
}

void sorted(char beSorted[]){
  int length(char beCalculated[]);
  char midStation[200];
  int len=length(beSorted), p=0;
  midStation[len]='\0';
  for(len=len-1;len>=0;len--){
    midStation[p]=beSorted[len];
    p++;
  }
}

int length(char beCalculated[]){
  int len=0;
  while(beCalculated[len] != '\0'){
    len+=1;
  }
  return len;
}
