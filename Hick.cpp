1.#include <iostream>
#include <cstring>
using namespace std;
int str_len(const char *a)
  {
      int i = 0 ;
    while(a[i] != '\0')
    {
      i++;
    }
     return i;

  }
char* reverse(const char * a)
  {
     int c= str_len(a);

     char *s =  new char[c];
     strncpy(s,a,c);
     for(int i =0; i < c/2 ;i++)
     {
         swap(s[i],s[c-1-i]);
     }
   s[c] = '\0';
     return s;
  }

int main()
  {

  const char *a = "hello world";
  cout << reverse(a);


  }
2.
#include <iostream>
#include <cstring>
using namespace std;
int str_len(const char *a)
  {
      int i = 0 ;
    while(a[i] != '\0')
    {
      i++;
    }
     return i;

  }
char* xoa_ki_tu(const char * a, char d)
  {
     int c= str_len(a);

     char *s =  new char[c];
     strncpy(s,a,c);
     for(int i = 0; i < c; i++)
     {
        if(s[i] == 'd'){
          for(int j = i ; j < c-1; j++)
          {
             s[j] = s[j+1];

          }
            c--;
            s[c] = '\0';
        }
     }
     return s;
  }
3.
    #include <iostream>
    #include <cstring>
    using namespace std;
    int str_len(const char *a)
      {
          int i = 0 ;
        while(a[i] != '\0')
        {
          i++;
        }
         return i;

      }
    char* don_phai(const char * a, int n)
      {
         int c= str_len(a);

         char *s =  new char[c];
         strncpy(s,a,c);
        if(c < n)
        {
          for(int i = c ; i < n ;i++)
          {
              s[i] = '_';
          }
          s[n] = '\0';
        }
         return s;
      }

int main()
  {

  const char *a = "hello world";
  cout << don_phai(a,13);


  }
4.
    #include <iostream>
    #include <cstring>
    using namespace std;
    int str_len(const char *a)
      {
          int i = 0 ;
        while(a[i] != '\0')
        {
          i++;
        }
         return i;

      }
    char* don_trai(const char * a, int n)
      {
         int c= str_len(a);
        if(c < n)
        {
           char *s = new char [n];
           for(int i =0 ; i < n- c; i++){s[i]= '_';}
           s[n-c] = '\0';
           strcat(s,a);
           return s;
        }

         return nullptr;
      }

int main()
  {

  const char *a = "hello world";
  cout << don_trai(a,13);


  }
5.
    #include <iostream>
    #include <cstring>
    using namespace std;
    int str_len(const char *a)
      {
          int i = 0 ;
        while(a[i] != '\0')
        {
          i++;
        }
         return i;

      }
    char* trim_left(const char * a)
      {
         int c= str_len(a);
         int k;
        for(int i = 0 ; i < c ; i++)
        {
           if(a[i] != '_'){k = i; break;}
        }
        char *s = new char[c-k];
        strcpy(s,a+k);



         return s;
      }

int main()
  {

  const char *a = "__hello world";
  cout << trim_left(a);


  }
6.
    #include <iostream>
    #include <cstring>
    using namespace std;
    int str_len(const char *a)
      {
          int i = 0 ;
        while(a[i] != '\0')
        {
          i++;
        }
         return i;

      }
    char* trim_right(const char * a)
      {
        int c = str_len(a);
        char * s = new char(c);
        strcpy(s,a);
        for(int i = 0; i < c;i++)
        {
           if(s[i] == '_'){s[i] = '\0'; break;}
        }


         return s;
      }

int main()
  {

  const char *a = "hello world__";
  cout << trim_right(a);



  }



