#include<iostream>

void factorial(int l,float *m);

int main()
{
	std::cout<<"Escriba un numero"<<std::endl;
	int x;
	std::cin>>x;
	std::cout<<"\n"<<std::endl;
	float *direccion = new float[x];
	factorial(x,direccion);
	
	return 0;
}

void factorial(int l,float *m)
{ 
	float fact = 1;
	m[0] = fact;
	for (int i =0; i <= l; i++ )
	{
		fact = fact*(i+1);
		m[i+1] = fact;	  
		std::cout << i <<"  Factorial = "<<m[i]<<std::endl;
	}
	delete [] m;
}
