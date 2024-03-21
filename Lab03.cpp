#include<bits/stdc++.h>
using namespace std;


int dfa=0;
//state 1
void q0(char c)
{
if(c>=48 && c<=57)
   {
       dfa =1;
   }
   else if(c=='.')
    {
    dfa =2;
    }
    else
    {
        dfa=-1;
    }

}
//state 2
void q1(char c)
{
    if(c=='.')
   {
       dfa =2;
   }
   else if(c>=48 && c<=57)
    {
    dfa =1;
    }
    else if(c=='e' || c=='E')
    {
        dfa=4;
    }
    else {
        dfa=-1;
    }

}
//state 3
void q2(char c)
{ if(c>=48 && c<=57)
   {
       dfa =3;
   }
 /*  else if(c=='.')
    {
    dfa =-1;
    }*/
    else
    {
        dfa=-1;
    }

}
//final state
void q3(char c)
{

    if(c>=48 && c<=57)
   {
       dfa =3;
   }

    else if(c=='e' || c=='E')
    {
        dfa=4;
    }
    else
        dfa=-1;

}

void q4(char c)
{
if(c=='^')
   {
       dfa =5;
   }
    /*
   else if(c=='.')
    {
    dfa =3;
    }
    */
    else
    {
        dfa=-1;
    }

}
void q5(char c)
{
if(c>=48 && c<=57)
   {
       dfa =6;
   }
   else if(c=='.')
    {
    dfa =7;
    }
    else
    {
        dfa=-1;
    }

}
void q6(char c)
{
   if(c>=48 && c<=57)
   {
       dfa =6;
   }
   else if(c=='.')
    {
    dfa =7;
    }
    else
    {
        dfa=-1;
    }

}
void q7(char c)
{
if(c>=48 && c<=57)
   {
       dfa =8;
   }
   /*else if(c=='.')
    {
    dfa =7;
    }*/
    else
    {
        dfa=-1;
    }

}
void q8(char c)
{
if(c>=48 && c<=57)
   {
       dfa =8;
   }
   /*else if(c=='.')
    {
    dfa =3;
    }*/
    else
    {
        dfa=-1;
    }

}

int accepted(char str[])
{  int i,len=strlen(str);
   for( i=0; i<len; i++)
   {
       if(dfa==0)
        q0(str[i]);


        else if(dfa==1)
        q1(str[i]);
        else if(dfa==2)
        q2(str[i]);
        else if(dfa==3)
        q3(str[i]);
        else if(dfa==4)
        q4(str[i]);
        else if(dfa==5)
        q5(str[i]);
        else if(dfa==6)
        q6(str[i]);
        else if(dfa==7)
        q7(str[i]);
        else if(dfa==8)
        q8(str[i]);


   }
   if(dfa==8 || dfa ==6)
    return 1;
   else return 0;

}
int main()
{ char str[]="11.11e^11";
if(accepted(str))
cout<<" exponential";
else
cout<<"Not a Exponential";

    return 0;
}




