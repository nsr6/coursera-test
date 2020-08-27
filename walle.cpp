#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
  cout<<"Enter the msg:";
  char msg[100];
  cin.getline(msg,100);
  int i, j, key;
  cout<<"Enter key";
  cin>>key;
  char ch;
  for(int i=0;msg[i]!='/0';++i)
  {
  ch = msg[i];
       //encrypt for lowercase letter
       if (/* condition */) 
       {
         /* code */
       } (ch >= 'a' && ch <= 'z')
       {
          ch = ch + key;
          if (ch > 'z')
          {
             ch = ch - 'z' + 'a' - 1;
          }
        }
          msg[i] = ch;

       //encrypt for uppercase letter
      elseif (ch >= 'A' && ch <= 'Z')
       {
          ch = ch + key;
          if (ch > 'Z')
          {
             ch = ch - 'Z' + 'A' - 1;
          }
          msg[i] = ch;
        }
    }
    printf("Encrypted message: %s", msg);
}
