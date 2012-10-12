#include <iostream>
#include "insertsort.h"

using namespace std;

void insert_sort();
void choose_sort();
void exchange_sort();
void bubble_sort();

template <typename T>

void insert_sort(T A[], int n)
{
    int i, j;
    T temp;

    for (i = 1; i < n; i++)
    {
        j = i;
        temp = A[i];
        while (j > 0 && temp < A[j-1])
        {
            //逐个比较，直到temp>=A[j-1]时，j便是应插入的位置。
            //若达到j==0，则0是应插入的位置。

            A[j] = A[j-1];

            //将元素逐个后移，以便找到插入位置时可立即插入。
            j--;
        }

        A[j] = temp;

        for(int k=0;k<n;k++)
        {
            cout << A[k] << " ";
        }
        cout << endl;
    }
}

template <typename T>

void Swap (T &x, T &y)  //交换x和y的值
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <typename T>

void choose_sort(T A[], int n)
{
    int smallIndex; //选出的最小元素之下标
    int i, j;

    for (i = 0; i < n-1; i++)
    {
        smallIndex = i; //最小元素之下标初值设为i

        for (j = i+1; j < n; j++)
        {
            if (A[j] < A[smallIndex])// smallIndex记录最小值的下标
            {
                smallIndex = j;
            }
        }

        Swap(A[i], A[smallIndex]); // 最小元素与A[i]交换

        for(int k=0;k<n;k++)
            cout << A[k] << " ";
        cout << endl;
    }

}

template <typename T>

void exchange_sort(T A[], int n)
{
    int i,j;
    int lastExchangeIndex;

    i = n-1;

    while (i > 0)
    {
        lastExchangeIndex = 0;  //设置交换标志为0（未交换）

        for (j = 0; j < i; j++)
        {
            if (A[j+1] < A[j]) //如果元素A[j+1] < A[j]，交换
            {
                Swap(A[j],A[j+1]);
                lastExchangeIndex = j;//记录被交换的一对元素中较小的下标

            }
        }

        i = lastExchangeIndex;// i为最后一对元素中较小的下标

        for(int k=0;k<n;k++)
            cout << A[k] << " ";
        cout << endl;
    }
}

template <typename T>

void bubble_sort(T A[], int n)
{
    int i,j;
    int lastExchangeIndex;

    i = n-1;

    while (i > 0)
    {
        lastExchangeIndex = 0;

        for (j = 0; j < i; j++)
            if (A[j+1] > A[j]) //如果元素A[j+1] < A[j]，交换
            {
                Swap(A[j],A[j+1]);
                lastExchangeIndex = j; //记录被交换的一对元素中较小的下标
            }

        i = lastExchangeIndex;// i为最后一对元素中较小的下标

        for(int k=0;k<n;k++)
            cout << A[k] << " ";
        cout << endl;

    }

}

int main(int argc,char *argv[])
{
    int num;
    cout<<"\n对数组{1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20}进行排序\n"<<endl;
    cout<<"请选择排序方法(按数字回车):"<<endl<<"1-插入排序"<<endl
        <<"2-选择排序"<<endl
        <<"3-交换排序"<<endl
        <<"4-冒泡排序(降序)"<<endl;

    step:   cin>>num;

    switch(num)
    {
    case 1:
    {
        int i;

        int data1[]={1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
        cout << "排序前的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;
        cout << "开始排序..." << endl;
        insert_sort(data1, 20);
        cout << "排序后的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;

        break;
    }
    case 2:
    {
        int i;

        int data1[]={1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
        cout << "排序前的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;
        cout << "开始排序..." << endl;
        choose_sort(data1, 20);
        cout << "排序后的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;

        break;
    }
    case 3:
    {
        int i;

        int data1[]={1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
        cout << "排序前的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;
        cout << "开始排序..." << endl;
        exchange_sort(data1, 20);
        cout << "排序后的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;

        break;
    }
    case 4:
    {
        int i;

        int data1[]={1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
        cout << "排序前的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;
        cout << "开始排序..." << endl;
        bubble_sort (data1, 20);
        cout << "排序后的数据：" << endl;
        for(i=0;i<20;i++)
            cout << data1[i] << " ";
        cout << endl;

        break;
    }
    default:
    {
        cout<<"输入错误，请重新输入"<<endl;
        goto step;
    }
    }
    return 0;
}

