#include<iostream>
#include<windows.h>


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int size_arr = 0;	
	std::cout<<"Введите размер массива:";	
	std::cin>>size_arr;
	
	
	int* arr = new int [size_arr]();
	
	for(int i = 0; i < size_arr;){
	std::cout<< "arr [" << i << "] = ";	
	std::cin>> arr[i];
	i++;
	}

	std::cout<< "Введённый массив: ";
	for(int i = 0; i < size_arr; i++){
	std::cout<< arr[i] << " ";
	}
	
	delete[] arr;
	return 0;
}
