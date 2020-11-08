#include <iostream>
using namespace std;



struct node
{
    int a;
    node *next=NULL;

    void insert()
    {
       cout<<"\n"<<"insert a value ";
        cin>>a; 
    }

     void show()
    {
        cout<<"value inserted is ";
        cout<<a;

    }

};

void addele(node *head)
{
    node *curr = head;
    node n;

    while(!(curr->next==NULL))  
    {
        curr=curr->next;  
    }
    curr->next=&n;
    
    n.insert();
    n.show();

    
}





void delele(node *head)
{
    node *one,*two;
    one=head;
    two=head;
    int count=0;
    

    while(!(two->next==NULL))  
    {
        two=two->next;  
        count++;
    }

    while (count!=1)
    {
       one=one->next; 
       count--;
    }
     one->next=NULL;
         
    
}





void display(node *head)
{
    node *curr = head;

    while(!(curr->next==NULL))  
    {
        cout<<curr->a;
        curr=curr->next;  
    }
        
}





int main()
{   
    cout<<"hello world \n ";
    int ch;

    node n,*h;
    h=&n;

    while (1)
    {
        cout<<" 1. Add Element \n";
        cout<<" 2. Delete Element \n";
        cout<<" 3. Display list \n";
        cout<<" 4. Exit \n";
        cin>>ch;

        switch (ch)
        {
        case 1:addele(h);
            break;
        case 2:delele(h);
            break;
        case 3:display(h);
            break;
        
        default:cout<<"not chossen correct :( ";
            break;
        }
        if (ch==4)
        {
            return 0;
        }
        
    }
    
    return 0 ;
}