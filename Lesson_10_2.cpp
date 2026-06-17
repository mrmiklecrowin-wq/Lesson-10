#include<iostream>
#include<windows.h>

double* create_array(int &size_arr){	
	double* arr = new double[size_arr]();
	return arr;
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int size_arr = 0;

	std::cout<<"Введите размер массива: ";
	std::cin>>size_arr;

	create_array(size_arr);
	double* ptr = create_array(size_arr);

	std::cout<<"Массив: ";
	
	for(int i = 0;i < size_arr;i++){
	std::cout<<ptr[i]<<" ";
	}
	
	delete[] ptr;
	
return 0;	
}
