#include<iostream>

void factorial(int l,double *m);

int main()
{
  std::cout<<"Escriba un numero"<<std::endl;
  int x;
  std::cin>>x;
  std::cout<<"\n"<<std::endl;
  double *direccion = new double[x];
  factorial(x,direccion);
return 0;
}

void factorial(int l,double *m)
{ 
  int i;
  int j;
  std::cout<<"Factoriales"<<std::endl;
  for (i =0; i <= l; i++ )
  {
	  if(i==0 || i ==1)
	  {
		  m[i] = 1;
	  }
	  else
	  {
		  m[i]=1;
		  for(j = 2;j<=i;j++)
		  {
			  m[i] = m[i]*j;
		  }
	  }
  std::cout << m[i]<<std::endl;
  }
  delete [] m;
}
