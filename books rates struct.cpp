#include <iostream>
using namespace std;
struct books{
	int id;
	float price ;
	int pages;
};
int main(){
	books b[5];
	int max,t =0,m;
	int avg ;
	for(int i=0; i<5;i++){
		cout<<"enter the ID :";
		cin>>b[i].id;
		cout<<"enter the pages :";
		cin>>b[i].pages;
		cout<<"enter the price :";
		cin>>b[i].price;
	}
	max=b[0].price;
	m=0;
	for(int i=0; i<5; i++){
		if (b[i].price>max){
			max=b[i].price;
			m=i;
		}
	}
	cout <<"The most costly book is :";
	cout<<"Book id :"<<b[m].id<<endl;
	cout<<"Book pages :"<<b[m].pages<<endl;
    cout<<"Book price :"<<b[m].price<<endl;
    return 0;

}
