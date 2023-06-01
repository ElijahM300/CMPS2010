//
//
//
//lab-10 program framework.
//Author: Gordon Griesel
//Date:   Fall 2019
//Follow the instructions below.
//To compile this program, type make and press Enter.
//Elijah Morris
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstring>
using namespace std;
void displayArr(int *arr, int size);
void warmup(void);
void largeArray(int *arr, int size, int x);
void bigsmallValues(double *arr2, int size);
void selectSort(double *arr2, int size);
int *arrayExpander(int *arr3, int &size);
int *allocateMemory(int size);

int main(int argc, char *argv[])
{
    cout << argv[0] << endl;
    if(argc > 1){
       cout << argv[1] << endl;
       srand(atoi(argv[1]));
    }
    else
	   srand((unsigned)time(NULL));
    int x;
    int arr[20];
    double *arr2;
    int size;
	char input = '\0';
	while (input != 'q') {
		cout << "Lab-10 Menu of options         \n";
        cout << "-------------------------      \n";
		cout << "  1. Warmup program            \n";
		cout << "  2. Larger array values       \n";
		cout << "  3. Big Small values          \n";
		cout << "  4. Array expander            \n";
		cout << "  5. Reverse an array          \n";
		cout << "  6. All caps!                 \n";
        cout << "  9. Test                      \n";
		cout << "  q. Quit the program          \n";
        cout << "-------------------------      \n";
        cout << "Select menu item: ";
		cin >> input;
        int *arrt;
        int *arr3;
		switch (input) {
			case '1':
				warmup();
				break;
            case '2':
                cout << "Array values: ";
                for(int i = 0; i < 20; i++)
                    *(arr + i) = rand()%100 + 1;
                for(int i = 0; i < 20; i++)
                    cout << *(arr + i) << " ";
                cout << "\n";
                cout << "Enter a value please: ";
                cin >> x;
                largeArray(arr, 20, x);
                break;
            case '3':
                arr2 = new double[size];
                cout << "How big is the array?: ";
                cin >> size;
                cout << "\n";
                bigsmallValues(arr2, size);
                break;
            case '4':
                arr3 = allocateMemory(size);
                cout << "Enter starting size of array: ";
                cin >> size;
                cout << "\n";
                for(int i = 0; i < size; i++)
                  *(arr3 + i) = (int)rand()%10;
                displayArr(arr3, size);
                arr3 = arrayExpander(arr3, size);
                cout << "\n";
                cout << "After 1st expansion: \n";
                cout << "\n";
                displayArr(arr3, size);
                for(int i = 0; i < size; i++)
                  *(arr3 + i) = (int)rand()%10;
                cout << "\n";
                displayArr(arr3, size);
                cout << "\n";
                arr3 = arrayExpander(arr3, size);
                cout << "After 2nd expansion: \n";
                cout << "\n";
                displayArr(arr3, size);
                for(int i = 0; i < size; i++)
                  *(arr3 + i) = (int)rand()%10;
                displayArr(arr3, size);
                cout << "\n";
                break;
            case '9': 
                arrt = allocateMemory(20);
                *arrt = rand()%25;
                cout << arrt[0] << endl;
                cout << "\n";
                int *ptr1 = new int;
                int *ptr2 = ptr1;
                cout << "Adress stored in ptr1:  " << ptr1 << endl;
                cout << "Difference: " << ptr2 - ptr1 << endl;
                ptr2++;
                cout << "Pointer Difference: " << ptr2 - ptr1 << endl;
                cout << "Number Difference: " << (long long)ptr2 - (long long)ptr1 << endl;
                break;
            
		}
	}
    cout << "\n";
	cout << "Program complete.\n\n";
	return 0;
}

int *allocateMemory(int size){
   int *ptr = new int[size];
   return ptr;
}
void displayArr(int *arr, int size){
    for(int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
    cout << "\n";
}
void warmup(void)
{
	void getNumber(int *n);
	
	//Look at the following code.
	double value = 29.7;
	double *ptr = &value;
	//Write a cout statement that uses the ptr variable to display
	//the contents of value.
    cout << "Value: " << *ptr << endl;
    cout << "\n";




	//Look at the following array definition.
	int set[10];
	//Write a statement using pointer notation that
	//stores the value 99 in set[7].
    *(set + 7) = 99;
    cout << "set[7]: 99" << endl;
    cout << "\n";




	//Write code that dynamically allocates an array of 4 integers,
	//then uses a loop to allow the user to enter values for each
	//element of the array.
    int *arr = new int[4];
    cout << "Type 4 numbers, then press enter.\n";
    for(int i = 0; i < 4; i++)
        cin >> *(arr + i);
    cout << "The 4 array values are: ";
    for(int i = 0; i < 4; i++)
        cout << *(arr + i) << " ";
    cout << "\n";
    cout << "\n";







	//Just below, tempNumbers is a pointer that points to a dynamically
	//allocated array.
	double *tempNumbers = new double[12000];
	//Write code that releases the memory used by the array.
    delete [] tempNumbers;
    tempNumbers = nullptr;
    cout << "tempNumbers has been deleted, and set to nullptr.\n";
    cout << "\n";

	//Look at the function definition below, and follow the instructions.
	int n;
	getNumber(&n);
	cout << "n: " << n << endl;
    cout << "\n";


	//Look at the following definition.
	const int SIZE = 1000;
	//Write the definition of ptr1, a pointer to SIZE.
    const int *ptr1 = &SIZE;
    (void)ptr1;
    cout << "ptr1 has been successfully defined.\n";
    cout << "\n";

	//Look at the following definition.
	int number = 123;
	//Write the definition of ptr2, a constant pointer to an int.
    int * const ptr2 = &number;
    (void)ptr2;
    cout << "ptr2 has been successfully defined.\n";
    cout << "\n";

	//Activate the following line when you are ready.
	//
	cout << "\nThe warm-up function is complete!\n\n";
	//
	cout << endl;
}

//Look at the following function definition.
//void getNumber(int &n)
//{
//	cout << "Enter a number: ";
//	cin >> n;
//}
//In this function, the parameter n is a reference variable.
//Rewrite the function so that n is a pointer.
//Rewrite the function here, and comment-out the one above.
void getNumber(int *n)
{
	cout << "Enter a number: ";
	cin >> *n;
}
void largeArray(int *arr, int size, int x){
    cout << "Array values larger than " << x << endl;
    for(int i = 0; i < size; i++)
        if(*(arr + i) > x)
            cout << *(arr + i) << " ";
    cout << "\n";
}
void bigsmallValues(double *arr2, int size){
    for(int i = 0; i < size; i++){
        *(arr2 + i) = ((double)rand()/(double)RAND_MAX) * 100;
    }
    selectSort(arr2, size);
    cout << "5 smallest values: \n";
    for(int i = 0; i < 5; i++)
        cout << *(arr2 + i) << endl;
    cout << "\n";
    cout << "5 largest values: \n";
    for(int i = size - 5; i < size ; i++)
        cout << *(arr2 + i) << endl;
    cout << "\n"; 
    delete [] arr2;
    arr2 = nullptr;
}
void selectSort(double *arr2, int size){
    int minIndex;
    int minValue;

    for(int start = 0; start < (size - 1); start++){
        minIndex = start;
        minValue = *(arr2 + start);
        for(int index = start + 1; index < size; index++){
            if(*(arr2 + index) < minValue){
                minValue = *(arr2 + index);
                minIndex = index;
            }
        } 
        double tmp = *(arr2 + minIndex);
        *(arr2 + minIndex) = *(arr2 + start);
        *(arr2 + start) = tmp;
    }
}
int *arrayExpander(int *arr3, int &size){
    int *arr4 = new int[size*2];
    memcpy(arr4, arr3, size * sizeof(int));
    for(int i = 0; i < (size*2); i++)
        *(arr4 + (i + size)) = 0;
    size = size*2;
    delete [] arr3;
    return arr4;
}




















