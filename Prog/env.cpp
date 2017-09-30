#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#define N 5
using namespace std;
int main(int argc, char **argv, char **envp)
{
	int i,j;
	cout<<"Command line arg count : "<<argc<<endl;
	cout<<"Command line args "<<endl;
	for(int i=0;i<argc;i++)
	{
		cout<<"\tArg "<<i + 1<<" : "<< argv[i]<<endl;
		//(unsigned int)argv[i] << ", " <<argv[i]<<endl;
		printf("Arg :%d Address : %u arg:%s\n", i+1, argv[i],argv[i]);
	}
	j=1;
	while((*envp))
	{
		cout<<"Environment Variables : "<<*envp<<endl;
		envp++;
		j++;
		cout<<j<<endl;
	}
	char *user = getenv("USER");
	if(user)
	{
		cout<<"Username = "<<user<< ""<<endl;
	}
	else
		cout<<"Error";
	return 0;
}

//boooooooo
