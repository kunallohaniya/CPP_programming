                   //           ARRAY ROTATION             //
/*#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size){
    for(int i = 0; i < size; i++){
        if(input[i] > input[i+1]){
            int j = i + 1;
            return j;
        }
    }
}
int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}*/
            //                     REVERSE CHARACTER                 //
#include<iostream>
using namespace std;

	int length(char input[]){
		int count = 0;
		for(int i = 0; input[i] != '\0'; i++){
			count ++;
		}
		return count;
	}
	void reverseString(char input[]){
    int len = length(input);
	int i = 0, j = len - 1;
	while(i < j){
	    char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	  }
	}

    int main(){
	char input[100];
	cin.getline(input,100);
    reverseString(input);
	cout<<input<<endl;	
}
			
