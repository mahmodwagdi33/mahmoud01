#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    while(true)
    {
        cout<<" hello every one ";
        int Result;
        cout<<"\n1-Cipher a message.\n2-deCipher a message.\n";
        cin>>Result;
        if (Result==1||2)
        {
            string text,ans;
            cout<<"Please Enter the message : \n";
            cin>>text;
            for(int i=0; i<text.size(); ++i)
            {
                if( ( (int)text[i]>=65 && (int)text[i]<=77 ) || ( (int)text[i]>=97 && (int)text[i]<=109 ) )
                {
                    ans+= ( ( char ) ( ( int ) text [ i ] + 13 ) );
                }
                else if( ( (int)text[i]>=78 && (int)text[i]<=90 ) || ( (int)text[i]>=110 && (int)text[i]<=122 ) )
                {
                    ans+= ( ( char ) ( ( int ) text [ i ] - 13 ) );
                }
                else if( text[i]==' ' )
                {
                    ans += ' ';
                    continue;
                }
                else
                {
                    cout<<"Please enter only letters !!"<<endl;
                    break;
                }
            }
            cout<<ans<<endl;
        }
        }
        return 0;
    }
