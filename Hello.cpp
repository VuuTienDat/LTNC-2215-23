#include <bits/stdc++.h>
using namespace std;
void printf(vector<vector <char>> &a)
{
    const int m = a.size();
    const int n = a[0].size();
    for(int i = 0; i  < m ;i++)
    {
       for(int j =0 ; j < n; j++)
       {
          cout << a[i][j] <<' ';
       }
       cout << endl;
    }
    cout << endl;
}
void KHOI_TAO(vector<vector<char>> &a,int m,int n)
{
    for(int i =0 ; i <m;i++)
    {
        for(int j =0; j <n ; j++)
        {
           char arr[]={'.','*'};
           a[i][j]= arr[rand()%2];
        }
    }
}
char DO_BOM(vector<vector<char >> &a, int x , int y)
{ const  int m = a.size();
  int tong =0 ;
  const int n = a[0].size();

   for(int i = -1 ; i < 2 ; i++){

    for(int j =-1 ; j < 2; j++)
    {
      if(x + i < 0 || y + j < 0 || x + i > m - 1 || y + j > n-1){continue;}
      else if(a[x+i][y+j] == '*'){tong ++;}
    }
   }
  return tong+'0';
}
void SHOW_MAP(vector <vector <char>> &fake, int x, int y, char diem){
    fake[x][y] = diem;
   printf(fake);

}
 void DO_MiN( vector<vector<char >> &a,vector<vector <char>> &fake, int m , int n){
  bool red = true;
  for(int i =0 ; i < m;i++)
   {
    bool flag = true;
       for(int j = 0; j < n;j++)
       {
           int x,y; cin >> x>>y;
           if(a[x][y]=='*'){flag = false;break;}
           else {

             char diem = DO_BOM(a,x,y);
             SHOW_MAP(fake,x,y,diem);

           }

       }
      if(!flag){red=false;break;}
   }
 if(!red){cout << "YOU ARE DEAD" << endl;}

 }

int main()
{   srand(time(NULL));
   vector <vector <char>> ms(5,vector <char>(5));
   vector <vector <char>> fake(5,vector <char>(5,'$'));
   KHOI_TAO(ms,5,5);
   printf(ms);
   DO_MiN(ms,fake,5,5);

}
#include <bits/stdc++.h>
using namespace std;
 bool isPrime(int n){
  if ( n <2){return false;}
   if(n ==2){return true;}
   for(int i =2; i <= n/2 ; i++){if( n % i ==0){return false;}}
   return true;
 }
 int main()
 {
     int n;
     cin >> n;
     for(int i = 0 ; i <= n; i++){
        if(isPrime(i)){cout << i <<' ';}
     }


 }
#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
 if(b==0){return a;}
 return ucln(b,a%b);

}
 void Input(int &a, int &b){

  cin >> a >> b;
  if(a==0|| b==0){
        cout << "Nhap so khac khong " << endl;
        Input(a,b);}

 }
 void NTCN(int a, int b){
  if(ucln(a,b)==1){cout << "Nguyen to cung nhau" << endl;}
  else {cout << "Khong nguyen to cung nhau " << endl;}
 }
 int main()
 {
     int a,b;
     Input(a,b);

     cout << ucln(a,b)<< endl;
     NTCN(a,b);


 }
#include <bits/stdc++.h>
using namespace std;
int main(){

 int n; cin >>n;
 for(int i =0 ; i < n;i++)
 {
    cout << string(n-i-1,' ')<< string(2*i+1,'*') << endl;
 }


}
#include <bits/stdc++.h>
using namespace std;
 int rnd(double num) {
    double decimal_part = num - static_cast<int>(num);
    if(decimal_part < 0.5) {
        return static_cast<int>(num);
    }
        return static_cast<int>(num+1);}
   int rnd1(double num) {
    double decimal_part = num - static_cast<int>(num);
    if(decimal_part < 0.5) {
        return static_cast<int>(num);
    }
        return ceil(num+1);}

int main(){
 double a; cin >> a;
 cout << rnd(a)<< endl;
 cout << rnd1(a);


}
#include <bits/stdc++.h>
using namespace std;
 int main()
{   int n; cin >>n;
    srand(time(NULL));
   int k = rand() % n;
   cout << k << endl;

}
#include <bits/stdc++.h>
using namespace std;
void create_a_matrix(int a[], int n)
{
        int i =0;
    while(i < n)
    {
       a[i]= rand() % 50;
       i++;

    }

}
void Printf_result(int a[], int n){
    for(int k = 0 ; k < n; k++ )
    {
        for(int j =k+1; j<n;j++)
        {
            for(int h = j+1; h < n; h++)
            {
               int b = a[k] %25;
               int c=a[h] % 25;
               int d= a[j] %25;
               if(b + c + d ==25 || b + c + d ==0){cout << a[k]<<' ' << a[j] << ' ' << a[h] << endl;}
            }
        }
    }



}
 int main()
{
    srand(time(NULL));
    int n; cin >>n;
    int a[n];
    create_a_matrix(a,n);
    Printf_result(a,n);


}


#include <bits/stdc++.h>
using namespace std;
  string doi_so_nhi_phan(int n)
  {
      vector <char> ms;
      while(n > 0){
        ms.push_back(n%2+'0');
        n= n/2;


      }
      reverse(ms.begin(), ms.end());
      return string(ms.begin(),ms.end());
  }
  int chuyen_he_10(string s){
    int tong = 0;
   int c = s.size();
   for(int i =0; i <c ;i++)
   {
     tong += (s[c-i-1]-'0')* pow(2,i);
   }


  }

 int main()
 {

     string s;
     cin >>s;
     cout << chuyen_he_10(s) << endl;
     int  n; cin >>n;
     cout << doi_so_nhi_phan(n)<< endl;


 }


