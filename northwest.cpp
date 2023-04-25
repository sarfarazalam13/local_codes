#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 50
enum boolean{FALSE,TRUE};
class nwcmethod{
    int data[MAX][MAX];
    int requered[MAX];
    int capacity[MAX];
    int allocation[MAX][MAX];
    int no_of_rows,no_of_columns,no_of_allocation;
    public:
        nwcmethod(){
            for(int i=0;i<MAX;i++){
                capacity[i]=0;
                requered[i]=0;
                for(int j=0;j<MAX;j++){
                    data[i][j]=0;
                    allocation[i][j]=0;
                }
            }
            no_of_rows=no_of_columns=no_of_allocation=0;
        }
        void setColumn(int no){no_of_columns=no;};
        void setRow(int no){no_of_rows=no;}
        void getData();
        void getCapacity();
        void getRequiredValue();
        void makeAllocation();
        boolean checkValue(int [],int);  
        void display();
};
boolean nwcmethod::checkValue(int arr[],int no){
    for(int i=0;i<no;i++)
        if(arr[i]!=0)
            return FALSE;
    return TRUE;
}
void arrayCopy(int start,int end,int array1[],int start1,int array2[]){
    for(int i=start,j=start1;i<end;i++,j++){
        array2[j]=array1[i];
    }
}
int getTotal(int array[],int no){
    int sum=0;
    for(int i=0;i<no;i++)
        sum+=array[i];
    return sum;
}
void nwcmethod::makeAllocation(){
    int i=0,j=0;
    int temp_requered[MAX]={0};
    int temp_capacity[MAX]={0};
    int sum_of_cap,sum_of_req;
    sum_of_cap=getTotal(capacity,no_of_rows);
    sum_of_req=getTotal(requered,no_of_columns);
    if(sum_of_cap!=sum_of_req){
        if(sum_of_cap>sum_of_req){
            for(j=0;j<no_of_rows;j++)
                data[j][no_of_columns]=0;
            requered[no_of_columns]=sum_of_cap-sum_of_req;
            no_of_columns++;
        }
        else{
            for(j=0;j<no_of_columns;j++)
                data[no_of_rows][j]=0;
            capacity[no_of_rows]=sum_of_req-sum_of_cap;
            no_of_rows++;
        }
    }
    i=j=0;
    arrayCopy(0,no_of_rows,capacity,0,temp_capacity);
    arrayCopy(0,no_of_columns,requered,0,temp_requered);
    while(!checkValue(temp_capacity,no_of_rows) || !checkValue(temp_requered,no_of_columns)){
        if(temp_capacity[i]>temp_requered[j]){
            allocation[i][j]=temp_requered[j];
            temp_capacity[i]-=temp_requered[j];
            temp_requered[j]=0;
            j++;
        }
        else if(temp_capacity[i]<temp_requered[j]){
            allocation[i][j]=temp_capacity[i];
            temp_requered[j]-=temp_capacity[i];
            temp_capacity[i]=0;
            i++;
        }
        else{
            allocation[i][j]=temp_capacity[i];
            temp_capacity[i]=temp_requered[j]=0;
            i++;
            j++;
        }
        no_of_allocation++;
    }
}
void nwcmethod::getCapacity(){
    cout<<"enter capacity for each source : \n";
    for(int i=0;i<no_of_rows;i++){
        cout<<"s"<<i+1<<" : ";
        cin>>capacity[i];
    }
}
void nwcmethod::getRequiredValue(){
    cout<<"enter required unit value for each destination : \n";
    for(int i=0;i<no_of_columns;i++){
        cout<<"d"<<i+1<<" : ";
        cin>>requered[i];

    }
}
void nwcmethod::display(){
    int i;
    cout<<"\ngiven data :\n";
    cout<<setw(9);
    for(i=0;i<no_of_columns;i++)
        cout<<"D"<<i+1<<setw(4);
    cout<<setw(5)<<"cap"<<endl<<setw(0);
    for(i=0;i<no_of_rows;i++){
        cout<<setw(3)<<"S"<<i+1;
        for(int j=0;j<no_of_columns;j++)
            cout<<setw(5)<<data[i][j];
        cout<<setw(5)<<capacity[i]<<endl;
    }
    cout<<setw(4)<<"req";
    for(i=0;i<no_of_columns;i++)
        cout<<setw(5)<<requered[i];

    cout<<"\n\n after allocation :\n";
    for(i=0;i<no_of_rows;i++){
        for(int j=0;j<no_of_columns;j++){
            if(allocation[i][j]!=0)
                cout<<"\t"<<data[i][j]<<"*"<<allocation[i][j];
            else
                cout<<"\t"<<data[i][j];
        }
        cout<<endl;
    }
    int k=0,sum=0;
    for(i=0;i<no_of_rows;i++){
        for(int j=0;j<no_of_columns;j++){
            if(allocation[i][j]!=0){
                cout<<"("<<data[i][j]<<"*"<<allocation[i][j]<<")";
                if(k<no_of_allocation-1){
                    cout<<"+";
                    k++;
                }
                sum+=data[i][j]*allocation[i][j];
            }
        }
    }
    cout<<"\nanswer : "<<sum;
    if((no_of_rows+no_of_columns-1)==no_of_allocation){
        cout<<"\nhere "<<no_of_rows<<"+"<<no_of_columns<<"-1 ="<<no_of_allocation<<" no. of allocations";
        cout<<"\n so this problem is non-degenarated solution";
    }
    else{
        cout<<"\nhere "<<no_of_rows<<"+"<<no_of_columns<<"-1 !="<<no_of_allocation<<"no of allocations";
        cout<<"\n so this problem is degenarated solution";
    }
}
void nwcmethod::getData(){
    cout<<"enter source to destination data:"<<endl;
    for(int i=0;i<no_of_rows;i++){
        cout<<"enter "<<i<<"th row : ";
        for(int j=0;j<no_of_columns;j++){
            cin>>data[i][j];
        }
    }
}
int main()
{
    nwcmethod m1;
    int r,c;
    cout<<"enter no of Rows : ";
    cin>>r;
    cout<<"enter no of columns : ";
    cin>>c;

    m1.setColumn(c);
    m1.setRow(r);

    m1.getData();
    m1.getCapacity();
    m1.getRequiredValue();
    m1.makeAllocation();
m1.display();
    return 0;
}