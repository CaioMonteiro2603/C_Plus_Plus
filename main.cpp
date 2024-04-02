#include <iostream>
#include <vector>

using namespace std; 

int main()
{
	vector <int> numbers {};
    char selection {};
    
    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        if(selection == 'P' || selection == 'p') {
            if(numbers.size() == 0) {
                cout << "[] - The list is empty" << endl;
            } else {
                cout << "[";
                for(auto num: numbers)
                    cout << num << " "; 
                cout << "]" << endl; 
            }
        } else if (selection == 'A' || selection == 'a') {
            int add_a_number {};
            cout << "Enter with an integer to add to the list: ";
            cin >> add_a_number;
            numbers.push_back(add_a_number);
            cout << "number " << add_a_number << " added" << endl; 
        } else if(selection == 'M' || selection == 'm') {
            if(numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                int total{};
                for(auto num:numbers)
                    total += num; 
                cout << "The mean is: " << static_cast<double> (total)/numbers.size() << endl; 
            }
        } else if (selection == 'S' || selection == 's') {
            if(numbers.size() == 0) {
                cout << "Unable to determinate the smallest - list is empty" << endl; 
            } else {
                int smallest_integer = numbers.at(0); 
                for(auto num: numbers)
                    if(num < smallest_integer){
                        smallest_integer = num;
                        cout << "The smallest number is: " << smallest_integer << endl; 
                    }
            }
        } else if (selection == 'L' || selection == 'l') {
            if(numbers.size() == 0) {
                cout << "Unable to determinate - list is empty" << endl; 
            } else {
                int largest_integer = numbers.at(0);
                for(auto num: numbers)
                    if(num < largest_integer) {
                        largest_integer = num; 
                        cout << "The largest integer is: " << largest_integer << endl; 
                    }
            }
           
        } else if (selection == 'Q' || selection == 'q') {
            cout << "Goodbye" << endl; 
        } else {
            cout << "Unknown selection, please try again" << endl; 
        }
    } while( selection != 'Q' && selection != 'q');
    
    cout << endl;
    return 0; 
}
