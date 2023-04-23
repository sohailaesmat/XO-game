#include <iostream>
using namespace std;

char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
void print ();

int main()
{ int x,o;
string name1,name2;
        cout<<"Enter name of x player : ";
        cin>>name1;
        cout<<"Enter name of 0 player : ";
        cin>>name2;
        cout<<endl;
        
        for(int i=1;i<=9;i++)
        { cout<<endl;
            print();
            
            cout<<name1<<" enter your position number : ";
            cin>>x;
            cout<<name2<<" enter your position number : ";
            cin>>o;
            if(x==o)
            cout<<"two players are select the same podition try again"<<endl;
            else
            {
                switch(x)
                {
                case 1: a='x';break;
                case 2: b='x';break;
                case 3: c='x';break;
                case 4: d='x';break;
                case 5: e='x';break;
                case 6: f='x';break;
                case 7: g='x';break;
                case 8: h='x';break;
                case 9: i='x';break;
                default:break;
                }
               switch(o)
                {
                case 1: a='o';break;
                case 2: b='o';break;
                case 3: c='o';break;
                case 4: d='o';break;
                case 5: e='o';break;
                case 6: f='o';break;
                case 7: g='o';break;
                case 8: h='o';break;
                case 9: i='o';break;
                default:break;
                }
            }
               //line -> x
            if(a=='x' && b=='x' && c=='x')
            {cout<<name1<<", you are win and good luck to you "<<name2;break;}
             else if (d=='x' && e=='x' && f=='x')
            {cout<<name1<<", you are win and good luck to you "<<name2;break;}
             else if (g=='x' && h=='x' && i=='x')
            {cout<<name1<<", you are win and good luck to you "<<name2;break;}
            
            //line -> o
             else if(a=='o' && b=='o' && c=='o')
            {cout<<name2<<", you are win and good luck to you "<<name1;break;}
             else if (d=='o' && e=='o' && f=='o')
            {cout<<name2<<", you are win and good luck to you "<<name1;break;}
             else if (g=='o' && h=='o' && i=='o')
            {cout<<name2<<", you are win and good luck to you "<<name1;break;}
            
            //vertical -> o
            else if(a=='o' && d=='o' && g=='o')
            {cout<<name2<<", you are win and good luck to you "<<name1;break;}
            else if (b=='o' && e=='o' && h=='o')
           { cout<<name2<<", you are win and good luck to you "<<name1;break;}
           else  if (c=='o' && f=='o' && i=='o')
            {cout<<name2<<", you are win and good luck to you "<<name1;break;}
            
            //vertical -> x
            else if(a=='x' && d=='x' && g=='x')
           { cout<<name1<<", you are win and good luck to you "<<name2;break;}
            else if (b=='x' && e=='x' && h=='x')
            {cout<<name1<<", you are win and good luck to you "<<name2;break;}
           else  if (c=='x' && f=='x' && i=='x')
           { cout<<name1<<", you are win and good luck to you "<<name2;break;}
            
            //corse -> x
            else if(a=='x' && e=='x' && i=='x')
            {cout<<name1<<", you are win and good luck to you "<<name2;break;}
            else if (c=='x' && e=='x' && g=='x')
            {cout<<name1<<", you are win and good luck to you "<<name2;break;}
            
             //corse -> o
           else  if(a=='o' && e=='o' && i=='o')
            {cout<<name2<<", you are win and good luck to you "<<name1;break;}
            else if (c=='o' && e==o && g=='o')
            {cout<<name2<<", you are win and good luck to you "<<name1;break;}
        }
    return 0;
}

void print ()
{
    cout<<"|\t"<<a<<"\t|"<<"\t"<<b<<"\t|"<<"\t"<<c<<"\t|"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"|\t"<<d<<"\t|"<<"\t"<<e<<"\t|"<<"\t"<<f<<"\t|"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"|\t"<<g<<"\t|"<<"\t"<<h<<"\t|"<<"\t"<<i<<"\t|"<<endl;
}

