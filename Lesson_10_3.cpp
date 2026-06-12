#include<iostream>
#include<windows.h> 


int** create_two_dim_array(int &rows,int &columns){	
	int** arr_int = new int*[rows];
	for(int i = 0;i < rows;i++){
	arr_int[i] = new int[columns];} 
	return arr_int;
}

void fill_two_dim_array(int** array, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
	for (int j = 0; j < cols; j++){
	array[i][j] = (i + 1) * (j + 1);}}
}

void print_two_dim_array(int** array, int rows, int cols) {
	std::cout<< "Таблица умножения:" << std::endl;
	for (int i = 0; i < rows; ++i) {
	for (int j = 0; j < cols; ++j) {
	std::cout << array[i][j] << "\t";}
	std::cout << std::endl;}
}

void delete_two_dim_array(int** array, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
	delete[] array[i];}
	delete[] array;
}


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int rows = 0;
	int columns = 0;
	
	std::cout<<"Введите количество строк: ";
	std::cin>>rows;
	std::cout<<"Введите количество столбцов: ";
	std::cin>>columns;
	
	
	int** arr = create_two_dim_array(rows,columns);
	fill_two_dim_array(arr,rows,columns);
	print_two_dim_array(arr,rows,columns);
	delete_two_dim_array(arr,rows,columns);
	
	return 0;	
}
