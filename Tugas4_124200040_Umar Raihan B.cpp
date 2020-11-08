#include<iostream>
using namespace std ;
int main ()
{
	int pilih, n, m, hk, hp ;
	cout<<"Perkalian dan Perpangkatan"<<endl ;
	cout<<"1.Perkalian"<<endl ;
	cout<<"2.Perpangkatan"<<endl ;
	cout<<"Pilih : ";
	cin>>pilih ;
	switch (pilih)
	{
		case 1 : //perkalian 
		{
			cout<<"input angka N : " ;
			cin>> n ;
			cout<<"input angka M : " ;
			cin>> m ;
			cout<<"Hasil Perkalian"<<n<<" x "<<m<<endl ;
			hk = 1 ;
			for (int loop=1;loop<=n;loop++)
			{
				hk =m*n ;
				if(loop!=n){
					cout<<m<<" + " ;
				}
				else {
					cout<<m<<" = "<<hk<<endl ;
					cout<<"\n" ;
					cout<<"Terima Kasih :)"<<endl ;
				}
			}
		}
	break ;
	
		case 2 : //perpangkatan
		{
			cout<<"Input angka N : " ;
			cin>>n ;
			cout<<"input angka M : " ;
			cin>>m ;
			cout<<"Hasil Perpangkatan"<<n<<" ^ "<<m<<endl ;
			hp = 1 ;
			for(int loop =1; loop<=m;loop++)
			{
				hp *=n ;
				if(loop!=m){
				cout<<n<<" x " ;
				}
				else {
				cout<<n<<" = "<<hp<<endl ;
				cout<<"\n" ;
				cout<<"Terima Kasih :)"<<endl ;
				}
			}		
		}
	}	
}
