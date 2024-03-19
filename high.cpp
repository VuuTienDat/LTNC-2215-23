#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a[10000];
   int n; cin >>n;
   map<int ,int> ms;
   for(int i = 0; i < n; i++ ){
    cin >>a[i];
    ms[a[i]]++;


   }
   bool flag = flag;
   for(auto  it = ms.begin(); it != ms.end(); it++)
   {
       if(it->second > 1){flag = true; break;}
   }
    if(flag){cout << "Yes" <<endl;}
    else cout << "No" << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin >>s;
 int c= s.length();
 bool flag = true;

 for(int i =0 ; i < c/2 ;i++){
    if(s[i] != s[c-1-i]){flag=false;

     break;}

 }
 if(flag){cout <<"Yes"<< endl;}
 else cout << "No" << endl;

}
#include <bits/stdc++.h>
using namespace std;
bool so_doi_guong(int n)
{
   string s = to_string(n);
   int c= s.length();
   for(int i=0 ; i<c/2; i++)
   {
       if(s[i] != s[c-1-i]){return false;
       }
   }
   return true;
}
int main()
{
   int n; cin >> n;
   while(n--)
   {
      int a, b;
       cin >> a >> b;
       int i =a;
       int tong =0;
       while(i  <=b){
        if(so_doi_guong(i)) tong ++;

        i++;
       }
       cout << tong << endl;
   }
}
#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int n,m;
    cin >> n >>m;
    char a[n][m];
    for(int i =0 ; i < n; i++)
    {
        for(int j =0 ; j< m; j++)
        {
           cin >> a[i][j];

        }
    }
    for(int i =0 ; i < n; i++)
    {
        for(int j =0 ; j< m; j++)
        {
          if(a[i][j] != '*'){
                int tong = 0;
            for(int h = -1; h < 2; h++)
            {

               for(int k = -1 ; k < 2; k++ )
               {
                  if(i+h <0 || j+k <0|| i + h > n-1 || j +k > m-1 ){continue;}
                 else if(a[i+h][j+k]=='*'){tong ++;}
               }
            }
            a[i][j]= tong +'0';

          }

        }
    }
     for(int i =0 ; i < n; i++)
    {
        for(int j =0 ; j< m; j++)
        {
           cout  << a[i][j] << ' ';

        }
        cout << endl;
    }

 }
#include <bits/stdc++.h>
using namespace std;

 int main()
 { int n,m ; cin >> n >> m;
   int a[n+1][m+1];
   int  i=1,j =1;
   int rightcol = m, leftcol =1,uprow =2 ,downrow = n,  num =1;
   const int c = n*m;
  while(num <= c){
   while( j <= rightcol&& num <=c){
    a[i][j] = num ++; j++; }
   rightcol--;
   i++;
   j--;

   while (i <= downrow&& num <=c){
    a[i][j]= num ++; i++;}
    downrow--;
    i--;
    j--;


//1   2  3  4  5
//
//14 15 16 17  6
//
//13 20 19 18  7
//
//12 11 10  9  8
   while(j >=leftcol&& num <= c){
    a[i][j]= num++ ; j--;}
    leftcol++;
    i--;
    j++;


   while(i >= uprow &&  num <= c){
   a[i][j]= num ++; i--;}
   uprow++;
   i++;
   j++;

  }
     for(int h = 1 ; h <=n ; h++)
     {
         for(int k = 1 ; k <= m; k++ )
         {
             cout << a[h][k] <<' ';
         }
         cout << endl;
     }
   return 0;
 }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin >>n;
  int i =1;
  vector <int > ms;

  while(i <= n)
  {
      int a[i];
      a[0]=1;
      a[i-1]=1;
      if(i > 2){
        for(int k = 1 ; k < i-1  ; k++)
        {
           a[k] = (ms[k-1]+ ms[k]);

        }

      }
    ms.clear();
    for(int k = 0; k < i ; k++){
            cout << a[k] << ' ';
            ms.push_back(a[k]);}
    cout << endl;


    i++;
  }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class SinhVien{
   private:
       double toan,ly,anh;
   public:
     static bool sxToan(SinhVien &a, SinhVien &b){return a.toan < b.toan; }
     static bool sxLy(SinhVien &a, SinhVien &b){return a.ly < b.ly; }
     static bool sxAnh(SinhVien &a, SinhVien &b){return a.anh < b.anh; }

      friend istream &operator >> (istream &in, SinhVien &);
      friend ostream &operator << (ostream &out, SinhVien &);

};
   istream &operator >> (istream &in, SinhVien &a){
    in >> a.toan >> a.ly >> a.anh;
    return in;  }
   ostream &operator << (ostream &out, SinhVien &a){
      out << a.toan << ' ' << a.ly <<' ' << a.anh;
      return out;

      }

 int main()
 {    int n; cin >> n;
     SinhVien sv[n];
     for(int i = 0; i <n;i++){
        cin >> sv[i];
     }
    for(int p = 1 ; p <= 3; p++ ){

   if(p==1){sort(sv,sv+n,SinhVien::sxToan); cout << "Sap xep theo Mon Toan:" << endl;}
   else if(p==2){sort(sv,sv+n,SinhVien::sxLy);  cout << "Sap xep theo Mon Ly:" << endl;}
   else if(p==3){sort(sv,sv+n,SinhVien::sxAnh);cout << "Sap xep theo Mon Anh:" << endl;}
   for(int i =0 ; i < n;i++){cout << sv[i] << endl;}
    }
 }
