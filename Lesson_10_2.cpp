#include<iostream>
#include<windows.h>

double create_array(int& size_arr){
	std::cout<<"Массив: ";
	int i = 0;
	double* arr = new double[size_arr]();
	while(i < size_arr){
	std::cout<<(double)arr[i]<< " ";
	i++;	
	}
	delete[]arr;
	return i;
}



int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int size_arr = 0;
	
	std::cout<<"Введите размер массива: ";
	std::cin>>size_arr;
	
	create_array(size_arr);
	
return 0;	
}
