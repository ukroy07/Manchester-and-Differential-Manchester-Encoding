
#include<iostream>

using namespace std;

void manchester_encoding(int &no_b, int bitarr [])
{
    cout<<"------------------------After Manchester Encoding--------------------------\n";
    for(int i=0;i<no_b;i++)
        {
            if(bitarr[i] == 0)
            cout<<"01 ";
            if(bitarr[i] == 1)
            cout<<"10 ";
        }
}

void differential_manchester_encoding(int &no_b, int & m_bit, int bitarr[])
{
    cout<<endl<<"--------------------------After Differential Manchester Encoding----------------------------\n";
    for(int i=0;i<no_b;i++)
        {
            if(bitarr[i]==0)
                if(m_bit != 0)
                {
                    cout<<"01 ";
                    m_bit = 1;
                }
                else
                {
                    cout<<"10 ";
                    m_bit=0;
                }
            else
                if(m_bit != 0)
                {
                    cout<<"10 ";
                    m_bit=0;
                }
                else
                {
                    cout<<"01 ";
                    m_bit = 1;
                }
        }
}

int main()
{
    int no_b,m_bit;
    int bitarr[50];

    cout<<"Enter the total number of bits :  ";
    cin>>no_b;
    cout<<"Enter the stream of bits with space after each bit : " ;

    for(int i=0;i<no_b;i++)
    {
        // Taking the stream of bits
        cin>>bitarr[i];
    }

    cout<<"Enter the Manchester bit : ";
    cin>>m_bit;
    cout<<"\n";
    manchester_encoding(no_b, bitarr );
    cout<<"\n";
    differential_manchester_encoding(no_b,m_bit,bitarr);

    return 0;
}

