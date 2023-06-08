#include<iostream>
using namespace std;

class shop
{
    int itemno[100];
    float price[100];
   
    static int i;
    public:

    void additem()
    {
        cout<<"Enter item no ";
        cin>>itemno[i];
        cout<<"Enter price ";
        cin>>price[i];
        i++;
    }

    void removeitem()
    {
        int r;
        cout<<"Enter the code of item to remove ";
        cin>>r;
        for(int j=0;j<=i;j++)
        {
            if(itemno[j]==r)
            {
                itemno[j]=-1;
                price[j]=0.0;
                break;
            }
        }
    }
    void displayitem()
    {
        float totalprice=0.0;
        if(i==0)
        {
            cout<<"Your list is empty please add item ";

        }
        else{
            cout<<"Item code              price "<<endl;
            for(int j=0;j<i;j++)
            {
                if(itemno[j]>0)
                {
                    cout<<itemno[j]<<"                 "<<price[j]<<endl;
                    totalprice+=price[j];
                }
            }
            cout<<"Total price "<<totalprice<<endl<<endl;
        }
    }
};
int shop::i=0;

int main()
{
    shop ob;
    int ch,flag;
    do{
        cout<<"Enter 1 for add item "<<endl;
        cout<<"Enter 2 for remove item "<<endl;
        cout<<"Enter 3 for display price item "<<endl;
        cout<<"Enter 0 to exit "<<endl<<endl;

        cout<<"Enter your choice "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
              ob.additem();
              break;
            case 2:
              ob.removeitem();
              break;
            case 3:
              ob.displayitem();
              break;
            case 0:
              flag=0;
              break;
            default:
              cout<<"wrong no try again "<<endl;
        }
    }while(ch!=0);
}