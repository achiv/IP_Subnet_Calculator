#include<iostream>
#include<math.h>
using namespace std;


unsigned int Setc(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}

int main(){
	

	int i;
	int ch1,ch2,ch3;
	int A,B,C,D,P,Q,R,S;
//	cout<<"\nEnter choice";
	cout<<"\nClassful Subnetting";
//	cout<<"\n2.Classless Subnetting\n\n";
//	cin>>ch1;

//Classful
//	if(ch1==1)
//	{

		cout<<"\nEnter Choice";
		cout<<"\n1.Find Subnet of an IPv4 address\n\n";
		//cout<<"\n2.Calculate all Subnets of a Subnet Mask\n\n";
		cin>>ch2;

//IPv4 address
		if(ch2==1)
		{
			cout<<"\nEnter IPv4 address (A.B.C.D) : \n";

			cout<<"\nA : ";
			cin>>A;

			cout<<"\nB : ";
			cin>>B;
			
			cout<<"\nC : ";
			cin>>C;
			
			cout<<"\nD : ";
			cin>>D;

//Class C --------------- Class C --------------- Class C --------------- Class C --------------- Class C

			if ((A>=192 && A<=223) && (B>=0 && B<=255) && (C>=0 && C<=255) && (D>=0 && D<=255))
			{
				cout<<"\nEnter Subnet Mask (P.Q.R.S) : \n";

				cout<<"\nP : ";
				cin>>P;

				cout<<"\nQ : ";
				cin>>Q;
				
				cout<<"\nR : ";
				cin>>R;
				
				cout<<"\nS : ";
				cin>>S;

				if((P==255) && (Q==255) && (R==255) && (S>=0 && S<=255))
				{

				cout<<"\n# IP Address     : "<<A<<"."<<B<<"."<<C<<"."<<D;
				cout<<"\n# Subnet Mask    : "<<P<<"."<<Q<<"."<<R<<"."<<S;

// SM to Pl

				int pc = Setc(P);
				int qc = Setc(Q);
				int rc = Setc(R);
				int sc = Setc(S);
				
				int Pl = pc + qc + rc + sc;


				cout<<"\n# Prefix Length  : ";
				cout<<"/"<<Pl;

				int Hbits = 32 - Pl;
				int Sbits = Pl;
				int Hnum = pow(2,Hbits) - 2;
				int Bbits = Pl - 24;
				int Nnum = pow(2,Bbits);
				int Bsize = 256 - S;
				int sD;
				int bD;

				cout<<"\n# Class          : C";
				cout<<"\n# No. of Hosts   : "<<Hnum;
				cout<<"\n# Host/Off Bits  : "<<Hbits;
				cout<<"\n# Subnet/On Bits : "<<Sbits;
				cout<<"\n# No. of Subnets : "<<Nnum;
				cout<<"\n# Block Size     : "<<Bsize;

// Subnet & Broadcast ID

				for(i=0;i<=256;i=i+Bsize)
				{
					if(D>=i && D<=i+Bsize)
					{
						sD = i;
						bD = (i+Bsize) - 1;
					}



				}

				cout<<"\n# Subnet ID      : "<<A<<"."<<B<<"."<<C<<"."<<sD;
				cout<<"\n# Broadcast ID   : "<<A<<"."<<B<<"."<<C<<"."<<bD;
				cout<<endl;
				}

				else
				{
					cout<<"\nSubnet Mask not supported\n";

				}

			}
//Class B --------------- Class B --------------- Class B --------------- Class B --------------- Class B
		
			else if ((A>=128 && A<=191) && (B>=0 && B<=255) && (C>=0 && C<=255) && (D>=0 && D<=255))
			{
			
				cout<<"\nEnter Subnet Mask (P.Q.R.S) : \n";

				cout<<"\nP : ";
				cin>>P;

				cout<<"\nQ : ";
				cin>>Q;
				
				cout<<"\nR : ";
				cin>>R;
				
				cout<<"\nS : ";
				cin>>S;

				cout<<"\n# IP Address     : "<<A<<"."<<B<<"."<<C<<"."<<D;
				cout<<"\n# Subnet Mask    : "<<P<<"."<<Q<<"."<<R<<"."<<S;

// SM to Pl

				int pc = Setc(P);
				int qc = Setc(Q);
				int rc = Setc(R);
				int sc = Setc(S);
				
				int Pl = pc + qc + rc + sc;


				cout<<"\n# Prefix Length  : ";
				cout<<"/"<<Pl;

				int Hbits = 32 - Pl;
				int Sbits = Pl;
				int Hnum = pow(2,Hbits) - 2;
				int Bbits = Pl - 16;
				int Nnum = pow(2,Bbits);
				int Bsize = 256 - R;
				int sC;
				int bC;

				cout<<"\n# Class          : B";
				cout<<"\n# No. of Hosts   : "<<Hnum;
				cout<<"\n# Host/Off Bits  : "<<Hbits;
				cout<<"\n# Subnet/On Bits : "<<Sbits;
				cout<<"\n# No. of Subnets : "<<Nnum;
				cout<<"\n# Block Size     : "<<Bsize;

// Subnet & Broadcast ID

				for(i=0;i<=256;i=i+Bsize)
				{
					if(C>=i && C<=i+Bsize)
					{
						sC = i;
						bC = (i+Bsize) - 1;
					}



				}

				cout<<"\n# Subnet ID      : "<<A<<"."<<B<<"."<<sC<<"."<<D;
				cout<<"\n# Broadcast ID   : "<<A<<"."<<B<<"."<<sC<<"."<<D;
				cout<<endl;


			}

//Class A --------------- Class A --------------- Class A --------------- Class A --------------- Class A
			else if ((A>=1 && A<=126) && (B>=0 && B<=255) && (C>=0 && C<=255) && (D>=0 && D<=255))
			{
				cout<<"\nEnter Subnet Mask (P.Q.R.S) : \n";

				cout<<"\nP : ";
				cin>>P;

				cout<<"\nQ : ";
				cin>>Q;
				
				cout<<"\nR : ";
				cin>>R;
				
				cout<<"\nS : ";
				cin>>S;

				cout<<"\n# IP Address     : "<<A<<"."<<B<<"."<<C<<"."<<D;
				cout<<"\n# Subnet Mask    : "<<P<<"."<<Q<<"."<<R<<"."<<S;;

// SM to Pl

				int pc = Setc(P);
				int qc = Setc(Q);
				int rc = Setc(R);
				int sc = Setc(S);
				
				int Pl = pc + qc + rc + sc;


				cout<<"\n# Prefix Length  : ";
				cout<<"/"<<Pl;

				int Hbits = 32 - Pl;
				int Sbits = Pl;
				int Hnum = pow(2,Hbits) - 2;
				int Bbits = Pl - 8;
				int Nnum = pow(2,Bbits);
				int Bsize = 256 - Q;
				int sB;
				int bB;

				cout<<"\n# Class          : A";
				cout<<"\n# No. of Hosts   : "<<Hnum;
				cout<<"\n# Host/Off Bits  : "<<Hbits;
				cout<<"\n# Subnet/On Bits : "<<Sbits;
				cout<<"\n# No. of Subnets : "<<Nnum;
				cout<<"\n# Block Size     : "<<Bsize;

// Subnet & Broadcast ID

				for(i=0;i<=256;i=i+Bsize)
				{
					if(B>=i && B<=i+Bsize)
					{
						sB = i;
						bB = (i+Bsize) - 1;
					}



				}

				cout<<"\n# Subnet ID      : "<<A<<"."<<sB<<"."<<C<<"."<<D;
				cout<<"\n# Broadcast ID   : "<<A<<"."<<bB<<"."<<C<<"."<<D;
				cout<<endl;


			}

			else
			{
				cout<<"\nNot a valid IP address\n";

			}


		}
				
		


//	}
/*
//Classless
	else
	{

		cout<<"\nEnter choice\n";
		cout<<"1. Fixed Length Subnet Mask\n";
		cout<<"2. Variable Length Subnet Mask\n\n";
		cin>>ch3;

		if(ch3==1)
		{
			cout<<"Enter choice\n";

			cout<<"Enter IPv4 address (A.B.C.D) : \n";

			cout<<"\nA : ";
			cin>>A;

			cout<<"\nB : ";
			cin>>B;
			
			cout<<"\nC : ";
			cin>>C;
			
			cout<<"\nD : ";
			cin>>D;

			cout<<"\nEnter Subnet Mask (P.Q.R.S) : \n";

				cout<<"\nP : ";
				cin>>P;

				cout<<"\nQ : ";
				cin>>Q;
				
				cout<<"\nR : ";
				cin>>R;
				
				cout<<"\nS : ";
				cin>>S;			




			
		}


	}
*/

	return 0;
}