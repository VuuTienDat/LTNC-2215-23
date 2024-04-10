#include <bits/stdc++.h>
using namespace std;
 void reverse(char *s,int c){

   for(int i =0; i < c/2;i++){
     swap(s[i],s[c-i-1]);

   }
 s[c]='\0';

 }
int main(){
  char s[]= "Hello";
    int c = sizeof(s)/sizeof(char)-1;
  cout << s << endl;
  reverse(s,c);
  cout << s << endl;
}
 void delete_char(char s[], char c, int n)
 {
    for(int i =0; i < n; i++)
    {
        if(s[i]== c){
            for(int j = i ; j < c-1; j++){
                s[j]= s[j+1];
            }
            c--;
            s[c]='\0';

        }
    }
 }
#include <iostream>
using namespace std;
int  strlen(char c[]){
   int i =0;
  while(c[i] != '\0'){i++;}
  return i;

}
void pad_right(char a[], int n){
  int c = strlen(a);
  if(c >= n ){}
  for(int i = c ; i < n; i++){
    a[i] = '_';

  }
 a[n] = '\0';

}
int main(){
  char s[] ="helllo";
  pad_right(s,10);
  cout << s << endl;



}
#include <iostream>
using namespace std;
int  strlen(char c[]){
   int i =0;
  while(c[i] != '\0'){i++;}
  return i;

}
void reverse(char a[]){
  int c = strlen(a);

  for(int i = 0; i < c/2;i++)
  {
     char temp = a[i];
     a[i]= a[c-1-i];
     a[c-1-i] = temp;
  }


}
void pad_left(char a[], int n){
  int c = strlen(a);
  if(c >= n ){return ;}
  reverse(a);
  for(int i = c ; i < n; i++){
    a[i] = '_';

  }
 a[n]= '\0';
 reverse(a);



}
int main(){
  char s[] ="helllo";
  pad_left(s,10);
  cout << s << endl;



}
#include <iostream>
using namespace std;
int  strlen(char c[]){
   int i =0;
  while(c[i] != '\0'){i++;}
  return i;

}

 void truncate(char a[], int n)
 {
     int c = strlen(a);
     if(c <= n){return ;}
     a[n]='\0';
 }



int main(){
  char s[] ="helllo";
 truncate(s,4);

  cout << s << endl;



}
#include <iostream>
using namespace std;
int  strlen(char c[]){
   int i =0;
  while(c[i] != '\0'){i++;}
  return i;

}


 void trim_left(char a[]){
   int c = strlen(a);
   for(int i =0 ; i < c; i++)
   {
   if(a[i]== ' '){
      for(int j = i; j < c-1 ;j++)
      {
          a[j]=a[j+1];
      }
     c--;

   }
   a[c] = '\0';
   }


 }



int main(){
  char s[] ="   helllo";
 trim_left(s);

  cout << s << endl;



}

#include <iostream>
using namespace std;
int  strlen(char c[]){
   int i =0;
  while(c[i] != '\0'){i++;}
  return i;

}


 void trim_right(char a[]){
   int c = strlen(a),k;
   for(int i =0 ; i < c; i++)
   {
   if(a[i]== ' '){
       k = i;
      break;
   }

   }
  a[k] = '\0';

 }



int main(){
  char s[] ="helllo    ";
 trim_right(s);

  cout << s << endl;



}
